// /*
// Script:session_wait.pc
// Author:Miladin Modrakovic
// Dated:May 2004*/

// #include <stdio.h>
// #include <sys/ipc.h>
// #include <sys/shm.h>
// #include <sqlca.h>
// #include <errno.h>
// #include "events.h"
// #include <string.h>
// #define ID_len 20



// * SGA BASE ADDRESS */
// #define SGA_BASE
// 0x80000000
// /* START ADDR of KSUSECST(V$SESSION_WAIT) */
// #define KSUSECST_ADDR
// 0x63D4BED7
// /* NUMBER of ROWS/RECORDS in KSUSECST */
// #define SESSIONS
// 218
// /* SIZE in BYTES of a ROW in KSUSECST */
// #define RECORD_SZ
// 2142
// #define KSUSSSEQ 2196
// #define KSUSSOPC 2198
// #define KSUSSP1R 2200
// #define KSUSSP2R 2204
// #define KSUSSP3R 2208
// #define KSUSELTM 2924
// /* sequence # */
// /* event # */
// /* p1 */
// /* p2 */
// /* p3 */
// void *sga_attach (void *addr, int shmid)
// {
// }
// if ( addr != 0 ) addr=(void *)shmdt(addr);
// addr=(void *)shmat(shmid,(void *)SGA_BASE,SHM_RDONLY);
// if (addr == (void *)-1) {
// printf("shmat: error attatching to SGA\n");
// exit();
// }
// return addr;
// EXEC SQL BEGIN DECLARE SECTION;
// varchar myID[ID_len], mypasswd[ID_len]; /* Database Logon */
// varchar evn
// [10];
// varchar p1r
// [10];
// varchar p2r
// [10];
// varchar p3r
// [10];
// varchar name
// [30];
// int sid
// [4];
// int cpu
// [12];
// int uflg
// [8];
// int stm
// [8];
// int wtm
// [12];
// int frequency;
// EXEC SQL END DECLARE SECTION;
// /* Declare functions */
// void get_username();
// void sql_error();
// void clear_kb(void);
// /*SetUp variables */int main(int argc, char **argv)
// {
// void *addr;
// int shmid[100];
// void *sga_address;
// int shmaddr;
// void *current_addr;
// long p1r, p2r, p3r;
// unsigned int cpu,i, tim, sid, uflg, flg, evn, psqlh, sqlh, wtm, ctm, stm, ltm ;
// unsigned int cur_time = 0;
// int seq;
// int seqs[SESSIONS];
// int cmit_time=0;
// puts("Enter sample rate:");
// scanf("%d", &frequency);
// /* Clear stdin of any extra characters. */
// clear_kb();
// /* Register sql_error() as the error handler. */
// EXEC SQL WHENEVER SQLERROR DO sql_error("Oracle error \n");
// /* get values for username and password */
// get_username(&myID, &mypasswd);
// /* Connect to Oracle. */
// EXEC SQL CONNECT :myID IDENTIFIED BY :mypasswd;
// for (i=0;i<SESSIONS;i++) { seqs[i]=0; }
// if (argc != 2) {
// fprintf(stderr, "Usage: %s shmid \n", *argv);
// exit(1);
// }
// shmid[0]=atoi(argv[1]);
// addr=0;
// addr=sga_attach(addr,shmid[0]);
// /* LOOP OVER ALL SESSIONS until CANCEL */
// while (1) {
// /* set current address to beginning of Table */
// current_addr=(void *)KSUSECST_ADDR;
// sleep(frequency);
// for ( i=1; i < SESSIONS ; i++ ) {
// seq=*(unsigned short *)((int)current_addr+KSUSSSEQ);
// evn=*(short *)
// ((int)current_addr+KSUSSOPC);
// p1r=*(long *)
// ((int)current_addr+KSUSSP1R);
// p2r=*(long *)
// ((int)current_addr+KSUSSP2R);
// p3r=*(long *)
// ((int)current_addr+KSUSSP3R);
// wtm=*(int *)
// ((int)current_addr+KSUSELTM-4);
// if ( wtm > cur_time ) cur_time=wtm;
// if ( evn != 0 ) {
// EXEC SQL INSERT INTO sga$.session_wait
// (sid, seq, event, p1, p2, p3,seconds_in_wait)
// VALUES
// (:i, :seq, :event[evn], :p1r, :p2r, :p3r, :cur_time - :wtm);if ((cmit_time++ %100)==0) EXEC SQL COMMIT;
// }
// current_addr=(void *)((int)current_addr+RECORD_SZ);
// }
// }
// }
// void get_username(varchar *username, varchar *userpasswd)
// {
// char name[ID_len];
// char *password;
// char myprompt[11]="Password: ";
// printf("Enter username: ");
// scanf("%s",&name);
// strcpy((char*)(username->arr), name);
// username->len = strlen((char*)(username->arr));
// password = (char*)getpass(myprompt);
// strcpy((char*)(userpasswd->arr), password);
// userpasswd->len = strlen((char*)(userpasswd->arr));
// }
// void sql_error(char *msg)
// {
// char err_msg[512];
// int buff_len, msg_len;
// /* Avoid infinitely loop due to the ROLLBACK error*/
// EXEC SQL WHENEVER SQLERROR CONTINUE;
// printf("\n%s\n",msg);
// /* Call sqlglm() to get the complete text of the error message */
// buff_len = sizeof(err_msg);
// sqlglm(err_msg, &buff_len, &msg_len);
// printf("%.*s\n", msg_len, err_msg);
// }
// /* Rollback the stuff */
// EXEC SQL ROLLBACK RELEASE;
// exit(1);
// void clear_kb(void)
// /* Clears stdin of any waiting characters. */
// {
// char junk[80];
// gets(junk);
// }