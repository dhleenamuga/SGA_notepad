#define SGA_BASE   0x0000000060000000                                           
#define START  0x0000000168CA6200                                               
#define PROCESSES   319                                                         
#define STATS   2036                                                            
#define NEXT  10216                                                             
#define KSSPAFLG 4     /* offset 4  size 4 */                                   
#define KSUSEFLG 8     /* offset 8  size 4 */                                   
#define KSUSENUM 12     /* offset 12  size 4 */                                 
#define KSUSESTN 16     /* offset 16  size 4 */                                 
#define KSUSESTV 24     /* offset 24  size 8 */                                 
#define KSUUDSES 56     /* offset 56  size 4 */                                 
#define KSUUDUID 60     /* offset 60  size 4 */                                 
#define KSUUDLUI 64     /* offset 64  size 4 */                                 
#define KSUUDNAM 68     /* offset 68  size 128 */                               
#define KSUUDLNA 196     /* offset 197  size 128 */                             
#define KSUSEXNM 326     /* offset 326  size 1024 */                            
#define KSUUDPRV 1492     /* offset 1493  size 1 */                             
#define KSUUDOCT 1494     /* offset 1494  size 1 */                             
#define KSUUDFLG 1496     /* offset 1496  size 4 */                             
#define KSUUDPFN 1644     /* offset 1644  size 4 */                             
#define KSUUDSID 1652     /* offset 1652  size 4 */                             
#define KSUUDSNA 1656     /* offset 1656  size 128 */                           
#define KSUUDSAE 1792     /* offset 1792  size 4 */                             
#define KSUUDCON 1804     /* offset 1804  size 128 */                           
#define KSUUDTXLP 2012     /* offset 2012  size 4 */                            
#define KSUSETRN 2024     /* offset 2024  size 8 */                             
#define KSUSEBRN 2032     /* offset 2032  size 8 */                             
#define KSUSESEQ 2064     /* offset 2064  size 2 */                             
#define KSUSSSEQ 2064     /* offset 2064  size 2 */                             
#define KSUSEOPC 2066     /* offset 2066  size 2 */                             
#define KSUSSOPC 2066     /* offset 2066  size 2 */                             
#define KSUSSP1R 2072     /* offset 2072  size 8 */                             
#define KSUSEP1R 2072     /* offset 2072  size 8 */                             
#define KSUSEP1 2072     /* offset 2072  size 8 */                              
#define KSUSSP1 2072     /* offset 2072  size 8 */                              
#define KSUSEP2R 2080     /* offset 2080  size 8 */                             
#define KSUSEP2 2080     /* offset 2080  size 8 */                              
#define KSUSSP2R 2080     /* offset 2080  size 8 */                             
#define KSUSSP2 2080     /* offset 2080  size 8 */                              
#define KSUSEP3 2088     /* offset 2088  size 8 */                              
#define KSUSSP3 2088     /* offset 2088  size 8 */                              
#define KSUSSP3R 2088     /* offset 2088  size 8 */                             
#define KSUSEP3R 2088     /* offset 2088  size 8 */                             
#define KSUSSTIM 2096     /* offset 2096  size 4 */                             
#define KSUSETIM 2096     /* offset 2096  size 4 */                             
#define KSUSSTMBV 2100     /* offset 2100  size 4 */                            
#define KSUSSACT 2160     /* offset 2160  size 4 */                             
#define KSUSESER 2172     /* offset 2172  size 2 */                             
#define KSQPSWAT 2200     /* offset 2200  size 8 */                             
#define KSQPSRES 2208     /* offset 2208  size 8 */                             
#define KSQPSRESLAT 2216     /* offset 2216  size 8 */                          
#define KSUSEIDL 2224     /* offset 2224  size 2 */                             
#define KSUSECRE 2256     /* offset 2256  size 8 */                             
#define KSUSECSN 2264     /* offset 2264  size 2 */                             
#define KSUSESOW 2408     /* offset 2408  size 4 */                             
#define KSUSESQL 2424     /* offset 2424  size 8 */                             
#define KSUSESQH 2436     /* offset 2436  size 4 */                             
#define KSUSESCH 2440     /* offset 2440  size 2 */                             
#define KSUSESPH 2444     /* offset 2444  size 4 */                             
#define KSUSEFULLSPH 2448     /* offset 2448  size 4 */                         
#define KSUSESESTA 2456     /* offset 2456  size 7 */                           
#define KSUSESEID 2460     /* offset 2460  size 4 */                            
#define KSUSEPEO 2472     /* offset 2472  size 4 */                             
#define KSUSEPES 2476     /* offset 2476  size 4 */                             
#define KSUSEPCO 2484     /* offset 2484  size 4 */                             
#define KSUSEPCS 2488     /* offset 2488  size 4 */                             
#define KSUSEPSQ 2496     /* offset 2496  size 8 */                             
#define KSUSEPHA 2508     /* offset 2508  size 4 */                             
#define KSUSEPCH 2512     /* offset 2512  size 2 */                             
#define KSUSEPPH 2516     /* offset 2516  size 4 */                             
#define KSUSEPESTA 2520     /* offset 2520  size 7 */                           
#define KSUSEPEID 2524     /* offset 2524  size 4 */                            
#define KSUSEUNM 2560     /* offset 2560  size 128 */                           
#define KSUSEMNM 2696     /* offset 2696  size 64 */                            
#define KSUSEMNP 2768     /* offset 2768  size 4 */                             
#define KSUSETID 2772     /* offset 2772  size 30 */                            
#define KSUSEPID 2816     /* offset 2816  size 24 */                            
#define KSUSEPNM 2912     /* offset 2912  size 48 */                            
#define KSUSEFIL 3252     /* offset 3252  size 2 */                             
#define KSUSEBLK 3256     /* offset 3256  size 4 */                             
#define KSUSESLT 3260     /* offset 3260  size 2 */                             
#define KSUSEOBJ 3264     /* offset 3264  size 4 */                             
#define KSUSEFIX 3280     /* offset 3280  size 8 */                             
#define KSUSECLI 3288     /* offset 3288  size 64 */                            
#define KSUSELTM 3608     /* offset 3608  size 7 */                             
#define KSUSEPFL 3640     /* offset 3640  size 4 */                             
#define KSUSEQCSID 3664     /* offset 3664  size 4 */                           
#define KSUSEFLG2 3768     /* offset 3768  size 4 */                            
#define KSUSEFT 3772     /* offset 3772  size 4 */                              
#define KSUSEFM 3776     /* offset 3776  size 4 */                              
#define KSUSEFS 3780     /* offset 3780  size 4 */                              
#define KSUSETMC 4676     /* offset 4676  size 4 */                             
#define KSUSECLID 4688     /* offset 4688  size 64 */                           
#define KSUSEPGAMAN 4696     /* offset 4696  size 8 */                          
#define KSUSEPGAAUTO 4704     /* offset 4704  size 8 */                         
#define KSUSEECID 4784     /* offset 4784  size 64 */                           
#define KSUSEORAFN 9624     /* offset 9624  size 4 */                           
#define KSUSELTXIDFLG 9636     /* offset 9636  size 4 */                        
#define KSUSELTXID 9648     /* offset 9648  size 8 */                           
#define KSUSEFLG3 10000     /* offset 10000  size 4 */                          
#define OS_CPU_QT_WAIT_TIME 24                                                  
#define REQUESTS_TO_FROM_CLIENT 28                                              
#define LOGONS_CUMULATIVE 32                                                    
#define LOGONS_CURRENT 36                                                       
#define OPENED_CURSORS_CUMULATIVE 40                                            
#define OPENED_CURSORS_CURRENT 44                                               
#define USER_COMMITS 48                                                         
#define USER_ROLLBACKS 52                                                       
#define USER_CALLS 56                                                           
#define RECURSIVE_CALLS 60                                                      
#define RECURSIVE_CPU_USAGE 64                                                  
#define PINNED_CURSORS_CURRENT 68                                               
#define USER_LOGONS_CUMULATIVE 72                                               
#define USER_LOGOUTS_CUMULATIVE 76                                              
#define SESSION_LOGICAL_READS 80                                                
#define SESSION_LOGICAL_READS_IN_LOCAL_NUMA_GROUP 84                            
#define SESSION_LOGICAL_READS_IN_REMOTE_NUMA_GROUP 88                           
#define SESSION_STORED_PROCEDURE_SPACE 92                                       
#define CPU_USED_WHEN_CALL_STARTED 96                                           
#define CPU_USED_BY_THIS_SESSION 100                                            
#define DB_TIME 104                                                             
#define CPU_USED_BY_LWTS_FOR_THIS_SESSION 108                                   
#define DB_TIME_OF_LWTS_FOR_THIS_SESSION 112                                    
#define CLUSTER_WAIT_TIME 116                                                   
#define CONCURRENCY_WAIT_TIME 120                                               
#define APPLICATION_WAIT_TIME 124                                               
#define USER_I_O_WAIT_TIME 128                                                  
#define SCHEDULER_WAIT_TIME 132                                                 
#define NON_IDLE_WAIT_TIME 136                                                  
#define NON_IDLE_WAIT_COUNT 140                                                 
#define IN_CALL_IDLE_WAIT_TIME 144                                              
#define SESSION_CONNECT_TIME 148                                                
#define PROCESS_LAST_NON_IDLE_TIME 152                                          
#define SESSION_UGA_MEMORY 156                                                  
#define SESSION_UGA_MEMORY_MAX 160                                              
#define MESSAGES_SENT 164                                                       
#define MESSAGES_RECEIVED 168                                                   
#define BACKGROUND_TIMEOUTS 172                                                 
#define REMOTE_ORADEBUG_REQUESTS 176                                            
#define SESSION_PGA_MEMORY 180                                                  
#define SESSION_PGA_MEMORY_MAX 184                                              
#define RECURSIVE_SYSTEM_API_INVOCATIONS 188                                    
#define ENQUEUE_TIMEOUTS 192                                                    
#define ENQUEUE_WAITS 196                                                       
#define ENQUEUE_DEADLOCKS 200                                                   
#define ENQUEUE_REQUESTS 204                                                    
#define ENQUEUE_CONVERSIONS 208                                                 
#define ENQUEUE_RELEASES 212                                                    
#define GLOBAL_ENQUEUE_GETS_SYNC 216                                            
#define GLOBAL_ENQUEUE_GETS_ASYNC 220                                           
#define GLOBAL_ENQUEUE_GET_TIME 224                                             
#define GLOBAL_ENQUEUE_RELEASES 228                                             
#define PHYSICAL_READ_TOTAL_IO_REQUESTS 232                                     
#define PHYSICAL_READ_TOTAL_MULTI_BLOCK_REQUESTS 236                            
#define PHYSICAL_READ_REQUESTS_OPTIMIZED 240                                    
#define PHYSICAL_READ_TOTAL_BYTES_OPTIMIZED 244                                 
#define PHYSICAL_READ_PARTIAL_REQUESTS 248                                      
#define PHYSICAL_READ_TOTAL_BYTES 252                                           
#define PHYSICAL_WRITE_REQUESTS_OPTIMIZED 256                                   
#define PHYSICAL_WRITE_TOTAL_BYTES_OPTIMIZED 260                                
#define CELL_WRITES_TO_FLASH_CACHE 264                                          
#define CELL_OVERWRITES_IN_FLASH_CACHE 268                                      
#define CELL_PARTIAL_WRITES_IN_FLASH_CACHE 272                                  
#define CELL_WRITES_TO_FLASH_CACHE_FOR_TEMP_IO 276                              
#define PHYSICAL_WRITE_TOTAL_IO_REQUESTS 280                                    
#define PHYSICAL_WRITE_TOTAL_MULTI_BLOCK_REQUESTS 284                           
#define PHYSICAL_WRITE_TOTAL_BYTES 288                                          
#define CELL_PHYSICAL_IO_INTERCONNECT_BYTES 292                                 
#define SPARE_STATISTIC_1 296                                                   
#define SPARE_STATISTIC_2 300                                                   
#define SPARE_STATISTIC_3 304                                                   
#define SPARE_STATISTIC_4 308                                                   
#define SPARE_STATISTIC_5 312                                                   
#define SPARE_STATISTIC_6 316                                                   
#define SPARE_STATISTIC_7 320                                                   
#define SPARE_STATISTIC_8 324                                                   
#define SPARE_STATISTIC_9 328                                                   
#define SPARE_STATISTIC_10 332                                                  
#define SPARE_STATISTIC_11 336                                                  
#define SPARE_STATISTIC_12 340                                                  
#define SPARE_STATISTIC_13 344                                                  
#define SPARE_STATISTIC_14 348                                                  
#define SPARE_STATISTIC_15 352                                                  
#define SPARE_STATISTIC_16 356                                                  
#define SPARE_STATISTIC_17 360                                                  
#define SPARE_STATISTIC_18 364                                                  
#define SPARE_STATISTIC_19 368                                                  
#define SPARE_STATISTIC_20 372                                                  
#define SPARE_STATISTIC_21 376                                                  
#define SPARE_STATISTIC_22 380                                                  
#define SPARE_STATISTIC_23 384                                                  
#define SPARE_STATISTIC_24 388                                                  
#define SPARE_STATISTIC_25 392                                                  
#define SPARE_STATISTIC_26 396                                                  
#define SPARE_STATISTIC_27 400                                                  
#define SPARE_STATISTIC_28 404                                                  
#define SPARE_STATISTIC_29 408                                                  
#define SPARE_STATISTIC_30 412                                                  
#define SPARE_STATISTIC_31 416                                                  
#define SPARE_STATISTIC_32 420                                                  
#define SPARE_STATISTIC_33 424                                                  
#define SPARE_STATISTIC_34 428                                                  
#define SPARE_STATISTIC_35 432                                                  
#define SPARE_STATISTIC_36 436                                                  
#define SPARE_STATISTIC_37 440                                                  
#define SPARE_STATISTIC_38 444                                                  
#define SPARE_STATISTIC_39 448                                                  
#define SPARE_STATISTIC_40 452                                                  
#define IPC_CPU_USED_BY_THIS_SESSION 456                                        
#define PHYSICAL_READ_SNAP_IO_REQUESTS_BASE 460                                 
#define PHYSICAL_READ_SNAP_IO_REQUESTS_COPY 464                                 
#define PHYSICAL_READ_SNAP_IO_REQUESTS_NO_DATA 468                              
#define PHYSICAL_READ_SNAP_BYTES_BASE 472                                       
#define PHYSICAL_READ_SNAP_BYTES_COPY 476                                       
#define PHYSICAL_WRITE_SNAP_IO_REQUESTS_NEW_ALLOCATIONS 480                     
#define CLIENT_LOST_PACKETS 484                                                 
#define CLIENT_TOTAL_NUMBER_OF_RETRANSMITTED_PACKETS 488                        
#define CLIENT_TOTAL_BYTES_ACKED 492                                            
#define CLIENT_TOTAL_BYTES_RECEIVED 496                                         
#define CLIENT_TIME__USEC__BUSY_SENDING_DATA 500                                
#define CLIENT_TIME__USEC__LIMITED_BY_RECEIVE_WINDOW 504                        
#define CLIENT_TIME__USEC__LIMITED_BY_SEND_BUFFER 508                           
#define CLIENT_DATA_SEGMENTS_IN 512                                             
#define CLIENT_DATA_SEGMENTS_OUT 516                                            
#define CLIENT_TIME__USEC__BUSY_SENDING_DATA_UNDER_CONGESTION 520               
#define CLIENT_TIME__USEC__ROUND_TRIP_TIME 524                                  
#define CLIENT_TIME__USEC__ROUND_TRIP_TIME_VARIANCE 528                         
#define CLIENT_SEND_CONGESTION_WINDOW 532                                       
#define CLIENT_ADVERTISED_SEND_WINDOW 536                                       
#define CLIENT_ADVERTISED_RECEIVE_WINDOW 540                                    
#define CLIENT_TIME__USEC__LAST_DATA_SENT 544                                   
#define CLIENT_TIME__USEC__LAST_DATA_RECEIVED 548                               
#define CLIENT_TIME__USEC__LAST_ACK_SENT 552                                    
#define CLIENT_TIME__USEC__LAST_ACK_RECEIVED 556                                
#define CLIENT_PATH_MAXIMUM_TRANSMISSION_UNIT_MTU_ 560                          
#define GCS_MESSAGES_SENT 564                                                   
#define GES_MESSAGES_SENT 568                                                   
#define GLOBAL_ENQUEUE_CPU_USED_BY_THIS_SESSION 572                             
#define GCS_DATA_BLOCK_ACCESS_RECORDS 576                                       
#define GCS_DATA_BLOCK_ACCESS_RECORD_DROPS 580                                  
#define GCS_STATS_MANAGEMENT__SCM__PROCESS_POSTS 584                            
#define GCS_READ_MOSTLY_LOCK_GRANTS 588                                         
#define GCS_ANTI_LOCKS_CREATED 592                                              
#define GCS_READ_MOSTLY_LOCK_FAILURES 596                                       
#define GCS_AFFINITY_LOCK_GRANTS 600                                            
#define GCS_AFFINITY_LOCK_FAILURES 604                                          
#define KA_MESSAGES_SENT 608                                                    
#define KA_GRANTS_RECEIVED 612                                                  
#define KA_LOCAL_MESSAGES_RECEIVED 616                                          
#define KA_LOCAL_MESSAGE_WAITS 620                                              
#define KA_WAIT_DUE_TO_TIMEOUT 624                                              
#define KA_WAIT_DUE_TO_TRIGGER 628                                              
#define KA_WAIT_CALLS_SUPPRESSED 632                                            
#define KA_WAIT_CALLS_FOR_INVALID_KGA 636                                       
#define KA_WAIT_CALLS_ATTEMPTED 640                                             
#define KA_WAIT_CALLS_OTHER 644                                                 
#define MAX_CF_ENQ_HOLD_TIME 648                                                
#define TOTAL_CF_ENQ_HOLD_TIME 652                                              
#define TOTAL_NUMBER_OF_CF_ENQ_HOLDERS 656                                      
#define DB_BLOCK_GETS 660                                                       
#define DB_BLOCK_GETS_FROM_CACHE 664                                            
#define DB_BLOCK_GETS_FROM_CACHE__FASTPATH_ 668                                 
#define DB_BLOCK_GETS_DIRECT 672                                                
#define CONSISTENT_GETS 676                                                     
#define CONSISTENT_GETS_FROM_CACHE 680                                          
#define CONSISTENT_GETS_PIN 684                                                 
#define CONSISTENT_GETS_PIN__FASTPATH_ 688                                      
#define CONSISTENT_GETS_EXAMINATION 692                                         
#define CONSISTENT_GETS_EXAMINATION__FASTPATH_ 696                              
#define CONSISTENT_GETS_DIRECT 700                                              
#define FASTPATH_CONSISTENT_GET_QUOTA_LIMIT 704                                 
#define LOGICAL_READ_BYTES_FROM_CACHE 708                                       
#define PHYSICAL_READS 712                                                      
#define PHYSICAL_READS_CACHE 716                                                
#define PHYSICAL_READ_FLASH_CACHE_HITS 720                                      
#define PHYSICAL_READS_DIRECT 724                                               
#define PHYSICAL_READ_IO_REQUESTS 728                                           
#define PHYSICAL_READ_BYTES 732                                                 
#define DB_BLOCK_CHANGES 736                                                    
#define CONSISTENT_CHANGES 740                                                  
#define RECOVERY_BLOCKS_READ 744                                                
#define RECOVERY_BLOCKS_READ_FOR_LOST_WRITE_DETECTION 748                       
#define RECOVERY_BLOCKS_SKIPPED_LOST_WRITE_CHECKS 752                           
#define PHYSICAL_WRITES 756                                                     
#define PHYSICAL_WRITES_DIRECT 760                                              
#define PHYSICAL_WRITES_FROM_CACHE 764                                          
#define PHYSICAL_WRITE_IO_REQUESTS 768                                          
#define FLASH_CACHE_INSERTS 772                                                 
#define PHYSICAL_READS_DIRECT_TEMPORARY_TABLESPACE 776                          
#define PHYSICAL_WRITES_DIRECT_TEMPORARY_TABLESPACE 780                         
#define PHYSICAL_WRITE_BYTES 784                                                
#define FLASH_CACHE_EVICTION__INVALIDATED 788                                   
#define FLASH_CACHE_EVICTION__BUFFER_PINNED 792                                 
#define FLASH_CACHE_EVICTION__AGED_OUT 796                                      
#define FLASH_CACHE_INSERT_SKIP__NOT_CURRENT 800                                
#define FLASH_CACHE_INSERT_SKIP__DBWR_OVERLOADED 804                            
#define FLASH_CACHE_INSERT_SKIP__EXISTS 808                                     
#define FLASH_CACHE_INSERT_SKIP__NOT_USEFUL 812                                 
#define FLASH_CACHE_INSERT_SKIP__MODIFICATION 816                               
#define FLASH_CACHE_INSERT_SKIP__CORRUPT 820                                    
#define DB_CORRUPT_BLOCKS_DETECTED 824                                          
#define DB_CORRUPT_BLOCKS_RECOVERED 828                                         
#define SESSION_REFERENCED_A_BUFFER_ON_DRAM 832                                 
#define SESSION_REFERENCED_A_BUFFER_ON_XMEM 836                                 
#define PHYSICAL_WRITES_NON_CHECKPOINT 840                                      
#define SUMMED_DIRTY_QUEUE_LENGTH 844                                           
#define DBWR_CHECKPOINT_BUFFERS_WRITTEN 848                                     
#define DBWR_THREAD_CHECKPOINT_BUFFERS_WRITTEN 852                              
#define DBWR_TABLESPACE_CHECKPOINT_BUFFERS_WRITTEN 856                          
#define DBWR_PARALLEL_QUERY_CHECKPOINT_BUFFERS_WRITTEN 860                      
#define DBWR_OBJECT_DROP_BUFFERS_WRITTEN 864                                    
#define DBWR_TRANSACTION_TABLE_WRITES 868                                       
#define DBWR_UNDO_BLOCK_WRITES 872                                              
#define DBWR_REVISITED_BEING_WRITTEN_BUFFER 876                                 
#define DBWR_LRU_SCANS 880                                                      
#define DBWR_CHECKPOINTS 884                                                    
#define DBWR_FUSION_WRITES 888                                                  
#define PREFETCH_CLIENTS___KEEP 892                                             
#define PREFETCH_CLIENTS___RECYCLE 896                                          
#define PREFETCH_CLIENTS___DEFAULT 900                                          
#define PREFETCH_CLIENTS___2K 904                                               
#define PREFETCH_CLIENTS___4K 908                                               
#define PREFETCH_CLIENTS___8K 912                                               
#define PREFETCH_CLIENTS___16K 916                                              
#define PREFETCH_CLIENTS___32K 920                                              
#define BPS_COMMIT_WAIT 924                                                     
#define BPS_REDO_WAIT 928                                                       
#define BPS_SESSION_WAIT 932                                                    
#define CHANGE_WRITE_TIME 936                                                   
#define EXCHANGE_DEADLOCKS 940                                                  
#define FREE_BUFFER_REQUESTED 944                                               
#define DIRTY_BUFFERS_INSPECTED 948                                             
#define PINNED_BUFFERS_INSPECTED 952                                            
#define HOT_BUFFERS_MOVED_TO_HEAD_OF_LRU 956                                    
#define FREE_BUFFER_INSPECTED 960                                               
#define COMMIT_CLEANOUT_FAILURES__WRITE_DISABLED 964                            
#define COMMIT_CLEANOUT_FAILURES__BLOCK_LOST 968                                
#define COMMIT_CLEANOUT_FAILURES__CANNOT_PIN 972                                
#define COMMIT_CLEANOUT_FAILURES__HOT_BACKUP_IN_PROGRESS 976                    
#define COMMIT_CLEANOUT_FAILURES__BUFFER_BEING_WRITTEN 980                      
#define COMMIT_CLEANOUT_FAILURES__CALLBACK_FAILURE 984                          
#define COMMIT_CLEANOUT_FAILURES__DELAYED_LOG 988                               
#define COMMIT_CLEANOUT_FAILURES__FLASHBACK 992                                 
#define COMMIT_CLEANOUTS 996                                                    
#define COMMIT_CLEANOUTS_SUCCESSFULLY_COMPLETED 1000                            
#define SAVED_CLEANOUT_FAILURES__WRITE_DISABLED 1004                            
#define SAVED_CLEANOUT_FAILURES__CANNOT_PIN 1008                                
#define SAVED_CLEANOUT_FAILURES__HOT_BACKUP_IN_PROGRESS 1012                    
#define SAVED_CLEANOUT_FAILURES__BUFFER_BEING_WRITTEN 1016                      
#define SAVED_CLEANOUT_FAILURES__CALLBACK_FAILURE 1020                          
#define SAVED_CLEANOUT_FAILURES__FLASHBACK 1024                                 
#define SAVED_CLEANOUT_FAILURES__DELAYED_LOG 1028                               
#define SAVED_CLEANOUTS 1032                                                    
#define SAVED_CLEANOUTS_SUCCESSFULLY_COMPLETED 1036                             
#define RECOVERY_ARRAY_READS 1040                                               
#define RECOVERY_ARRAY_READ_TIME 1044                                           
#define CR_BLOCKS_CREATED 1048                                                  
#define PRIVATE_CR_BLOCKS_CREATED 1052                                          
#define CURRENT_BLOCKS_CONVERTED_FOR_CR 1056                                    
#define SWITCH_CURRENT_TO_NEW_BUFFER 1060                                       
#define SWITCH_CURRENT_CAUSED_BY_OUR_PIN 1064                                   
#define WRITE_CLONES_CREATED_IN_FOREGROUND 1068                                 
#define WRITE_CLONES_CREATED_IN_BACKGROUND 1072                                 
#define WRITE_CLONES_CREATED_FOR_RECOVERY 1076                                  
#define CHECKPOINT_CLONES_CREATED_FOR_ADG_RECOVERY 1080                         
#define RECOVERY_BLOCK_GETS_FROM_CACHE 1084                                     
#define PHYSICAL_READS_CACHE_PREFETCH 1088                                      
#define PHYSICAL_READS_PREFETCH_WARMUP 1092                                     
#define PREFETCHED_BLOCKS_AGED_OUT_BEFORE_USE 1096                              
#define PREFETCH_WARMUP_BLOCKS_AGED_OUT_BEFORE_USE 1100                         
#define PREFETCH_WARMUP_BLOCKS_FLUSHED_OUT_BEFORE_USE 1104                      
#define PHYSICAL_READS_RETRY_CORRUPT 1108                                       
#define PHYSICAL_READS_DIRECT__LOB_ 1112                                        
#define PHYSICAL_WRITES_DIRECT__LOB_ 1116                                       
#define COLD_RECYCLE_READS 1120                                                 
#define SHARED_HASH_LATCH_UPGRADES___NO_WAIT 1124                               
#define SHARED_HASH_LATCH_UPGRADES___WAIT 1128                                  
#define PHYSICAL_READS_FOR_FLASHBACK_NEW 1132                                   
#define FLASHBACK_CACHE_READ_OPTIMIZATIONS_FOR_BLOCK_NEW 1136                   
#define FLASHBACK_DIRECT_READ_OPTIMIZATIONS_FOR_BLOCK_NEW 1140                  
#define FLASHBACK_SECUREFILE_CACHE_READ_OPTIMIZATIONS_FOR_BLOCK_NEW 1144        
#define FLASHBACK_SECUREFILE_DIRECT_READ_OPTIMIZATIONS_FOR_BLOCK_NEW 1148       
#define PHYSICAL_READS_CACHE_FOR_SECUREFILE_FLASHBACK_BLOCK_NEW 1152            
#define PHYSICAL_READS_DIRECT_FOR_SECUREFILE_FLASHBACK_BLOCK_NEW 1156           
#define BLOCKS_ENCRYPTED 1160                                                   
#define BLOCKS_DECRYPTED 1164                                                   
#define DATA_WAREHOUSING_SCANNED_OBJECTS 1168                                   
#define DATA_WAREHOUSING_SCANNED_BLOCKS 1172                                    
#define DATA_WAREHOUSING_SCANNED_BLOCKS___MEMORY 1176                           
#define DATA_WAREHOUSING_SCANNED_BLOCKS___FLASH 1180                            
#define DATA_WAREHOUSING_SCANNED_BLOCKS___DISK 1184                             
#define DATA_WAREHOUSING_SCANNED_BLOCKS___OFFLOAD 1188                          
#define DATA_WAREHOUSING_EVICTED_OBJECTS 1192                                   
#define DATA_WAREHOUSING_EVICTED_OBJECTS___COOLING 1196                         
#define DATA_WAREHOUSING_EVICTED_OBJECTS___REPLACE 1200                         
#define DATA_WAREHOUSING_COOLING_ACTION 1204                                    
#define DRAM_CLEAN_BUFFERS_AVAILABLE_AND_ABOVE_THRESHOLD 1208                   
#define DRAM_CLEAN_BUFFERS_AVAILABLE_AND_IS_REQUESTED 1212                      
#define XMEM_CLEAN_BUFFERS_AVAILABLE_AND_USED 1216                              
#define XMEM_CLEAN_BUFFERS_NOT_AVAILABLE_SO_SWITCH_TO_MAIN 1220                 
#define XMEM_BUFFER_SWITCH_NEEDED_BUT_NO_FREE_DRAM_BUFFER 1224                  
#define XMEM__DRAM_ENFORCED_BUT_NO_FREE_BUFFER 1228                             
#define CALLS_TO_KCMGCS 1232                                                    
#define CALLS_TO_KCMGRS 1236                                                    
#define CALLS_TO_KCMGAS 1240                                                    
#define SCN_INCREMENTS_DUE_TO_ANOTHER_DATABASE 1244                             
#define CALLS_TO_GET_SNAPSHOT_SCN__KCMGSS 1248                                  
#define REDO_BLOCKS_READ_FOR_RECOVERY 1252                                      
#define REDO_K_BYTES_READ_FOR_RECOVERY 1256                                     
#define REDO_K_BYTES_READ_FOR_TERMINAL_RECOVERY 1260                            
#define STREAMING_STALL_REAP 1264                                               
#define STREAMING_NO_STALL_REAP 1268                                            
#define REDO_ENTRIES 1272                                                       
#define REDO_SIZE 1276                                                          
#define REDO_ENTRIES_FOR_LOST_WRITE_DETECTION 1280                              
#define REDO_SIZE_FOR_LOST_WRITE_DETECTION 1284                                 
#define REDO_SIZE_FOR_DIRECT_WRITES 1288                                        
#define REDO_BUFFER_ALLOCATION_RETRIES 1292                                     
#define REDO_WASTAGE 1296                                                       
#define REDO_WRITE_ACTIVE_STRANDS 1300                                          
#define REDO_WRITES 1304                                                        
#define REDO_WRITES__GROUP_0_ 1308                                              
#define REDO_WRITES__GROUP_1_ 1312                                              
#define REDO_WRITES__GROUP_2_ 1316                                              
#define REDO_WRITES__GROUP_3_ 1320                                              
#define REDO_WRITES__GROUP_4_ 1324                                              
#define REDO_WRITES__GROUP_5_ 1328                                              
#define REDO_WRITES__GROUP_6_ 1332                                              
#define REDO_WRITES__GROUP_7_ 1336                                              
#define REDO_WRITES_ADAPTIVE_ALL 1340                                           
#define REDO_WRITES_ADAPTIVE_WORKER 1344                                        
#define REDO_WRITES_COALESCED 1348                                              
#define REDO_BLOCKS_WRITTEN 1352                                                
#define REDO_BLOCKS_WRITTEN__GROUP_0_ 1356                                      
#define REDO_BLOCKS_WRITTEN__GROUP_1_ 1360                                      
#define REDO_BLOCKS_WRITTEN__GROUP_2_ 1364                                      
#define REDO_BLOCKS_WRITTEN__GROUP_3_ 1368                                      
#define REDO_BLOCKS_WRITTEN__GROUP_4_ 1372                                      
#define REDO_BLOCKS_WRITTEN__GROUP_5_ 1376                                      
#define REDO_BLOCKS_WRITTEN__GROUP_6_ 1380                                      
#define REDO_BLOCKS_WRITTEN__GROUP_7_ 1384                                      
#define REDO_WRITE_SIZE_COUNT_____4KB_ 1388                                     
#define REDO_WRITE_SIZE_COUNT_____8KB_ 1392                                     
#define REDO_WRITE_SIZE_COUNT____16KB_ 1396                                     
#define REDO_WRITE_SIZE_COUNT____32KB_ 1400                                     
#define REDO_WRITE_SIZE_COUNT____64KB_ 1404                                     
#define REDO_WRITE_SIZE_COUNT___128KB_ 1408                                     
#define REDO_WRITE_SIZE_COUNT___256KB_ 1412                                     
#define REDO_WRITE_SIZE_COUNT___512KB_ 1416                                     
#define REDO_WRITE_SIZE_COUNT__1024KB_ 1420                                     
#define REDO_WRITE_SIZE_COUNT__INF_ 1424                                        
#define REDO_WRITE_TIME 1428                                                    
#define REDO_WRITE_TIME__USEC_ 1432                                             
#define REDO_WRITE_WORKER_DELAY__USEC_ 1436                                     
#define REDO_WRITE_WORKER_DELAY_COUNT 1440                                      
#define REDO_BLOCKS_CHECKSUMMED_BY_FG__EXCLUSIVE_ 1444                          
#define REDO_BLOCKS_CHECKSUMMED_BY_LGWR 1448                                    
#define REDO_LOG_SPACE_REQUESTS 1452                                            
#define REDO_LOG_SPACE_WAIT_TIME 1456                                           
#define REDO_ORDERING_MARKS 1460                                                
#define REDO_SUBSCN_MAX_COUNTS 1464                                             
#define REDO_WRITE_BROADCAST_ACK_TIME 1468                                      
#define REDO_WRITE_BROADCAST_ACK_COUNT 1472                                     
#define REDO_WRITE_BROADCAST_LGWR_POST_COUNT 1476                               
#define REDO_SYNCH_TIME 1480                                                    
#define REDO_SYNCH_TIME__USEC_ 1484                                             
#define REDO_SYNCH_TIME_OVERHEAD__USEC_ 1488                                    
#define REDO_SYNCH_TIME_OVERHEAD_COUNT____2MS_ 1492                             
#define REDO_SYNCH_TIME_OVERHEAD_COUNT____8MS_ 1496                             
#define REDO_SYNCH_TIME_OVERHEAD_COUNT___32MS_ 1500                             
#define REDO_SYNCH_TIME_OVERHEAD_COUNT__128MS_ 1504                             
#define REDO_SYNCH_TIME_OVERHEAD_COUNT__INF_ 1508                               
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__USEC_ 1512                              
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP_COUNT 1516                               
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__20US_ 1520                              
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__40US_ 1524                              
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__60US_ 1528                              
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__80US_ 1532                              
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__100US_ 1536                             
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__120US_ 1540                             
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__160US_ 1544                             
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__240US_ 1548                             
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__400US_ 1552                             
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__720US_ 1556                             
#define REDO_SYNCH_FAST_SYNC_ALL_SLEEP__INF_ 1560                               
#define REDO_SYNCH_FAST_SYNC_SLEEP_COUNT 1564                                   
#define REDO_SYNCH_FAST_SYNC_SLEEP__USEC_ 1568                                  
#define REDO_SYNCH_FAST_SYNC_SLEEP_O_H__USEC_ 1572                              
#define REDO_SYNCH_FAST_SYNC_SPIN_COUNT 1576                                    
#define REDO_SYNCH_FAST_SYNC_SPIN__USEC_ 1580                                   
#define REDO_SYNCH_FAST_SYNC_BACKOFF_COUNT 1584                                 
#define REDO_SYNCH_FAST_SYNC_BACKOFF__USEC_ 1588                                
#define REDO_SYNCH_FAST_SYNC_BACKOFF_O_H__USEC_ 1592                            
#define REDO_SYNCH_WRITES 1596                                                  
#define REDO_SYNCH_LONG_WAITS 1600                                              
#define REDO_WRITE_GATHER_TIME 1604                                             
#define REDO_WRITE_SCHEDULE_TIME 1608                                           
#define REDO_WRITE_ISSUE_TIME 1612                                              
#define REDO_WRITE_FINISH_TIME 1616                                             
#define REDO_WRITE_TOTAL_TIME 1620                                              
#define REDO_SYNCH_POLL_WRITES 1624                                             
#define REDO_SYNCH_POLLS 1628                                                   
#define REDO_WRITE_INFO_FIND 1632                                               
#define REDO_WRITE_INFO_FIND_FAIL 1636                                          
#define FILE_IO_SERVICE_TIME 1640                                               
#define FILE_IO_WAIT_TIME 1644                                                  
#define GC_CR_BLOCKS_SERVED 1648                                                
#define GC_CR_BLOCK_FLUSH_TIME 1652                                             
#define GC_CR_BLOCKS_FLUSHED 1656                                               
#define GC_CR_BLOCK_BUILD_TIME 1660                                             
#define GC_CR_BLOCKS_BUILT 1664                                                 
#define GC_READ_TIME_WAITED 1668                                                
#define GC_READ_WAITS 1672                                                      
#define GC_READ_WAIT_FAILURES 1676                                              
#define GC_READ_WAIT_TIMEOUTS 1680                                              
#define GC_CURRENT_BLOCKS_SERVED 1684                                           
#define GC_CURRENT_BLOCK_PIN_TIME 1688                                          
#define GC_CURRENT_BLOCKS_PINNED 1692                                           
#define GC_CURRENT_BLOCK_FLUSH_TIME 1696                                        
#define GC_CURRENT_BLOCKS_FLUSHED 1700                                          
#define GC_CR_BLOCKS_RECEIVED 1704                                              
#define GC_CR_BLOCK_RECEIVE_TIME 1708                                           
#define GC_CURRENT_BLOCKS_RECEIVED 1712                                         
#define GC_CURRENT_BLOCK_RECEIVE_TIME 1716                                      
#define GC_UNDO_BLOCK_DISK_READ 1720                                            
#define GC_KA_GRANTS_RECEIVED 1724                                              
#define GC_KA_GRANT_RECEIVE_TIME 1728                                           
#define GC_CR_MULTIBLOCK_GRANTS_RECEIVED 1732                                   
#define GC_CR_MULTIBLOCK_GRANT_TIME 1736                                        
#define GC_STATUS_MESSAGES_RECEIVED 1740                                        
#define GC_STATUS_MESSAGES_SENT 1744                                            
#define GC_CLUSTER_FLASH_CACHE_READS_SERVED 1748                                
#define GC_CLUSTER_FLASH_CACHE_READS_RECEIVED 1752                              
#define GC_CLUSTER_FLASH_CACHE_RECEIVED_READ_TIME 1756                          
#define GC_CLUSTER_FLASH_CACHE_READS_FAILURE 1760                               
#define GC_FLASH_CACHE_READS_SERVED 1764                                        
#define GC_FLASH_CACHE_SERVED_READ_TIME 1768                                    
#define GC_LOCAL_GRANTS 1772                                                    
#define GC_REMOTE_GRANTS 1776                                                   
#define GC_KBYTES_SENT 1780                                                     
#define GC_KBYTES_SAVED 1784                                                    
#define GC_BLOCKS_COMPRESSED 1788                                               
#define GC_MERGE_PI_FG 1792                                                     
#define GC_MERGE_PI_BG 1796                                                     
#define GC_CLEANOUT_SAVED 1800                                                  
#define GC_CLEANOUT_APPLIED 1804                                                
#define GC_CLEANOUT_NO_SPACE 1808                                               
#define GC_READER_BYPASS_GRANTS 1812                                            
#define GC_READER_BYPASS_WAITS 1816                                             
#define GC_BLOCKS_LOST 1820                                                     
#define GC_CLAIM_BLOCKS_LOST 1824                                               
#define GC_TRANSACTION_BLOCKS_LOST 1828                                         
#define GC_BLOCKS_CORRUPT 1832                                                  
#define GC_SEND_FAILURES 1836                                                   
#define UNDO_BLOCK_RECOVERY_DISK_READS_SKIPPED 1840                             
#define GC_FORCE_CR_READ_CR 1844                                                
#define GC_FORCE_CR_READ_CURRENT 1848                                           
#define GC_NO_CHANGE_MADE 1852                                                  
#define GC_CURRENT_BLOCKS_RECEIVED_WITH_BPS 1856                                
#define GC_CURRENT_BLOCKS_SERVED_WITH_BPS 1860                                  
#define GC_CR_BLOCKS_RECEIVED_WITH_BPS 1864                                     
#define GC_CR_BLOCKS_SERVED_WITH_BPS 1868                                       
#define GC_BPS_ARRAY_FULL 1872                                                  
#define GC_CR_BYPASS_REQUESTS 1876                                              
#define GC_CR_ANTI_LOCKS_CREATED 1880                                           
#define GC_CR_ANTI_LOCKS_EXPANDED 1884                                          
#define GC_CR_ANTI_LOCKS_SHRUNK 1888                                            
#define GC_INDEX_SPLIT_WAIT_TIMEOUTS 1892                                       
#define GC_INDEX_SPLIT_TOO_MANY_SLOTS 1896                                      
#define GC_INDEX_SPLIT_TOO_MANY_SEGMENTS 1900                                   
#define GC_INDEX_SPLIT_SLOT_COLLISIONS 1904                                     
#define GC_IM_GRANTS 1908                                                       
#define GC_IM_BLOCKS_INVALIDATED 1912                                           
#define GC_IM_EXPANDS 1916                                                      
#define GC_IM_SHRINKS 1920                                                      
#define GC_HASH_BUCKET_FULL 1924                                                
#define GC_HASH_SLOT_ADDED 1928                                                 
#define GC_HASH_SLOT_REMOVED 1932                                               
#define GC_REMOTE_BLOCK_READ 1936                                               
#define GC_REMOTE_DISK_READ 1940                                                
#define GC_REMOTE_READ_FAILURE 1944                                             
#define GC_REMOTE_BUCKET_BEING_MODIFIED 1948                                    
#define GC_REMOTE_BLOCK_BEING_MODIFIED 1952                                     
#define GC_REMOTE_LEASE_FAILURE 1956                                            
#define GC_REMOTE_DISK_READ_FAILURE 1960                                        
#define GC_ZCOPY_SEND 1964                                                      
#define TOTAL_NUMBER_OF_SLOTS 1968                                              
#define EFFECTIVE_IO_TIME 1972                                                  
#define NUMBER_OF_READ_IOS_ISSUED 1976                                          
#define BACKGROUND_CHECKPOINTS_STARTED 1980                                     
#define BACKGROUND_CHECKPOINTS_COMPLETED 1984                                   
#define BA_FILES_CREATED_COUNT 1988                                             
#define BA_FILES_DELETED_COUNT 1992                                             
#define BA_FILE_BYTES_ALLOCATED 1996                                            
#define BA_AU_BYTES_ALLOCATED 2000                                              
#define BA_FILE_BYTES_DELETED 2004                                              
#define BA_NON_FLASH_BYTES_REQUESTED 2008                                       
#define BA_FLASH_BYTES_REQUESTED 2012                                           
#define BA_BYTES_FOR_FILE_MAPS 2016                                             
#define BA_BYTES_READ_FROM_FLASH 2020                                           
#define BA_BYTES_READ_FROM_DISK 2024                                            
#define BA_COUNT_WHEN_10_OF_BUCKETS_IN_PB 2028                                 
#define BA_COUNT_WHEN_25_OF_BUCKETS_IN_PB 2032                                 
#define BA_COUNT_WHEN_50_OF_BUCKETS_IN_PB 2036                                 
#define BA_COUNT_WHEN_75_OF_BUCKETS_IN_PB 2040                                 
#define BA_COUNT_WHEN_90_OF_BUCKETS_IN_PB 2044                                 
#define BA_COUNT___BORROWED_FROM_OTHER_NODE 2048                                
#define BA_COUNT___SEARCHED_IN_PB 2052                                          
#define BA_COUNT___TOTAL_ALLOCATION_REQUESTS 2056                               
#define BA_COUNT___UNABLE_TO_SHORT_CIRCUIT_IN_IDN 2060                          
#define BA_COUNT___SHORT_CIRCUIT_IN_IDN 2064                                    
#define BA_COUNT___CACHE_MISS 2068                                              
#define BA_COUNT___CACHE_DENIED 2072                                            
#define BA_SPARE_STATISTIC_1 2076                                               
#define BA_SPARE_STATISTIC_2 2080                                               
#define BA_SPARE_STATISTIC_3 2084                                               
#define BA_SPARE_STATISTIC_4 2088                                               
#define ADG_PARSELOCK_X_GET_ATTEMPTS 2092                                       
#define ADG_PARSELOCK_X_GET_SUCCESSES 2096                                      
#define ADG_GLOBAL_FLUSH 2100                                                   
#define ADG_OBJECTLOCK_GET_ATTEMPTS 2104                                        
#define ADG_OBJECTLOCK_GET_SUCCESSES 2108                                       
#define ADG_OBJECTLOCK_TIMEOUT_RETRIES 2112                                     
#define ADG_OBJECTLOCK_FALLBACKS 2116                                           
#define ADG_OBJECTLOCK_EXCEED_LIMIT 2120                                        
#define ADG_OBJECTLOCK_PDB_SWITCH_FAIL 2124                                     
#define ADG_SEGMENT_STATISTICS_DEFER_INVALIDATION 2128                          
#define ADG_INFLUX_SCN_ADVANCE 2132                                             
#define ADG_QUERY_SCN_ADVANCE 2136                                              
#define READ_ONLY_VIOLATION_COUNT 2140                                          
#define FLASHBACK_LOG_WRITES 2144                                               
#define FLASHBACK_LOG_WRITE_BYTES 2148                                          
#define REDO_KB_READ 2152                                                       
#define REDO_KB_READ__MEMORY_ 2156                                              
#define REDO_KB_READ_FOR_TRANSPORT 2160                                         
#define REDO_KB_READ__MEMORY__FOR_TRANSPORT 2164                                
#define REDO_NON_DURABLE_RECORDS_SKIPPED 2168                                   
#define CELL_PHYSICAL_IO_BYTES_SAVED_DURING_OPTIMIZED_FILE_CREATION 2172        
#define CELL_PHYSICAL_IO_BYTES_SAVED_DURING_OPTIMIZED_RMAN_FILE_RESTORE 2176    
#define CELL_PHYSICAL_IO_BYTES_ELIGIBLE_FOR_PREDICATE_OFFLOAD 2180              
#define CELL_PHYSICAL_IO_BYTES_ELIGIBLE_FOR_SMART_IOS 2184                      
#define CELL_PHYSICAL_IO_BYTES_SAVED_BY_COLUMNAR_CACHE 2188                     
#define CELL_PHYSICAL_IO_BYTES_SAVED_BY_STORAGE_INDEX 2192                      
#define CELL_PHYSICAL_IO_BYTES_SENT_DIRECTLY_TO_DB_NODE_TO_BALANCE_CPU_ 2196    
#define CELL_PHYSICAL_IO_BYTES_PROCESSED_FOR_IM_CAPACITY 2200                   
#define CELL_PHYSICAL_IO_BYTES_PROCESSED_FOR_IM_QUERY 2204                      
#define CELL_PHYSICAL_IO_BYTES_PROCESSED_FOR_NO_MEMCOMPRESS 2208                
#define CELL_NUM_BYTES_IN_PASSTHRU_DUE_TO_QUARANTINE 2212                       
#define CELL_SMART_IO_SESSION_CACHE_LOOKUPS 2216                                
#define CELL_SMART_IO_SESSION_CACHE_HITS 2220                                   
#define CELL_SMART_IO_SESSION_CACHE_SOFT_MISSES 2224                            
#define CELL_SMART_IO_SESSION_CACHE_HARD_MISSES 2228                            
#define CELL_SMART_IO_SESSION_CACHE_HWM 2232                                    
#define CELL_NUM_SMART_IO_SESSIONS_IN_RDBMS_BLOCK_IO_DUE_TO_USER 2236           
#define CELL_NUM_SMART_IO_SESSIONS_IN_RDBMS_BLOCK_IO_DUE_TO_OPEN_FAIL 2240      
#define CELL_NUM_SMART_IO_SESSIONS_IN_RDBMS_BLOCK_IO_DUE_TO_NO_CELL_MEM 2244    
#define CELL_NUM_SMART_IO_SESSIONS_IN_RDBMS_BLOCK_IO_DUE_TO_BIG_PAYLOAD 2248    
#define CELL_NUM_SMART_IO_SESSIONS_USING_PASSTHRU_MODE_DUE_TO_USER 2252         
#define CELL_NUM_SMART_IO_SESSIONS_USING_PASSTHRU_MODE_DUE_TO_CELLSRV 2256      
#define CELL_NUM_SMART_IO_SESSIONS_USING_PASSTHRU_MODE_DUE_TO_TIMEZONE 2260     
#define CELL_NUM_SMART_FILE_CREATION_SESSIONS_USING_RDBMS_BLOCK_IO_MODE 2264    
#define CELL_NUM_BLOCK_IOS_DUE_TO_A_FILE_INSTANT_RESTORE_IN_PROGRESS 2268       
#define CELL_PHYSICAL_IO_INTERCONNECT_BYTES_RETURNED_BY_SMART_SCAN 2272         
#define CELL_NUM_BYTES_IN_PASSTHRU_DURING_PREDICATE_OFFLOAD 2276                
#define CELL_NUM_BYTES_IN_BLOCK_IO_DURING_PREDICATE_OFFLOAD 2280                
#define CELL_NUM_FAST_RESPONSE_SESSIONS 2284                                    
#define CELL_NUM_FAST_RESPONSE_SESSIONS_CONTINUING_TO_SMART_SCAN 2288           
#define CELL_NUM_SMARTIO_AUTOMEM_BUFFER_ALLOCATION_ATTEMPTS 2292                
#define CELL_NUM_SMARTIO_AUTOMEM_BUFFER_ALLOCATION_FAILURES 2296                
#define CELL_NUM_SMARTIO_TRANSIENT_CELL_FAILURES 2300                           
#define CELL_NUM_SMARTIO_PERMANENT_CELL_FAILURES 2304                           
#define CELL_NUM_BYTES_OF_IO_REISSUED_DUE_TO_RELOCATION 2308                    
#define CELL_PHYSICAL_WRITE_BYTES_SAVED_BY_SMART_FILE_INITIALIZATION 2312       
#define CELL_XT_GRANULES_REQUESTED_FOR_PREDICATE_OFFLOAD 2316                   
#define CELL_XT_GRANULE_BYTES_REQUESTED_FOR_PREDICATE_OFFLOAD 2320              
#define CELL_INTERCONNECT_BYTES_RETURNED_BY_XT_SMART_SCAN 2324                  
#define CELL_XT_GRANULE_PREDICATE_OFFLOAD_RETRIES 2328                          
#define CELL_XT_GRANULE_IO_BYTES_SAVED_BY_STORAGE_INDEX 2332                    
#define CELL_NUM_MAP_ELEM_CANCELLATION 2336                                     
#define CELL_STATISTICS_SPARE1 2340                                             
#define CELL_XT_GRANULE_IO_BYTES_SAVED_BY_HDFS_TBS_EXTENT_MAP_SCAN 2344         
#define BATCHED_IO_VECTOR_READ_COUNT 2348                                       
#define BATCHED_IO_VECTOR_BLOCK_COUNT 2352                                      
#define BATCHED_IO_SINGLE_BLOCK_COUNT 2356                                      
#define BATCHED_IO_ZERO_BLOCK_COUNT 2360                                        
#define BATCHED_IO_BLOCK_MISS_COUNT 2364                                        
#define BATCHED_IO_DOUBLE_MISS_COUNT 2368                                       
#define BATCHED_IO__FULL__VECTOR_COUNT 2372                                     
#define BATCHED_IO__SPACE__VECTOR_COUNT 2376                                    
#define BATCHED_IO__BOUND__VECTOR_COUNT 2380                                    
#define BATCHED_IO_SAME_UNIT_COUNT 2384                                         
#define BATCHED_IO_BUFFER_DEFRAG_COUNT 2388                                     
#define BATCHED_IO_SLOW_JUMP_COUNT 2392                                         
#define SHARED_IO_POOL_BUFFER_GET_SUCCESS 2396                                  
#define SHARED_IO_POOL_BUFFER_GET_FAILURE 2400                                  
#define PHYSICAL_READS_FOR_DATA_TRANSFER 2404                                   
#define RECOVERY_MARKER 2408                                                    
#define RECOVERY_CVMAP_UNAVAILABLE 2412                                         
#define RECOVERY_RECIEVE_BUFFER_UNAVAILABLE 2416                                
#define RECOVERY_IMC_INFLUX_SCN_LAGGING 2420                                    
#define RECOVERY_LOCAL_BUFFER_FREED 2424                                        
#define RECOVERY_REMOTE_BUFFER_RECEIVED 2428                                    
#define RECOVERY_REMOTE_BUFFER_SENT 2432                                        
#define RECOVERY_LOGMERGER_CATCHUP 2436                                         
#define TEMP_SPACE_ALLOCATED__BYTES_ 2440                                       
#define SERIALIZABLE_ABORTS 2444                                                
#define TRANSACTION_LOCK_FOREGROUND_REQUESTS 2448                               
#define TRANSACTION_LOCK_FOREGROUND_WAIT_TIME 2452                              
#define TRANSACTION_LOCK_BACKGROUND_GETS 2456                                   
#define TRANSACTION_LOCK_BACKGROUND_GET_TIME 2460                               
#define UNDO_CHANGE_VECTOR_SIZE 2464                                            
#define TXN_CACHE_LOCAL_READ_HITS 2468                                          
#define TXN_CACHE_LOCAL_READ_MISSES 2472                                        
#define TXN_CACHE_LOCAL_LOSCN_READ_MISSES 2476                                  
#define TXN_CACHE_REMOTE_LOSCN_READ_MISSES 2480                                 
#define TXN_CACHE_LOCAL_WRITES 2484                                             
#define TXN_CACHE_LOCAL_USN_HASH_WRITE_MISSES 2488                              
#define TXN_CACHE_LOCAL_USN_HASH_READ_MISSES 2492                               
#define TXN_CACHE_REMOTE_USN_HASH_READ_MISSES 2496                              
#define TXN_CACHE_REMOTE_READ_HITS 2500                                         
#define TXN_CACHE_REMOTE_READ_MISSES 2504                                       
#define TXN_CACHE_REMOTE_WRITES 2508                                            
#define TXN_CACHE_REMOTE_ACTIVE_READ_MISSES 2512                                
#define TXN_CACHE_LOCAL_AC_READ_MISSES 2516                                     
#define TXN_CACHE_REDO_SYNC_READS 2520                                          
#define TXN_CACHE_REMOTE_COPY_HITS 2524                                         
#define TXN_CACHE_REMOTE_COPY_MISSES 2528                                       
#define TXN_CACHE_REMOTE_TS_INST_MISMATCH 2532                                  
#define TXN_CACHE_REMOTE_PROC_MISSES 2536                                       
#define TXN_CACHE_LOCAL_PROC_MISSES 2540                                        
#define TXN_CACHE_UPPER_BOUND_MISSES 2544                                       
#define TXN_CACHE_LOCAL_PRESET_MISSES 2548                                      
#define TXN_CACHE_LOCAL_SEQ_NUM_MISSES 2552                                     
#define TXN_CACHE_REMOTE_SEQ_NUM_MISSES 2556                                    
#define TXN_CACHE_LOCAL_EMPTY_SLOT_MISSES 2560                                  
#define TXN_CACHE_REMOTE_EMPTY_SLOT_MISSES 2564                                 
#define TXN_CACHE_LOCAL_SYNC_COMMIT_SCN_MISSES 2568                             
#define TXN_CACHE_REMOTE_SYNC_COMMIT_SCN_MISSES 2572                            
#define TXN_CACHE_REMOTE_READ_MSG_SENT 2576                                     
#define TXN_CACHE_REMOTE_REQUESTED_XID_COUNT 2580                               
#define TXN_CACHE_REMOTE_FETCH_DOUBLE_PASS 2584                                 
#define TXN_CACHE_LOOKUP_USN_EXCEEDS_MAX 2588                                   
#define TXN_CACHE_LOOKUP_SLOT_EXCEEDS_MAX 2592                                  
#define TXN_CACHE_LOOKUP_FAIL_READ_EVEN_VERSION 2596                            
#define TXN_CACHE_LOOKUP_CONFLICTING_WRITE_EXACT 2600                           
#define TXN_CACHE_LOOKUP_CONFLICTING_WRITE_UPPPER 2604                          
#define TXN_CACHE_INIT_USN_SLOT_MISMATCH 2608                                   
#define TXN_CACHE_INIT_USN_EXCEEDS_MAX 2612                                     
#define TXN_CACHE_WRITE_USN_EXCEEDS_MAX 2616                                    
#define TXN_CACHE_WRITE_SLOT_MISMATCH 2620                                      
#define TRANSACTION_TABLES_CONSISTENT_READS___UNDO_RECORDS_APPLIED 2624         
#define TRANSACTION_TABLES_CONSISTENT_READ_ROLLBACKS 2628                       
#define DATA_BLOCKS_CONSISTENT_READS___UNDO_RECORDS_APPLIED 2632                
#define NO_WORK___CONSISTENT_READ_GETS 2636                                     
#define CLEANOUTS_ONLY___CONSISTENT_READ_GETS 2640                              
#define ROLLBACKS_ONLY___CONSISTENT_READ_GETS 2644                              
#define CLEANOUTS_AND_ROLLBACKS___CONSISTENT_READ_GETS 2648                     
#define ROWCR_ATTEMPTS 2652                                                     
#define ROWCR_HITS 2656                                                         
#define ROWCR___ROW_CONTENTION 2660                                             
#define ROWCR___RESUME 2664                                                     
#define ROLLBACK_CHANGES___UNDO_RECORDS_APPLIED 2668                            
#define TRANSACTION_ROLLBACKS 2672                                              
#define IMMEDIATE__CURRENT__BLOCK_CLEANOUT_APPLICATIONS 2676                    
#define IMMEDIATE__CR__BLOCK_CLEANOUT_APPLICATIONS 2680                         
#define DEFERRED__CURRENT__BLOCK_CLEANOUT_APPLICATIONS 2684                     
#define COMMIT_TXN_COUNT_DURING_CLEANOUT 2688                                   
#define ACTIVE_TXN_COUNT_DURING_CLEANOUT 2692                                   
#define CLEANOUT___NUMBER_OF_KTUGCT_CALLS 2696                                  
#define IMMEDIATE_CR_CLEANOUTS__INDEX_BLOCKS_ 2700                              
#define DEFERRED_CUR_CLEANOUTS__INDEX_BLOCKS_ 2704                              
#define COMMIT_SCN_CACHED 2708                                                  
#define CACHED_COMMIT_SCN_REFERENCED 2712                                       
#define BLOCK_CLEANOUT_OPTIM_REFERENCED 2716                                    
#define BLOCKS_CLEANED_OUT_USING_MINACT 2720                                    
#define MIN_ACTIVE_SCN_OPTIMIZATION_APPLIED_ON_CR 2724                          
#define AUTO_EXTENDS_ON_UNDO_TABLESPACE 2728                                    
#define DROP_SEGMENT_CALLS_IN_SPACE_PRESSURE 2732                               
#define TOTAL_NUMBER_OF_UNDO_SEGMENTS_DROPPED 2736                              
#define DOUBLING_UP_WITH_IMU_SEGMENT 2740                                       
#define TUNE_DOWN_RETENTIONS_IN_SPACE_PRESSURE 2744                             
#define STEPS_OF_TUNE_DOWN_RET_IN_SPACE_PRESSURE 2748                          
#define SPACE_WAS_FOUND_BY_TUNE_DOWN 2752                                       
#define SPACE_WAS_NOT_FOUND_BY_TUNE_DOWN 2756                                   
#define COMMIT_BATCH_IMMEDIATE_REQUESTED 2760                                   
#define COMMIT_BATCH_REQUESTED 2764                                             
#define COMMIT_IMMEDIATE_REQUESTED 2768                                         
#define COMMIT_BATCH_IMMEDIATE_PERFORMED 2772                                   
#define COMMIT_BATCH_PERFORMED 2776                                             
#define COMMIT_IMMEDIATE_PERFORMED 2780                                         
#define COMMIT_WAIT_NOWAIT_REQUESTED 2784                                       
#define COMMIT_NOWAIT_REQUESTED 2788                                            
#define COMMIT_WAIT_REQUESTED 2792                                              
#define COMMIT_WAIT_NOWAIT_PERFORMED 2796                                       
#define COMMIT_NOWAIT_PERFORMED 2800                                            
#define COMMIT_WAIT_PERFORMED 2804                                              
#define GLOBAL_UNDO_SEGMENT_HINTS_HELPED 2808                                   
#define GLOBAL_UNDO_SEGMENT_HINTS_WERE_STALE 2812                               
#define LOCAL_UNDO_SEGMENT_HINTS_HELPED 2816                                    
#define LOCAL_UNDO_SEGMENT_HINTS_WERE_STALE 2820                                
#define UNDO_SEGMENT_HEADER_WAS_PINNED 2824                                     
#define UNDO_BLOCKS_PREFETCHED 2828                                             
#define KTURMA_CPU_TIME__USEC_ 2832                                             
#define KTURMA_RMA_OPS 2836                                                     
#define KTURMA_XID_LOOKUPS 2840                                                 
#define IMU_COMMITS 2844                                                        
#define IMU_FLUSHES 2848                                                        
#define IMU_CONTENTION 2852                                                     
#define IMU_RECURSIVE_TRANSACTION_FLUSH 2856                                    
#define IMU_UNDO_RETENTION_FLUSH 2860                                           
#define IMU_KTICHG_FLUSH 2864                                                   
#define IMU_BIND_FLUSHES 2868                                                   
#define IMU_MBU_FLUSH 2872                                                      
#define IMU_POOL_NOT_ALLOCATED 2876                                             
#define IMU_CR_ROLLBACKS 2880                                                   
#define IMU_UNDO_ALLOCATION_SIZE 2884                                           
#define IMU_REDO_ALLOCATION_SIZE 2888                                           
#define IMU__FAILED_TO_GET_A_PRIVATE_STRAND 2892                                
#define MISSES_FOR_WRITING_MAPPING 2896                                         
#define TRACKED_TRANSACTIONS 2900                                               
#define FOREGROUND_PROPAGATED_TRACKED_TRANSACTIONS 2904                         
#define SLAVE_PROPAGATED_TRACKED_TRANSACTIONS 2908                              
#define LARGE_TRACKED_TRANSACTIONS 2912                                         
#define VERY_LARGE_TRACKED_TRANSACTIONS 2916                                    
#define FBDA_WOKEN_UP 2920                                                      
#define TRACKED_ROWS 2924                                                       
#define CLI_FLUSH 2928                                                          
#define CLI_BG_ATTEMPT_FLUSH 2932                                               
#define CLI_CLIENT_FLUSH 2936                                                   
#define CLI_IMM_WRT 2940                                                        
#define CLI_BUF_WRT 2944                                                        
#define CLI_THRU_WRT 2948                                                       
#define CLI_PRVTZ_LOB_ 2952                                                     
#define CLI_SGA_ALLOC 2956                                                      
#define CLI_BG_ENQ 2960                                                         
#define CLI_BG_FLS_DONE 2964                                                    
#define CLI_FLSTASK_CREATE 2968                                                 
#define CLI_BYTES_FLS_TO_TABLE 2972                                             
#define CLI_BYTES_FLS_TO_EXT 2976                                               
#define HEATMAP_SEGLEVEL___WRITE 2980                                           
#define HEATMAP_SEGLEVEL___FULL_TABLE_SCAN 2984                                 
#define HEATMAP_SEGLEVEL___INDEXLOOKUP 2988                                     
#define HEATMAP_SEGLEVEL___TABLELOOKUP 2992                                     
#define HEATMAP_SEGLEVEL___FLUSH 2996                                           
#define HEATMAP_SEGLEVEL___SEGMENTS_FLUSHED 3000                                
#define IM_POPULATE_BLOCKS_INVALID 3004                                         
#define IM_POPULATE_TRANSACTIONS_CHECK 3008                                     
#define IM_POPULATE_UNDO_SEGHEADER_ROLLBACK 3012                                
#define IM_POPULATE_UNDO_RECORDS_APPLIED 3016                                   
#define IM_POPULATE_TRANSACTIONS_ACTIVE 3020                                    
#define IM_POPULATE_CHECKPOINT_TIME__MS_ 3024                                   
#define IM_POPULATE_DIRECT_READ_TIME__MS_ 3028                                  
#define IM_POPULATE_CACHE_READ_TIME__MS_ 3032                                   
#define IM_REPOPULATE_BLOCKS_INVALID 3036                                       
#define IM_REPOPULATE_TRANSACTIONS_CHECK 3040                                   
#define IM_REPOPULATE_UNDO_SEGHEADER_ROLLBACK 3044                              
#define IM_REPOPULATE_UNDO_RECORDS_APPLIED 3048                                 
#define IM_REPOPULATE_TRANSACTIONS_ACTIVE 3052                                  
#define IM_REPOPULATE_TRANSACTIONS_COPIED 3056                                  
#define IM_REPOPULATE_PREVIOUS_SMU_INVALID 3060                                 
#define IM_REPOPULATE_CHECKPOINTS 3064                                          
#define IM_REPOPULATE_OPTIMIZED 3068                                            
#define IM_REPOPULATE_OLD_SMU_NIL 3072                                          
#define IM_REPOPULATE_INVALID_ROWS 3076                                         
#define IM_REPOPULATE_INVALID_BLKS 3080                                         
#define IM_REPOPULATE_BLOCKS_NOW_VALID 3084                                     
#define IM_REPOPULATE_OPTIMIZED_RAC_DOWNGRADE 3088                              
#define IM_REPOPULATE_INVALIDATION_TRANSFER_TIME 3092                           
#define IM_SCAN_CUS_ROLLBACK 3096                                               
#define IM_SCAN_CUS_NO_ROLLBACK 3100                                            
#define IM_SCAN_CUS_UNDO_RECORDS_APPLIED 3104                                   
#define IM_SCAN_CUS_CLEANOUT 3108                                               
#define IM_SCAN_CUS_NO_CLEANOUT 3112                                            
#define IM_SCAN_JOURNAL_CLEANOUT 3116                                           
#define IM_SCAN_JOURNAL_NO_CLEANOUT 3120                                        
#define IM_SCAN_JOURNAL 3124                                                    
#define IM_SCAN_ROWS_JOURNAL_TOTAL 3128                                         
#define IM_SCAN_FOUND_INVALID_CU 3132                                           
#define IM_REPOPULATE_SMU_COLMAP_USED 3136                                      
#define IM_SCAN_SMU_COLMAP_HIT 3140                                             
#define IM_SCAN_SMU_COLMAP_MISS_DUE_TO_INSERTS 3144                             
#define IM_SCAN_SMU_COLMAP_MISS_DUE_TO_DELETES 3148                             
#define IM_SCAN_SMU_COLMAP_MISS_DUE_TO_INVALID_BLOCKS 3152                      
#define IM_SCAN_SMU_COLMAP_MISS_DUE_TO_UPDATE 3156                              
#define IM_SCAN_FINE_GRAIN_COLMAP_HIT 3160                                      
#define IM_SCAN_FINE_GRAIN_COLMAP_MISS_DUE_TO_INSERTS 3164                      
#define IM_SCAN_FINE_GRAIN_COLMAP_MISS_DUE_TO_DELETES 3168                      
#define IM_SCAN_FINE_GRAIN_COLMAP_MISS_DUE_TO_INVALID_BLOCKS 3172               
#define IM_SCAN_FINE_GRAIN_COLMAP_MISS_DUE_TO_UPDATE 3176                       
#define IM_SCAN_SMU_COLMAP_MISS_DUE_TO_UNTRACKED_CHANGES 3180                   
#define IM_SCAN_CUS_LOW_QUERY_SCN 3184                                          
#define IM_SCAN_CUS_NOTFOUND_DBCLOSE 3188                                       
#define IM_SCAN_CUS_NOTFOUND_LOB 3192                                           
#define IM_SCAN_CUS_NOTFOUND 3196                                               
#define IM_SCAN_CUS_INVISIBLE_SMU 3200                                          
#define IM_SCAN_CUS_REF_INVIS_SMU 3204                                          
#define IM_SCAN_CUS_DROP_INVIS_SMU 3208                                         
#define IM_SCAN_CUS_PREVIOUS 3212                                               
#define IM_SCAN_CUS_LOWSCN_NO_PREVIOUS 3216                                     
#define IM_SCAN_CUS_WAIT_NOTVIS 3220                                            
#define IM_SCAN_CUS_WAIT_NOTVIS__DOUBLEBUFFER_ 3224                             
#define IM_SCAN_CUS_PREVIOUS_CURRENT 3228                                       
#define IM_SCAN_CUS_CURRENT 3232                                                
#define IM_SCAN_CUS_MAXRETRY_DONE 3236                                          
#define IM_SCAN_CUS_NO_IMCU 3240                                                
#define IM_TRANSACTIONS 3244                                                    
#define IM_TRANSACTIONS_ROWS_JOURNALED 3248                                     
#define IM_TRANSACTIONS_ROWS_INVALIDATED 3252                                   
#define IM_TRANSACTIONS_DOWNGRADE 3256                                          
#define IM_TRANSACTIONS_BLOCKS_INVALIDATED 3260                                 
#define IM_TRANSACTIONS_CU_CLEANOUT 3264                                        
#define IM_TRANSACTIONS_JOURNAL_CLEANOUT 3268                                   
#define IM_TRANSACTIONS_FOUND_INVALID_CU 3272                                   
#define IM_TRANSACTIONS_SELF_CLEANOUT_NO_ACTIVE 3276                            
#define IM_POPULATE_NO_CHECKPOINT 3280                                          
#define IM_TRANSACTIONS_FULL_CLEANOUT 3284                                      
#define IM_TRANSACTION_ROWS_ARRAY_JOURNAL_CALLS 3288                            
#define IM_TRANSACTION_ROWS_ARRAY_JOURNALED 3292                                
#define IM_TRANSACTION_WAIT_REF_SMU 3296                                        
#define IM_TRANSACTIONS_CUS_INVALID 3300                                        
#define IM_RAC_BLOCKS_INVALID 3304                                              
#define IM_RAC_CUS_INVALID 3308                                                 
#define IM_POPULATE_VIA_DIRECT_READS 3312                                       
#define IM_REPOPULATE_VIA_DIRECT_READS 3316                                     
#define IM_ADG_REGISTRATION_FAILURE__QUIESCE_ 3320                              
#define IM_ADG_REGISTRATION_ATTEMPTS 3324                                       
#define IM_SCAN_CUS_CR_CACHE_HIT 3328                                           
#define IM_SCAN_CUS_CR_CACHE_MISS 3332                                          
#define IM_SCAN_CUS_CR_INCREMENTAL 3336                                         
#define IM_SCAN_CUS_CR_SKIPPED_LARGE_ROWIDS 3340                                
#define IM_SCAN_CUS_READLIST_CREATION_ACCUMULATED_TIME 3344                     
#define IM_SCAN_CUS_READLIST_CREATION_ACCUMULATED_TIME__CR_ 3348                
#define IM_SCAN_CUS_READLIST_CREATION_NUMBER 3352                               
#define IM_SCAN_CUS_READLIST_CREATION_NUMBER__CR_ 3356                          
#define IM_SCAN_UNCOMMITTED_PJ_GRANULE 3360                                     
#define IM_REPOPULATE__ADG__TRANSACTIONS_COPIED 3364                            
#define IM_TRANSACTIONS_BLOCK_CHANGE_BLOCKS_ALREADY_INVALID 3368                
#define IM_DELTA_POPULATE_DELTA_SMU_NOT_CREATED 3372                            
#define IM_SCAN_DELTA___ONLY_BASE_SCAN 3376                                     
#define IM_SCAN_DELTA___PREVIOUS_DELTA_SCAN 3380                                
#define IM_SCAN_DELTA___CURRENT_DELTA_SCAN 3384                                 
#define IM_SCAN_DELTA___DOUBLE_DELTA_SCAN 3388                                  
#define IM_SCAN_DELTA___DOUBLE_DELTA_SCAN_DUE_TO_FAILURE 3392                   
#define IM_SMU_PATCH_ACCUMULATED_TIME 3396                                      
#define IM_SMU_PATCH_ACCUMULATED_TIME__CR_ 3400                                 
#define IM_SMU_PATCH_ACCUMULATED_TIME__RAC_LOCKS_ 3404                          
#define IM_SMU_PATCH_TOTAL_JOBS 3408                                            
#define IM_SMU_PATCH_TOTAL_BLOCKS_PATCHED 3412                                  
#define IM_SMU_PATCH_TOTAL_ROWS_PATCHED 3416                                    
#define IM_ADG_CORRUPT_UNDO_BLOCKS_SEEN 3420                                    
#define IM_ADG_INV_PDB_DUE_TO_CORRUPT_UNDO 3424                                 
#define IM_ADG_INV_ALL_DUE_TO_CORRUPT_UNDO 3428                                 
#define IM_ADG_BLOCKS_IN_FLUSH 3432                                             
#define IM_ADG_REDO_RECORDS_SEEN 3436                                           
#define IM_ADG_NON_IMC_TRANSACTIONS 3440                                        
#define IM_ADG_NUMBER_OF_QUERY_SCN_MOVES 3444                                   
#define IM_ADG_TIME_FOR_QUERY_SCN_MOVES__MS_ 3448                               
#define IM_ADG_TRANSACTIONS_FLUSHED 3452                                        
#define IM_ADG_TRANSACTIONS_COMPILED_FOR_FLUSH 3456                             
#define IM_ADG_NOTHING_TO_FLUSH 3460                                            
#define IM_ADG_INVALIDATED_PDB_PARTIAL_TRANSACTION 3464                         
#define IM_ADG_INVALIDATED_PDB_DDL 3468                                         
#define IM_ADG_INVALIDATED_OBJECT_DDL 3472                                      
#define IM_ADG_INVALIDATED_ALL_OBJECTS 3476                                     
#define IM_ADG_COMMIT_NODES_ADDED 3480                                          
#define IM_ADG_COMMIT_NODES_FREED 3484                                          
#define IM_ADG_COMMIT_JOURNAL_DESTROY 3488                                      
#define IM_ADG_COMMIT_JOURNAL_EMPTIED 3492                                      
#define IM_ADG_JOURNAL_SORT 3496                                                
#define IM_ADG_GRANULE_SPLIT 3500                                               
#define SEGMENT_DISPENSER_LOAD_TASKS 3504                                       
#define SEGMENT_DISPENSER_LOAD_EMPTY 3508                                       
#define SEGMENT_DISPENSER_ALLOCATIONS 3512                                      
#define SEGMENT_CFS_ALLOCATIONS 3516                                            
#define SEGMENT_CHUNKS_ALLOCATION_FROM_DISPENSER 3520                           
#define SEGMENT_TOTAL_CHUNK_ALLOCATION 3524                                     
#define TBS_EXTENSION__TASKS_CREATED 3528                                       
#define TBS_EXTENSION__TASKS_EXECUTED 3532                                      
#define TBS_EXTENSION__FILES_EXTENDED 3536                                      
#define TBS_EXTENSION__BYTES_EXTENDED 3540                                      
#define GDR__ACTIVE_RANGES_CLEARED 3544                                         
#define GDR__ACTIVE_BLOCKS_CLEARED 3548                                         
#define GDR__INACTIVE_RANGES_CLEARED 3552                                       
#define GDR__INACTIVE_BLOCKS_CLEARED 3556                                       
#define GDR__UNUSED_RANGES_CLEARED 3560                                         
#define GDR__UNUSED_BLOCKS_CLEARED 3564                                         
#define GDR__TOTAL_SEGMENTS_PROCESSED 3568                                      
#define GDR__TOTAL_SEGMENTS_SKIPPED 3572                                        
#define GDR__TOTAL_BLOCKS_SKIPPED 3576                                          
#define GDR__TOTAL_FILES_PROCESSED 3580                                         
#define TOTAL_NUMBER_OF_TIMES_SMON_POSTED 3584                                  
#define SMON_POSTED_FOR_UNDO_SEGMENT_RECOVERY 3588                              
#define SMON_POSTED_FOR_TXN_RECOVERY_FOR_OTHER_INSTANCES 3592                   
#define SMON_POSTED_FOR_INSTANCE_RECOVERY 3596                                  
#define SMON_POSTED_FOR_UNDO_SEGMENT_SHRINK 3600                                
#define SMON_POSTED_FOR_DROPPING_TEMP_SEGMENT 3604                              
#define KTFB_ALLOC_REQ 3608                                                     
#define KTFB_ALLOC_SPACE__BLOCK_ 3612                                           
#define KTFB_ALLOC_TIME__MS_ 3616                                               
#define KTFB_FREE_REQ 3620                                                      
#define KTFB_FREE_SPACE__BLOCK_ 3624                                            
#define KTFB_FREE_TIME__MS_ 3628                                                
#define KTFB_APPLY_REQ 3632                                                     
#define KTFB_APPLY_TIME__MS_ 3636                                               
#define KTFB_COMMIT_REQ 3640                                                    
#define KTFB_COMMIT_TIME__MS_ 3644                                              
#define KTFB_ALLOC_MYINST 3648                                                  
#define KTFB_ALLOC_STEAL 3652                                                   
#define KTFB_ALLOC_SEARCH_FFB 3656                                              
#define SEGMENT_PREALLOC_TASKS 3660                                             
#define SEGMENT_PREALLOC_OPS 3664                                               
#define SEGMENT_PREALLOC_BYTES 3668                                             
#define SEGMENT_PREALLOC_TIME__MS_ 3672                                         
#define SEGMENT_PREALLOC_UFS2CFS_BYTES 3676                                     
#define HEATMAP_BLKLEVEL_TRACKED 3680                                           
#define HEATMAP_BLKLEVEL_NOT_TRACKED___MEMORY 3684                              
#define HEATMAP_BLKLEVEL_NOT_UPDATED___REPEAT 3688                              
#define HEATMAP_BLKLEVEL_FLUSHED 3692                                           
#define HEATMAP_BLKLEVEL_FLUSHED_TO_SYSAUX 3696                                 
#define HEATMAP_BLKLEVEL_FLUSHED_TO_BF 3700                                     
#define HEATMAP_BLKLEVEL_RANGES_FLUSHED 3704                                    
#define HEATMAP_BLKLEVEL_RANGES_SKIPPED 3708                                    
#define HEATMAP_BLKLEVEL_FLUSH_TASK_CREATE 3712                                 
#define HEATMAP_BLKLEVEL_FLUSH_TASK_COUNT 3716                                  
#define IM_DEFAULT_AREA_RESIZED 3720                                            
#define IM_SPACE_CU_EXTENTS_ALLOCATED 3724                                      
#define IM_SPACE_SMU_EXTENTS_ALLOCATED 3728                                     
#define IM_SPACE_CU_BYTES_ALLOCATED 3732                                        
#define IM_SPACE_SMU_BYTES_ALLOCATED 3736                                       
#define IM_SPACE_CU_CREATIONS_INITIATED 3740                                    
#define IM_SPACE_SMU_CREATIONS_INITIATED 3744                                   
#define IM_SPACE_CU_CREATIONS_COMMITTED 3748                                    
#define IM_SPACE_SMU_CREATIONS_COMMITTED 3752                                   
#define IM_SPACE_PRIVATE_JOURNAL_EXTENTS_ALLOCATED 3756                         
#define IM_SPACE_ADG_EXTENTS_ALLOCATED 3760                                     
#define IM_SPACE_PRIVATE_JOURNAL_BYTES_ALLOCATED 3764                           
#define IM_SPACE_ADG_BYTES_ALLOCATED 3768                                       
#define IM_SPACE_SHARED_JOURNAL_EXTENTS_ALLOCATED 3772                          
#define IM_SPACE_SHARED_JOURNAL_BYTES_ALLOCATED 3776                            
#define IM_SPACE_CU_EXTENTS_FREED 3780                                          
#define IM_SPACE_SMU_EXTENTS_FREED 3784                                         
#define IM_SPACE_CU_BYTES_FREED 3788                                            
#define IM_SPACE_SMU_BYTES_FREED 3792                                           
#define IM_SPACE_PRIVATE_JOURNAL_EXTENTS_FREED 3796                             
#define IM_SPACE_ADG_JOURNAL_EXTENTS_FREED 3800                                 
#define IM_SPACE_PRIVATE_JOURNAL_BYTES_FREED 3804                               
#define IM_SPACE_ADG_BYTES_FREED 3808                                           
#define IM_SPACE_SHARED_JOURNAL_EXTENTS_FREED 3812                              
#define IM_SPACE_SHARED_JOURNAL_BYTES_FREED 3816                                
#define IM_SPACE_SEGMENTS_ALLOCATED 3820                                        
#define IM_SPACE_PRIVATE_JOURNAL_SEGMENTS_ALLOCATED 3824                        
#define IM_SPACE_ADG_SEGMENTS_ALLOCATED 3828                                    
#define IM_SPACE_SHARED_JOURNAL_SEGMENTS_ALLOCATED 3832                         
#define IM_SPACE_SEGMENTS_FREED 3836                                            
#define IM_SPACE_PRIVATE_JOURNAL_SEGMENTS_FREED 3840                            
#define IM_SPACE_ADG_SEGMENTS_FREED 3844                                        
#define IM_SPACE_SHARED_JOURNAL_SEGMENTS_FREED 3848                             
#define ASSM_GSP_USE_SPACE_RESERVATION 3852                                     
#define ASSM_GSP_ALIGNMENT_UNAVAILABLE_IN_SPACE_RES 3856                        
#define ASSM_GSP_SPACE_RESERVATION_SUCCESS 3860                                 
#define ASSM_GSP_BLOCKS_REQUESTED_BY_SPACE_RESERVATION 3864                     
#define ASSM_GSP_BLOCKS_PROVIDED_BY_SPACE_RESERVATION 3868                      
#define ASSM_GSP_BLOCKS_REJECTED_BY_ACCESS_LAYER_CALLBACK 3872                  
#define ASSM_GSP_GET_FREE_BLOCK 3876                                            
#define ASSM_GSP_GET_FREE_CRITICAL_BLOCK 3880                                   
#define ASSM_GSP_GET_FREE_DATA_BLOCK 3884                                       
#define ASSM_GSP_GET_FREE_LOB_BLOCK 3888                                        
#define ASSM_GSP_GET_FREE_INDEX_BLOCK 3892                                      
#define ASSM_CBK_BLOCKS_EXAMINED 3896                                           
#define ASSM_CBK_BLOCKS_REJECTED 3900                                           
#define ASSM_CBK_BLOCKS_ACCEPTED 3904                                           
#define ASSM_CBK_BLOCKS_MARKED_FULL 3908                                        
#define ASSM_GSP_L1_BITMAPS_EXAMINED 3912                                       
#define ASSM_GSP_L2_BITMAPS_EXAMINED 3916                                       
#define ASSM_GSP_L3_BITMAPS_EXAMINED 3920                                       
#define ASSM_GSP_L2_BITMAP_FULL 3924                                            
#define ASSM_GSP_SEARCH_ALL 3928                                                
#define ASSM_GSP_SEARCH_HINT 3932                                               
#define ASSM_GSP_SEARCH_STEAL 3936                                              
#define ASSM_GSP_BUMP_HWM 3940                                                  
#define ASSM_GSP_REJECT_DB 3944                                                 
#define ASSM_GSP_REJECT_L1 3948                                                 
#define ASSM_GSP_REJECT_L2 3952                                                 
#define ASSM_GSP_REJECT_L3 3956                                                 
#define ASSM_GSP_OPTIMIZED_REJECT_DB 3960                                       
#define ASSM_GSP_OPTIMIZED_REJECT_L1 3964                                       
#define ASSM_GSP_OPTIMIZED_REJECT_L2 3968                                       
#define ASSM_GSP_GOOD_HINT 3972                                                 
#define ASSM_GSP_OPTIMIZED_INDEX_BLOCK_REJECTS 3976                             
#define ASSM_GSP_OPTIMIZED_DATA_BLOCK_REJECTS 3980                              
#define ASSM_GSP_ADD_EXTENT 3984                                                
#define ASSM_WASTED_DB_STATE_CHANGE 3988                                        
#define ASSM_BG__SEGMENT_FIX_MONITOR 3992                                       
#define ASSM_FG__SUBMIT_SEGMENT_FIX_TASK 3996                                   
#define ASSM_BG_MARK_SEGMENT_FOR_FIX 4000                                       
#define ASSM_BG_CREATE_SEGMENT_FIX_TASK 4004                                    
#define ASSM_BG_SLAVE_FIX_ONE_SEGMENT 4008                                      
#define ASSM_BG_SLAVE_COMPRESS_BLOCK 4012                                       
#define ASSM_BG_SLAVE_FIX_STATE 4016                                            
#define ASSM_RSV_FILL_RESERVE 4020                                              
#define ASSM_RSV_ALLOC_FROM_RESERVE 4024                                        
#define ASSM_RSV_ALLOC_FROM_RESERVE_FAIL 4028                                   
#define ASSM_RSV_ALLOC_FROM_RESERVE_SUCC 4032                                   
#define ASSM_RSV_CLEAR_RESERVE 4036                                             
#define TABLE_SCANS__SHORT_TABLES_ 4040                                         
#define TABLE_SCANS__LONG_TABLES_ 4044                                          
#define TABLE_SCANS__ROWID_RANGES_ 4048                                         
#define TABLE_SCANS__IM_ 4052                                                   
#define TABLE_SCANS__CACHE_PARTITIONS_ 4056                                     
#define TABLE_SCANS__DIRECT_READ_ 4060                                          
#define TABLE_SCAN_ROWS_GOTTEN 4064                                             
#define TABLE_SCAN_RS1 4068                                                     
#define TABLE_SCAN_RS2 4072                                                     
#define TABLE_SCAN_DISK_NON_IMC_ROWS_GOTTEN 4076                                
#define TABLE_SCAN_DISK_IMC_FALLBACK 4080                                       
#define TABLE_SCAN_BLOCKS_GOTTEN 4084                                           
#define TABLE_FETCH_BY_ROWID 4088                                               
#define TABLE_FETCH_CONTINUED_ROW 4092                                          
#define CLUSTER_KEY_SCANS 4096                                                  
#define CLUSTER_KEY_SCAN_BLOCK_GETS 4100                                        
#define ROWS_FETCHED_VIA_CALLBACK 4104                                          
#define CELL_SCANS 4108                                                         
#define CELL_BLOCKS_PROCESSED_BY_CACHE_LAYER 4112                               
#define CELL_BLOCKS_PROCESSED_BY_TXN_LAYER 4116                                 
#define CELL_BLOCKS_PROCESSED_BY_DATA_LAYER 4120                                
#define CELL_BLOCKS_PROCESSED_BY_INDEX_LAYER 4124                               
#define CELL_FILTERED_BLOCKS_FAILED_BLOCK_CHECK 4128                            
#define CELL_COMMIT_CACHE_QUERIES 4132                                          
#define CELL_TRANSACTIONS_FOUND_IN_COMMIT_CACHE 4136                            
#define CELL_BLOCKS_HELPED_BY_COMMIT_CACHE 4140                                 
#define CELL_BLOCKS_HELPED_BY_MINSCN_OPTIMIZATION 4144                          
#define CELL_CHAINED_ROWS_SKIPPED 4148                                          
#define CELL_CHAINED_ROWS_PROCESSED 4152                                        
#define CELL_CHAINED_ROW_PIECES_FETCHED 4156                                    
#define CELL_CHAINED_ROWS_REJECTED 4160                                         
#define ERROR_COUNT_CLEARED_BY_CELL 4164                                        
#define CELL_BLOCKS_SENT 4168                                                   
#define CELL_BLOCKS_PIVOTED 4172                                                
#define CELL_BLOCKS_RETURNED_BY_DATA_LAYER 4176                                 
#define CELL_BLOCKS_RETURNED_BY_INDEX_LAYER 4180                                
#define CELL_INDEX_BLOCKS_SENT 4184                                             
#define CELL_BLOCKS_RETURNED_BY_EXTERNAL_TABLES 4188                            
#define CELL_SPARE1 4192                                                        
#define CELL_SPARE2 4196                                                        
#define CELL_IO_UNCOMPRESSED_BYTES 4200                                         
#define CELL_SCAN_CUS_PCODE_AGGREGATION_PUSHDOWN 4204                           
#define CELL_SCAN_ROWS_PCODE_AGGREGATED 4208                                    
#define CELL_SCAN_CUS_PCODE_SELECTIVE_DONE 4212                                 
#define CELL_SCAN_CUS_PCODE_PRED_EVALED 4216                                    
#define CELL_SCAN_CUS_PCODE_PRED_EVALED_USING_ROWSETS 4220                      
#define CELL_SIMULATED_PHYSICAL_IO_BYTES_ELIGIBLE_FOR_PREDICATE_OFFLOAD 4224    
#define CELL_SIMULATED_PHYSICAL_IO_BYTES_RETURNED_BY_PREDICATE_OFFLOAD 4228     
#define QUEUE_UPDATE_WITHOUT_CP_UPDATE 4232                                     
#define INDEX_CRX_UPGRADE__PREFETCH_ 4236                                       
#define INDEX_CRX_UPGRADE__FOUND_ 4240                                          
#define INDEX_CRX_UPGRADE__POSITIONED_ 4244                                     
#define INDEX_CMPH_DM_SPLIT_FOR_CU_MIGRATE_ROW 4248                            
#define INDEX_CMPH_DM_CU_MIGRATE_ROW 4252                                      
#define INDEX_CMPH_DM_INSERT_UNPURGE_CU_ROW 4256                               
#define INDEX_CMPL_RO_PREFIX_CHANGE_AT_BLOCK 4260                              
#define INDEX_CMPL_RO_PREFIX_NO_CHANGE_AT_BLOCK 4264                           
#define INDEX_CMPL_RO_BLOCKS_NOT_COMPRESSED 4268                               
#define INDEX_CMPL_RO_REORG_AVOID_LOAD_NEW_BLOCK 4272                          
#define INDEX_CMPL_RO_REORG_AVOID_SPLIT 4276                                   
#define INDEX_CMPL_CO_PREFIX_MISMATCH 4280                                     
#define INDEX_SPLIT_CANCEL_WAIT_NOCLEAN 4284                                    
#define INDEX_SPLIT_CANCEL_WAIT_CLEAN 4288                                      
#define INDEX_SPLIT_CANCEL_OP_SET 4292                                          
#define INDEX_CRX_STATE_INVALIDATION 4296                                       
#define LEAF_NODE_SPLITS 4300                                                   
#define LEAF_NODE_90_10_SPLITS 4304                                             
#define INDEX_CMPH_SP_LEAF_RECOMPRESS 4308                                     
#define INDEX_CMPH_SP_LEAF_NORECOMP_NOSPACE 4312                               
#define INDEX_CMPH_SP_LEAF_NORECOMP_NEGCOMP 4316                               
#define INDEX_CMPH_SP_LEAF_NORECOMP_OVERSIZE 4320                              
#define INDEX_CMPH_SP_LEAF_NORECOMP_ZEROCUR 4324                               
#define INDEX_CMPH_SP_LEAF_NORECOMP_LIMIT 4328                                 
#define INDEX_CMPH_SP_LEAF_NORECOMP_NOTRY 4332                                 
#define INDEX_CMPH_SP_DECI_NORECOMP_MAX_LIMIT 4336                             
#define INDEX_CMPH_SP_DECI_NORECOMP_DONOTRECOMP_BIT 4340                       
#define INDEX_CMPH_SP_DECI_NORECOMP_CUSZ_THRESHOLD 4344                        
#define INDEX_CMPH_SP_DECI_RECOMP_FREE_PURGE 4348                              
#define INDEX_CMPH_SP_LEAF_90_10_FAILED 4352                                   
#define BRANCH_NODE_SPLITS 4356                                                 
#define ROOT_NODE_SPLITS 4360                                                   
#define FAILED_PROBES_ON_INDEX_BLOCK_RECLAMATION 4364                           
#define RECURSIVE_ABORTS_ON_INDEX_BLOCK_RECLAMATION 4368                        
#define INDEX_RECLAMATION_EXTENSION_SWITCH 4372                                 
#define LOB_READS 4376                                                          
#define LOB_WRITES 4380                                                         
#define LOB_WRITES_UNALIGNED 4384                                               
#define CELL_INDEX_SCANS 4388                                                   
#define INDEX_FAST_FULL_SCANS__FULL_ 4392                                       
#define INDEX_FAST_FULL_SCANS__ROWID_RANGES_ 4396                               
#define INDEX_FAST_FULL_SCANS__DIRECT_READ_ 4400                                
#define INDEX_FETCH_BY_KEY 4404                                                 
#define INDEX_RANGE_SCANS 4408                                                  
#define INDEX_CMPH_SC_FFS_DECOMP_BUFFERS 4412                                  
#define INDEX_CMPH_SC_FFS_DECOMP_BUFFERS_ROWS_AVAIL 4416                       
#define INDEX_CMPH_SC_FFS_DECOMP_BUFFERS_ROWS_USED 4420                        
#define INDEX_CMPH_SC_FFS_DECOMP_FAILURES 4424                                 
#define INDEX_CMPH_SC_FFS_DECOMP_BUFFERS_RELEASED_AND_FOUND_VALID 4428         
#define QUEUE_SPLITS 4432                                                       
#define QUEUE_FLUSH 4436                                                        
#define QUEUE_POSITION_UPDATE 4440                                              
#define QUEUE_SINGLE_ROW 4444                                                   
#define QUEUE_OCP_PAGES 4448                                                    
#define QUEUE_QNO_PAGES 4452                                                    
#define HEAP_BLOCK_COMPRESS 4456                                                
#define HSC_OLTP_SPACE_SAVING 4460                                              
#define HSC_OLTP_COMPRESSED_BLOCKS 4464                                         
#define HSC_IDL_COMPRESSED_BLOCKS 4468                                          
#define HSC_COMPRESSED_SEGMENT_BLOCK_CHANGES 4472                               
#define HSC_HEAP_SEGMENT_BLOCK_CHANGES 4476                                     
#define HSC_OLTP_NON_COMPRESSIBLE_BLOCKS 4480                                   
#define HSC_OLTP_POSITIVE_COMPRESSION 4484                                      
#define HSC_OLTP_NEGATIVE_COMPRESSION 4488                                      
#define HSC_OLTP_RECURSIVE_COMPRESSION 4492                                     
#define HSC_OLTP_INLINE_COMPRESSION 4496                                        
#define HSC_OLTP_PARTIAL_COMPRESSION 4500                                       
#define HSC_OLTP_DROP_COLUMN 4504                                               
#define HSC_OLTP_COMPRESSION_SKIPPED_ROWS 4508                                  
#define HSC_OLTP_COMPRESSION_BLOCK_CHECKED 4512                                 
#define HEAP_SEGMENT_ARRAY_INSERTS 4516                                         
#define HEAP_SEGMENT_ARRAY_UPDATES 4520                                         
#define HSC_OLTP_COMPRESSION_WIDE_COMPRESSED_ROW_PIECES 4524                    
#define HEAP_SEGMENT_ARRAY_DELETES 4528                                         
#define SECUREFILE_ALLOCATION_BYTES 4532                                        
#define SECUREFILE_ALLOCATION_CHUNKS 4536                                       
#define SECUREFILE_DIRECT_READ_BYTES 4540                                       
#define SECUREFILE_DIRECT_WRITE_BYTES 4544                                      
#define SECUREFILE_DIRECT_READ_OPS 4548                                         
#define SECUREFILE_DIRECT_WRITE_OPS 4552                                        
#define SECUREFILE_INODE_READ_TIME 4556                                         
#define SECUREFILE_INODE_WRITE_TIME 4560                                        
#define SECUREFILE_INODE_IOREAP_TIME 4564                                       
#define SECUREFILE_INODE_LHB_REDO 4568                                          
#define SECUREFILE_INODE_ITREE_REDO 4572                                        
#define SECUREFILE_BYTES_NON_TRANSFORMED 4576                                   
#define SECUREFILE_NUMBER_OF_NON_TRANSFORMED_FLUSHES 4580                       
#define SECUREFILE_BYTES_ENCRYPTED 4584                                         
#define SECUREFILE_BYTES_CLEARTEXT 4588                                         
#define SECUREFILE_COMPRESSED_BYTES 4592                                        
#define SECUREFILE_UNCOMPRESSED_BYTES 4596                                      
#define SECUREFILE_BYTES_DEDUPLICATED 4600                                      
#define SECUREFILE_CREATE_DEDUP_SET 4604                                        
#define SECUREFILE_DESTROY_DEDUP_SET 4608                                       
#define SECUREFILE_ADD_DEDUPD_LOB_TO_SET 4612                                   
#define SECUREFILE_RMV_FROM_DEDUP_SET 4616                                      
#define SECUREFILE_REJECT_DEDUPLICATION 4620                                    
#define SECUREFILE_DEDUP_PREFIX_HASH_MATCH 4624                                 
#define SECUREFILE_NUMBER_OF_FLUSHES 4628                                       
#define SECUREFILE_DEDUP_FLUSH_TOO_LOW 4632                                     
#define SECUREFILE_DEDUP_CALLBACK_OPER_FINAL 4636                               
#define SECUREFILE_DEDUP_HASH_COLLISION 4640                                    
#define SECUREFILE_DEDUP_FITS_INLINE 4644                                       
#define SECUREFILE_DEDUP_WAPP_CACHE_MISS 4648                                   
#define HCC_LOAD_DIRECT_CUS 4652                                                
#define HCC_LOAD_CONVENTIONAL_CUS 4656                                          
#define HCC_LOAD_DIRECT_CUS_QUERY_LOW 4660                                      
#define HCC_LOAD_DIRECT_CUS_QUERY_HIGH 4664                                     
#define HCC_LOAD_DIRECT_CUS_ARCHIVE_HIGH 4668                                   
#define HCC_LOAD_DIRECT_CUS_ARCHIVE_LOW 4672                                    
#define HCC_LOAD_CONVENTIONAL_CUS_QUERY_LOW 4676                                
#define HCC_LOAD_CONVENTIONAL_CUS_QUERY_HIGH 4680                               
#define HCC_LOAD_CONVENTIONAL_CUS_ARCHIVE_HIGH 4684                             
#define HCC_LOAD_CONVENTIONAL_CUS_ARCHIVE_LOW 4688                              
#define HCC_LOAD_CONVENTIONAL_CUS_TAIL_BLK_ENHANCED 4692                        
#define HCC_LOAD_DIRECT_BYTES_COMPRESSED 4696                                   
#define HCC_LOAD_CONVENTIONAL_BYTES_COMPRESSED 4700                             
#define HCC_LOAD_DIRECT_BYTES_UNCOMPRESSED 4704                                 
#define HCC_LOAD_CONVENTIONAL_BYTES_UNCOMPRESSED 4708                           
#define HCC_LOAD_DIRECT_ROWS 4712                                               
#define HCC_LOAD_CONVENTIONAL_ROWS 4716                                         
#define HCC_LOAD_DIRECT_ROWS_NOT_COMPRESSED 4720                                
#define HCC_LOAD_CONVENTIONAL_ROWS_NOT_COMPRESSED 4724                          
#define HCC_LOAD_DIRECT_CUS_ROW_PIECES 4728                                     
#define HCC_LOAD_CONVENTIONAL_CUS_ROW_PIECES 4732                               
#define HCC_SCAN_RDBMS_CUS_DECOMPRESSED 4736                                    
#define HCC_SCAN_CELL_CUS_DECOMPRESSED 4740                                     
#define HCC_SCAN_RDBMS_CUS_QUERY_LOW 4744                                       
#define HCC_SCAN_CELL_CUS_QUERY_LOW 4748                                        
#define HCC_SCAN_RDBMS_CUS_QUERY_HIGH 4752                                      
#define HCC_SCAN_CELL_CUS_QUERY_HIGH 4756                                       
#define HCC_SCAN_RDBMS_CUS_ARCHIVE_HIGH 4760                                    
#define HCC_SCAN_CELL_CUS_ARCHIVE_HIGH 4764                                     
#define HCC_SCAN_RDBMS_CUS_ARCHIVE_LOW 4768                                     
#define HCC_SCAN_CELL_CUS_ARCHIVE_LOW 4772                                      
#define HCC_SCAN_RDBMS_BYTES_COMPRESSED 4776                                    
#define HCC_SCAN_CELL_BYTES_COMPRESSED 4780                                     
#define HCC_SCAN_RDBMS_BYTES_DECOMPRESSED 4784                                  
#define HCC_SCAN_CELL_BYTES_DECOMPRESSED 4788                                   
#define HCC_SCAN_RDBMS_CUS_COLUMNS_ACCESSED 4792                                
#define HCC_SCAN_CELL_CUS_COLUMNS_ACCESSED 4796                                 
#define SCAN_RDBMS_PIVOTED_COLUMNS_ACCESSED 4800                                
#define HCC_SCAN_RDBMS_COLUMNS_THEORETICAL_MAX 4804                             
#define HCC_SCAN_CELL_COLUMNS_THEORETICAL_MAX 4808                              
#define SCAN_RDBMS_PIVOTED_COLUMNS_THEORETICAL_MAX 4812                         
#define HCC_SCAN_RDBMS_ROWS 4816                                                
#define HCC_SCAN_CELL_ROWS 4820                                                 
#define SCAN_RDBMS_PIVOTED_ROWS 4824                                            
#define HCC_SCAN_RDBMS_CUS_ROW_PIECES_ACCESSED 4828                             
#define HCC_SCAN_CELL_CUS_ROW_PIECES_ACCESSED 4832                              
#define HCC_SCAN_RDBMS_CUS_ROW_PIECES_TOTAL 4836                                
#define HCC_SCAN_CELL_CUS_ROW_PIECES_TOTAL 4840                                 
#define HCC_SCAN_RDBMS_CUS_DECOMPRESSION_TIME 4844                              
#define HCC_SCAN_CELL_CUS_DECOMPRESSION_TIME 4848                               
#define HCC_DML_CUS 4852                                                        
#define HCC_SCAN_RDBMS_CUS_NORMAL 4856                                          
#define HCC_SCAN_RDBMS_CUS_TURBO 4860                                           
#define SCAN_RDBMS_PIVOTED_BLOCKS 4864                                          
#define HCC_FETCH_BY_ROWID_CUS 4868                                             
#define HCC_ANALYZE_TABLE_CUS 4872                                              
#define HCC_BLOCK_DUMP_CUS 4876                                                 
#define HCC_BLOCK_CHECK_CUS 4880                                                
#define HCC_ANALYZER_CALLS 4884                                                 
#define HCC_USAGE_ZFS 4888                                                      
#define HCC_USAGE_PILLAR 4892                                                   
#define HCC_USAGE_CLOUD 4896                                                    
#define HCC_DML_CONVENTIONAL 4900                                               
#define CELLMEMORY_IM_SCAN_CUS_PROCESSED_FOR_QUERY 4904                         
#define CELLMEMORY_IM_SCAN_CUS_PROCESSED_FOR_CAPACITY 4908                      
#define CELLMEMORY_IM_SCAN_CUS_PROCESSED_NO_MEMCOMPRESS 4912                    
#define CELLMEMORY_IM_LOAD_CUS_FOR_QUERY 4916                                   
#define CELLMEMORY_IM_LOAD_CUS_FOR_CAPACITY 4920                                
#define CELLMEMORY_IM_LOAD_CUS_NO_MEMCOMPRESS 4924                              
#define CELLMEMORY_IM_SCAN_CUS_REJECTED_FOR_QUERY 4928                          
#define CELLMEMORY_IM_SCAN_CUS_REJECTED_FOR_CAPACITY 4932                       
#define CELLMEMORY_IM_SCAN_CUS_REJECTED_NO_MEMCOMPRESS 4936                     
#define CELLMEMORY_IM_SCAN_STAT_1 4940                                          
#define CELLMEMORY_IM_SCAN_STAT_2 4944                                          
#define CELLMEMORY_IM_SCAN_STAT_3 4948                                          
#define CELLMEMORY_IM_SCAN_STAT_4 4952                                          
#define CELLMEMORY_IM_SCAN_STAT_5 4956                                          
#define HCC_BLOCK_COMPRESSIONS_COMPLETED 4960                                   
#define HCC_BLOCK_COMPRESSIONS_ATTEMPTED 4964                                   
#define HCC_SCAN_CUS_PREDICATES_RECEIVED 4968                                   
#define HCC_SCAN_CUS_PREDICATES_OPTIMIZED 4972                                  
#define HCC_SCAN_CUS_PREDICATES_APPLIED 4976                                    
#define HCC_SCAN_RDBMS_CUS_OPTIMIZED_READ 4980                                  
#define HCC_SCAN_CELL_CUS_OPTIMIZED_READ 4984                                   
#define HCC_SCAN_RDBMS_CUS_PRUNED 4988                                          
#define HCC_SCAN_CELL_CUS_PRUNED 4992                                           
#define HCC_SCAN_CELL_CUS_SENT_UNCOMPRESSED 4996                                
#define HCC_SCAN_CELL_CUS_SENT_COMPRESSED 5000                                  
#define HCC_SCAN_CELL_CUS_SENT_HEAD_PIECE 5004                                  
#define HCC_SCAN_CELL_CUS_PROCESSED_FOR_UNCOMPRESSED 5008                       
#define HCC_SCAN_CELL_CUS_PROCESSED_FOR_COMPRESSED 5012                         
#define HCC_SCAN_CUS_PCODE_AGGREGATION_PUSHDOWN 5016                            
#define HCC_SCAN_ROWS_PCODE_AGGREGATED 5020                                     
#define HCC_SCAN_CUS_PCODE_SELECTIVE_DONE 5024                                  
#define HCC_SCAN_CUS_PCODE_PRED_EVALED 5028                                     
#define HCC_SCAN_CUS_PCODE_PRED_EVALED_USING_ROWSETS 5032                       
#define SECUREFILES_DBFS_LINK_OPERATIONS 5036                                   
#define SECUREFILES_MOVE_TO_DBFS_LINK 5040                                      
#define SECUREFILES_COPY_FROM_DBFS_LINK 5044                                    
#define SECUREFILES_GET_DBFS_LINK_REFERENCE 5048                                
#define SECUREFILES_PUT_DBFS_LINK_REFERENCE 5052                                
#define SECUREFILES_IMPLICIT_COPY_FROM_DBFS_LINK 5056                           
#define SECUREFILES_DBFS_LINK_STREAMING_READS 5060                              
#define SECUREFILES_DBFS_LINK_OVERWRITES 5064                                   
#define IM_POPULATE_SEGMENTS_REQUESTED 5068                                     
#define IM_PREPOPULATE_SEGMENTS_REQUESTED 5072                                  
#define IM_REPOPULATE_SEGMENTS_REQUESTED 5076                                   
#define IM_POPULATE_PROCESS_KILLED 5080                                         
#define IM_POPULATE_SEGMENTS 5084                                               
#define IM_PREPOPULATE_SEGMENTS 5088                                            
#define IM_REPOPULATE_SEGMENTS 5092                                             
#define IM_POPULATE_CUS_REQUESTED 5096                                          
#define IM_PREPOPULATE_CUS_REQUESTED 5100                                       
#define IM_REPOPULATE_CUS_REQUESTED 5104                                        
#define IM_REPOPULATE__TRICKLE__CUS_REQUESTED 5108                              
#define IM_REPOPULATE__SCAN__CUS_REQUESTED 5112                                 
#define IM_REPOPULATE__INCREMENTAL__CUS_REQUESTED 5116                          
#define IM_REPOPULATE__DOUBLEBUFFERING__CUS_REQUESTED 5120                      
#define IM_REPOPULATE__INCREMENTAL__CUS_OLD_CU_UNAVAILABLE 5124                 
#define IM_REPOPULATE__INCREMENTAL__CUS_OLD_CU_EMPTY 5128                       
#define IM_REPOPULATE__INCREMENTAL__CUS_OLD_CU_DEFCHG 5132                      
#define IM_POPULATE_CUS_RESUBMITTED 5136                                        
#define IM_PREPOPULATE_CUS_RESUBMITTED 5140                                     
#define IM_REPOPULATE_CUS_RESUBMITTED 5144                                      
#define IM_REPOPULATE__TRICKLE__CUS_RESUBMITTED 5148                            
#define IM_REPOPULATE__SCAN__CUS_RESUBMITTED 5152                               
#define IM_POPULATE_CUS_NOT 5156                                                
#define IM_PREPOPULATE_CUS_NOT 5160                                             
#define IM_REPOPULATE_CUS_NOT 5164                                              
#define IM_REPOPULATE__TRICKLE__CUS_NOT 5168                                    
#define IM_REPOPULATE__SCAN__CUS_NOT 5172                                       
#define IM_POPULATE_CUS_NOP 5176                                                
#define IM_PREPOPULATE_CUS_NOP 5180                                             
#define IM_REPOPULATE_CUS_NOP 5184                                              
#define IM_REPOPULATE__TRICKLE__CUS_NOP 5188                                    
#define IM_REPOPULATE__SCAN__CUS_NOP 5192                                       
#define IM_POPULATE_CUS_NO_BLOCKS 5196                                          
#define IM_PREPOPULATE_CUS_NO_BLOCKS 5200                                       
#define IM_POPULATE_CUS 5204                                                    
#define IM_PREPOPULATE_CUS 5208                                                 
#define IM_REPOPULATE_CUS 5212                                                  
#define IM_REPOPULATE__TRICKLE__CUS 5216                                        
#define IM_REPOPULATE__SCAN__CUS 5220                                           
#define IM_REPOPULATE__INCREMENTAL__CUS 5224                                    
#define IM_REPOPULATE__DOUBLEBUFFERING__CUS 5228                                
#define IM_REPOPULATE__INCREMENTAL__CUS_USING_POPULATION 5232                   
#define IM_REPOPULATE__DELTA__CUS_REQUESTED 5236                                
#define IM_REPOPULATE__DELTA__CUS_RESUBMITTED 5240                              
#define IM_REPOPULATE__DELTA__CUS 5244                                          
#define IM_REPOPULATE__DELTA__DUE_TO_ROW_BASED_FORMULA 5248                     
#define IM_REPOPULATE__DELTA__DUE_TO_BLOCK_BASED_FORMULA 5252                   
#define IM_POPULATE_BYTES_FROM_STORAGE 5256                                     
#define IM_PREPOPULATE_BYTES_FROM_STORAGE 5260                                  
#define IM_REPOPULATE_BYTES_FROM_STORAGE 5264                                   
#define IM_REPOPULATE__TRICKLE__BYTES_FROM_STORAGE 5268                         
#define IM_REPOPULATE_DUE_TO_ROW_THRESHOLD_HIT 5272                             
#define IM_REPOPULATE_DUE_TO_BLOCK_THRESHOLD_HIT 5276                           
#define IM_POPULATE_ACCUMULATED_TIME__MS_ 5280                                  
#define IM_POPULATE_SEGMENTS_WALL_CLOCK_TIME__MS_ 5284                          
#define IM_PREPOPULATE_ACCUMULATED_TIME__MS_ 5288                               
#define IM_REPOPULATE_ACCUMULATED_TIME__MS_ 5292                                
#define IM_REPOPULATE__TRICKLE__ACCUMULATED_TIME__MS_ 5296                      
#define IM_REPOPULATE__DELTA__ACCUMULATED_TIME__MS_ 5300                        
#define IM_REPOPULATE_READ_TIME__MS_ 5304                                       
#define IM_POPULATE_BUFFER_DIRECT_READ_TIME__MS_ 5308                           
#define IM_POPULATE_EXTERNAL_TABLE_READ_TIME__MS_ 5312                          
#define IM_POPULATE_CUS_EMPTY 5316                                              
#define IM_REPOPULATE_CUS_EMPTY 5320                                            
#define IM_PREPOPULATE_CUS_EMPTY 5324                                           
#define IM_REPOPULATE__TRICKLE__CUS_EMPTY 5328                                  
#define IM_REPOPULATE__DELTA__CUS_EMPTY 5332                                    
#define IM_POPULATE_CUS_COLUMNS 5336                                            
#define IM_PREPOPULATE_CUS_COLUMNS 5340                                         
#define IM_REPOPULATE_CUS_COLUMNS 5344                                          
#define IM_REPOPULATE__TRICKLE__CUS_COLUMNS 5348                                
#define IM_POPULATE_BYTES_IN_MEMORY_DATA 5352                                   
#define IM_PREPOPULATE_BYTES_IN_MEMORY_DATA 5356                                
#define IM_REPOPULATE_BYTES_IN_MEMORY_DATA 5360                                 
#define IM_REPOPULATE__TRICKLE__BYTES_IN_MEMORY_DATA 5364                       
#define IM_POPULATE_BYTES_UNCOMPRESSED_DATA 5368                                
#define IM_PREPOPULATE_BYTES_UNCOMPRESSED_DATA 5372                             
#define IM_REPOPULATE_BYTES_UNCOMPRESSED_DATA 5376                              
#define IM_REPOPULATE__TRICKLE__BYTES_UNCOMPRESSED_DATA 5380                    
#define IM_POPULATE_ROWS 5384                                                   
#define IM_PREPOPULATE_ROWS 5388                                                
#define IM_REPOPULATE_ROWS 5392                                                 
#define IM_REPOPULATE__TRICKLE__ROWS 5396                                       
#define IM_POPULATE_CUS_CHAIN_PIECES 5400                                       
#define IM_PREPOPULATE_CUS_CHAIN_PIECES 5404                                    
#define IM_REPOPULATE_CUS_CHAIN_PIECES 5408                                     
#define IM_REPOPULATE__TRICKLE__CUS_CHAIN_PIECES 5412                           
#define IM_POPULATE_CUS_NO_MEMCOMPRESS 5416                                     
#define IM_PREPOPULATE_CUS_NO_MEMCOMPRESS 5420                                  
#define IM_REPOPULATE_CUS_NO_MEMCOMPRESS 5424                                   
#define IM_REPOPULATE__TRICKLE__CUS_NO_MEMCOMPRESS 5428                         
#define IM_POPULATE_CUS_MEMCOMPRESS_FOR_DML 5432                                
#define IM_PREPOPULATE_CUS_MEMCOMPRESS_FOR_DML 5436                             
#define IM_REPOPULATE_CUS_MEMCOMPRESS_FOR_DML 5440                              
#define IM_REPOPULATE__TRICKLE__CUS_MEMCOMPRESS_FOR_DML 5444                    
#define IM_POPULATE_CUS_MEMCOMPRESS_FOR_QUERY_LOW 5448                          
#define IM_PREPOPULATE_CUS_MEMCOMPRESS_FOR_QUERY_LOW 5452                       
#define IM_REPOPULATE_CUS_MEMCOMPRESS_FOR_QUERY_LOW 5456                        
#define IM_REPOPULATE__TRICKLE__CUS_MEMCOMPRESS_FOR_QUERY_LOW 5460              
#define IM_POPULATE_CUS_MEMCOMPRESS_FOR_QUERY_HIGH 5464                         
#define IM_PREPOPULATE_CUS_MEMCOMPRESS_FOR_QUERY_HIGH 5468                      
#define IM_REPOPULATE_CUS_MEMCOMPRESS_FOR_QUERY_HIGH 5472                       
#define IM_REPOPULATE__TRICKLE__CUS_MEMCOMPRESS_FOR_QUERY_HIGH 5476             
#define IM_POPULATE_CUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5480                       
#define IM_PREPOPULATE_CUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5484                    
#define IM_REPOPULATE_CUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5488                     
#define IM_REPOPULATE__TRICKLE__CUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5492           
#define IM_POPULATE_CUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5496                      
#define IM_PREPOPULATE_CUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5500                   
#define IM_REPOPULATE_CUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5504                    
#define IM_REPOPULATE__TRICKLE__CUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5508          
#define IM_XT_POPULATE_ROWS 5512                                                
#define IM_XT_POPULATE_CUS 5516                                                 
#define IM_XT_POPULATE_SEGMENTS 5520                                            
#define IM_XT_POPULATE_EMPTY_CU_CREATED 5524                                    
#define IM_SCAN_CUS_PCODE_AGGREGATION_PUSHDOWN 5528                             
#define IM_SCAN_ROWS_PCODE_AGGREGATED 5532                                      
#define IM_SCAN_CUS_PCODE_SELECTIVE_DONE 5536                                   
#define IM_SCAN_CUS_PCODE_PRED_EVALED 5540                                      
#define IM_SCAN_CUS_PCODE_PRED_EVALED_USING_ROWSETS 5544                        
#define IM_SCAN_CUS_PCODE_AGGREGATION_IME 5548                                  
#define IM_SCAN_CUS_SKIP_IME_BASE_IM_COL 5552                                   
#define IM_SCAN_CUS_SKIP_IME_LONG_VARCHAR_LOB_COL 5556                          
#define IM_SCAN_DICT_ENGINE_RESULTS_STORED 5560                                 
#define IM_SCAN_DICT_ENGINE_RESULTS_REUSED 5564                                 
#define IM_FASTSTART_READ_DATA_ACCUMULATED_TIME__MS_ 5568                       
#define IM_FASTSTART_READ_CUS_PROBLEMS 5572                                     
#define IM_FASTSTART_READ_HEADERS_ACCUMULATED_TIME__MS_ 5576                    
#define IM_FASTSTART_READ_ACCUMULATED_TIME__MS_ 5580                            
#define IM_FASTSTART_READ_VERIFY_ACCUMULATED_TIME__MS_ 5584                     
#define IM_FASTSTART_READ_CUS_REQUESTED 5588                                    
#define IM_FASTSTART_READ_CUS 5592                                              
#define IM_FASTSTART_READ_CUS_NOT_ACCESSIBLE 5596                               
#define IM_FASTSTART_READ_BYTES 5600                                            
#define IM_FASTSTART_READ_CUS_INCOMPATIBLE 5604                                 
#define IM_FASTSTART_READ_CUS_INVALID 5608                                      
#define IM_FASTSTART_WRITE_BYTES 5612                                           
#define IM_FASTSTART_WRITE_CUS 5616                                             
#define IM_FASTSTART_WRITE_CUS_REQUESTED 5620                                   
#define IM_FASTSTART_WRITE_CUS_PROBLEMS 5624                                    
#define IM_FASTSTART_WRITE_ACCUMULATED_TIME__MS_ 5628                           
#define IM_FASTSTART_WRITE_CUS_ENCRYPTION_MISMATCH 5632                         
#define IM_FASTSTART_WRITE_CUS_EVICTED 5636                                     
#define IM_FASTSTART_WRITE_CUS_TOO_DIRTY 5640                                   
#define IM_FASTSTART_WRITE_DEFERRED_CUS_REQUESTED 5644                          
#define IM_FASTSTART_WRITE_DEFERRED_CUS 5648                                    
#define IM_FASTSTART_WRITE_DEFERRED_ACCUMULATED__MS_ 5652                       
#define IM_FASTSTART_WRITE_DEFERRED_TIMEOUTS 5656                               
#define IM_FASTSTART_WRITE_DEFERRED_CUS_NOT_FOUND 5660                          
#define IM_FASTSTART_WRITE_SLAVE_STARTS_REQUESTED 5664                          
#define IM_FASTSTART_WRITE_SLAVE_STARTS 5668                                    
#define IM_FASTSTART_COORDINATOR_ACCUMULATED_TIME__MS_ 5672                     
#define IM_FASTSTART_COORDINATOR_CYCLE_ABORTS 5676                              
#define IM_FASTSTART_COORDINATOR_CYCLE_OVERRUNS 5680                            
#define IM_FASTSTART_COORDINATOR_RUNS 5684                                      
#define IM_FASTSTART_COORDINATOR_THROTTLE_DOWN 5688                             
#define IM_FASTSTART_COORDINATOR_TASK_SUBMITTED_PRIORITY_P1 5692                
#define IM_FASTSTART_COORDINATOR_TASK_SUBMITTED_PRIORITY_P2 5696                
#define IM_FASTSTART_COORDINATOR_TASK_SUBMITTED_PRIORITY_P3 5700                
#define IM_FASTSTART_COORDINATOR_TASK_PRIORITY_P1_TO_P2 5704                    
#define IM_FASTSTART_COORDINATOR_TASK_PRIORITY_P2_EXTENDED 5708                 
#define IM_FASTSTART_COORDINATOR_TASK_PRIORITY_P2_TO_P3 5712                    
#define IM_FASTSTART_COORDINATOR_SCHEDULER_RESTARTED 5716                       
#define IM_FASTSTART_DELETE_CUS_PROBLEM 5720                                    
#define IM_FASTSTART_GC_SLAVE_RUNS 5724                                         
#define IM_POPULATE_EUS_REQUESTED 5728                                          
#define IM_POPULATE_EUS 5732                                                    
#define IM_PREPOPULATE_EUS_REQUESTED 5736                                       
#define IM_PREPOPULATE_EUS 5740                                                 
#define IM_REPOPULATE_EUS_REQUESTED 5744                                        
#define IM_REPOPULATE_EUS 5748                                                  
#define IM_REPOPULATE__INCREMENTAL__EUS_REQUESTED 5752                          
#define IM_REPOPULATE__INCREMENTAL__EUS 5756                                    
#define IM_REPOPULATE__TRICKLE__EUS_REQUESTED 5760                              
#define IM_REPOPULATE__TRICKLE__EUS 5764                                        
#define IM_REPOPULATE__SCAN__EUS_REQUESTED 5768                                 
#define IM_REPOPULATE__SCAN__EUS 5772                                           
#define IM_POPULATE_EUS_ACCUMULATED_TIME__MS_ 5776                              
#define IM_PREPOPULATE_EUS_ACCUMULATED_TIME__MS_ 5780                           
#define IM_REPOPULATE_EUS_ACCUMULATED_TIME__MS_ 5784                            
#define IM_REPOPULATE__TRICKLE__EUS_ACCUMULATED_TIME__MS_ 5788                  
#define IM_POPULATE_EUS_COLUMNS 5792                                            
#define IM_PREPOPULATE_EUS_COLUMNS 5796                                         
#define IM_REPOPULATE_EUS_COLUMNS 5800                                          
#define IM_REPOPULATE__TRICKLE__EUS_COLUMNS 5804                                
#define IM_POPULATE_BYTES_IN_MEMORY_EU_DATA 5808                                
#define IM_PREPOPULATE_BYTES_IN_MEMORY_EU_DATA 5812                             
#define IM_REPOPULATE_BYTES_IN_MEMORY_EU_DATA 5816                              
#define IM_REPOPULATE__TRICKLE__BYTES_IN_MEMORY_EU_DATA 5820                    
#define IM_POPULATE_BYTES_UNCOMPRESSED_EU_DATA 5824                             
#define IM_PREPOPULATE_BYTES_UNCOMPRESSED_EU_DATA 5828                          
#define IM_REPOPULATE_BYTES_UNCOMPRESSED_EU_DATA 5832                           
#define IM_REPOPULATE__TRICKLE__BYTES_UNCOMPRESSED_EU_DATA 5836                 
#define IM_POPULATE_EUS_NO_MEMCOMPRESS 5840                                     
#define IM_PREPOPULATE_EUS_NO_MEMCOMPRESS 5844                                  
#define IM_REPOPULATE_EUS_NO_MEMCOMPRESS 5848                                   
#define IM_REPOPULATE__TRICKLE__EUS_NO_MEMCOMPRESS 5852                         
#define IM_POPULATE_EUS_MEMCOMPRESS_FOR_DML 5856                                
#define IM_PREPOPULATE_EUS_MEMCOMPRESS_FOR_DML 5860                             
#define IM_REPOPULATE_EUS_MEMCOMPRESS_FOR_DML 5864                              
#define IM_REPOPULATE__TRICKLE__EUS_MEMCOMPRESS_FOR_DML 5868                    
#define IM_POPULATE_EUS_MEMCOMPRESS_FOR_QUERY_LOW 5872                          
#define IM_PREPOPULATE_EUS_MEMCOMPRESS_FOR_QUERY_LOW 5876                       
#define IM_REPOPULATE_EUS_MEMCOMPRESS_FOR_QUERY_LOW 5880                        
#define IM_REPOPULATE__TRICKLE__EUS_MEMCOMPRESS_FOR_QUERY_LOW 5884              
#define IM_POPULATE_EUS_MEMCOMPRESS_FOR_QUERY_HIGH 5888                         
#define IM_PREPOPULATE_EUS_MEMCOMPRESS_FOR_QUERY_HIGH 5892                      
#define IM_REPOPULATE_EUS_MEMCOMPRESS_FOR_QUERY_HIGH 5896                       
#define IM_REPOPULATE__TRICKLE__EUS_MEMCOMPRESS_FOR_QUERY_HIGH 5900             
#define IM_POPULATE_EUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5904                       
#define IM_PREPOPULATE_EUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5908                    
#define IM_REPOPULATE_EUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5912                     
#define IM_REPOPULATE__TRICKLE__EUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5916           
#define IM_POPULATE_EUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5920                      
#define IM_PREPOPULATE_EUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5924                   
#define IM_REPOPULATE_EUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5928                    
#define IM_REPOPULATE__TRICKLE__EUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5932          
#define IM_SCAN_CUS_NO_MEMCOMPRESS 5936                                         
#define IM_SCAN_CUS_MEMCOMPRESS_FOR_DML 5940                                    
#define IM_SCAN_CUS_MEMCOMPRESS_FOR_QUERY_LOW 5944                              
#define IM_SCAN_CUS_MEMCOMPRESS_FOR_QUERY_HIGH 5948                             
#define IM_SCAN_CUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5952                           
#define IM_SCAN_CUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5956                          
#define IM_SCAN_EUS_NO_MEMCOMPRESS 5960                                         
#define IM_SCAN_EUS_MEMCOMPRESS_FOR_DML 5964                                    
#define IM_SCAN_EUS_MEMCOMPRESS_FOR_QUERY_LOW 5968                              
#define IM_SCAN_EUS_MEMCOMPRESS_FOR_QUERY_HIGH 5972                             
#define IM_SCAN_EUS_MEMCOMPRESS_FOR_CAPACITY_LOW 5976                           
#define IM_SCAN_EUS_MEMCOMPRESS_FOR_CAPACITY_HIGH 5980                          
#define IM_SCAN_CUS_DOUBLEBUFFERING 5984                                        
#define IM_SCAN_CUS_DELTA 5988                                                  
#define SESSION_LOGICAL_READS___IM 5992                                         
#define IM_SCAN_SEGMENTS_DISK 5996                                              
#define IM_SCAN_BYTES_IN_MEMORY 6000                                            
#define IM_SCAN_BYTES_UNCOMPRESSED 6004                                         
#define IM_SCAN_CUS_COLUMNS_ACCESSED 6008                                       
#define IM_SCAN_CUS_COLUMNS_DECOMPRESSED 6012                                   
#define IM_SCAN_CUS_COLUMNS_THEORETICAL_MAX 6016                                
#define IM_SCAN_EU_BYTES_IN_MEMORY 6020                                         
#define IM_SCAN_EU_BYTES_UNCOMPRESSED 6024                                      
#define IM_SCAN_EUS_COLUMNS_ACCESSED 6028                                       
#define IM_SCAN_EUS_COLUMNS_DECOMPRESSED 6032                                   
#define IM_SCAN_EUS_COLUMNS_THEORETICAL_MAX 6036                                
#define IM_SCAN_EU_ROWS 6040                                                    
#define IM_SCAN_ROWS 6044                                                       
#define IM_SIMD_COMPARE_CALLS 6048                                              
#define IM_SIMD_DECODE_CALLS 6052                                               
#define IM_SIMD_RLE_BURST_CALLS 6056                                            
#define IM_SIMD_SET_MEMBERSHIP_CALLS 6060                                       
#define IM_SIMD_BLOOM_FILTER_CALLS 6064                                         
#define IM_SIMD_XLATE_FILTER_CALLS 6068                                         
#define IM_SIMD_DECODE_UNPACK_CALLS 6072                                        
#define IM_SIMD_DECODE_SYMBOL_CALLS 6076                                        
#define IM_SIMD_COMPARE_SELECTIVE_CALLS 6080                                    
#define IM_SIMD_DECODE_SELECTIVE_CALLS 6084                                     
#define IM_SIMD_RLE_BURST_SELECTIVE_CALLS 6088                                  
#define IM_SIMD_SET_MEMBERSHIP_SELECTIVE_CALLS 6092                             
#define IM_SIMD_BLOOM_FILTER_SELECTIVE_CALLS 6096                               
#define IM_SIMD_XLATE_FILTER_SELECTIVE_CALLS 6100                               
#define IM_SIMD_DECODE_UNPACK_SELECTIVE_CALLS 6104                              
#define IM_SIMD_DECODE_SYMBOL_SELECTIVE_CALLS 6108                              
#define IM_SIMD_COMPARE_HW_OFFLOAD_CALLS 6112                                   
#define IM_SIMD_DECODE_HW_OFFLOAD_CALLS 6116                                    
#define IM_SIMD_RLE_BURST_HW_OFFLOAD_CALLS 6120                                 
#define IM_SIMD_SET_MEMBERSHIP_HW_OFFLOAD_CALLS 6124                            
#define IM_SIMD_DECODE_UNPACK_HW_OFFLOAD_CALLS 6128                             
#define IM_SCAN_ROWS_VALID 6132                                                 
#define IM_SCAN_ROWS_DELTA 6136                                                 
#define IM_SCAN_ROWS_RANGE_EXCLUDED 6140                                        
#define IM_SCAN_ROWS_DISCONTINUOUS 6144                                         
#define IM_SCAN_ROWS_EXCLUDED 6148                                              
#define IM_SCAN_ROWS_OPTIMIZED 6152                                             
#define IM_SCAN_ROWS_PROJECTED 6156                                             
#define IM_SCAN_ROWS_CACHE_DELTA_EXISTS 6160                                    
#define IM_SCAN_ROWS_CACHE_POPULATE 6164                                        
#define IM_SCAN_ROWS_CACHE_NO_DELTA 6168                                        
#define IM_SCAN_BLOCKS_CACHE 6172                                               
#define IM_SCAN_CUS_SPLIT_PIECES 6176                                           
#define IM_SCAN_EUS_SPLIT_PIECES 6180                                           
#define IM_REPOPULATE__INCREMENTAL__TOTAL_ROWS 6184                             
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__TOTAL_ROWS 6188                     
#define IM_REPOPULATE__INCREMENTAL__FETCHED_ROWS 6192                           
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__FETCHED_ROWS 6196                   
#define IM_REPOPULATE__INCREMENTAL__VALID_CU_ROWS 6200                          
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__VALID_CU_ROWS 6204                  
#define IM_REPOPULATE__INCREMENTAL__INVALID_CU_ROWS 6208                        
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__INVALID_CU_ROWS 6212                
#define IM_REPOPULATE__INCREMENTAL__CUS_COLUMNS 6216                            
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__CUS_COLUMNS 6220                    
#define IM_REPOPULATE__INCREMENTAL__CUS_COLUMNS_DICT_REUSED 6224                
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__CUS_COLUMNS_DICT_REUSED 6228        
#define IM_REPOPULATE__INCREMENTAL__CUS_COLUMNS_REUSED 6232                     
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__CUS_COLUMNS_REUSED 6236             
#define IM_REPOPULATE__INCREMENTAL__CU_BLOCKS 6240                              
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__CU_BLOCKS 6244                      
#define IM_REPOPULATE__INCREMENTAL__BLOCKS_READ 6248                            
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__BLOCKS_READ 6252                    
#define IM_REPOPULATE__INCREMENTAL__MODIFIED_BLOCKS 6256                        
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__MODIFIED_BLOCKS 6260                
#define IM_REPOPULATE__INCREMENTAL__CUS_VALID_COLUMNS_OPTIMIZED 6264            
#define IM_REPOPULATE__TRICKLE_INCREMENTAL__CUS_VALID_COLUMNS_OPTIMIZED 6268    
#define IM_POPULATE_SMU_DLM_LOCKS_FAIL 6272                                     
#define IM_REPOPULATE_SMU_DLM_LOCKS_FAIL 6276                                   
#define IM_POPULATE_NO_CONTIGUOUS_INMEMORY_SPACE 6280                           
#define IM_REPOPULATE_NO_CONTIGUOUS_INMEMORY_SPACE 6284                         
#define IM_POPULATE_NO_SPACE_IN_PGA 6288                                        
#define IM_REPOPULATE_NO_SPACE_IN_PGA 6292                                      
#define IM_POPULATE_SO_CLEANUP 6296                                             
#define IM_REPOPULATE_SO_CLEANUP 6300                                           
#define IM_DELTA_SO_CLEANUP 6304                                                
#define IM_SCAN_CUS_PREDICATES_RECEIVED 6308                                    
#define IM_SCAN_CUS_PREDICATES_APPLIED 6312                                     
#define IM_SCAN_CUS_PREDICATES_OPTIMIZED 6316                                   
#define IM_SCAN_CUS_OPTIMIZED_READ 6320                                         
#define IM_SCAN_CUS_PRUNED 6324                                                 
#define IM_SCAN_CUS_DELTA_PRUNED 6328                                           
#define IM_SCAN_SEGMENTS_MINMAX_ELIGIBLE 6332                                   
#define IM_FETCHES_BY_ROWID_FROM_IMCU 6336                                      
#define IM_FETCHES_BY_ROWID_FROM_DISK 6340                                      
#define IM_FETCHES_BY_ROWID_FROM_FETCH_LIST 6344                                
#define IM_FETCHES_BY_ROWID_ROW_INVALID_IN_IMCU 6348                            
#define IM_SCAN_CUS_COLUMN_NOT_IN_MEMORY 6352                                   
#define IM_SCAN_EXTENTS_INVALID 6356                                            
#define IM_SCAN_INVALID_ALL_BLOCKS 6360                                         
#define IM_SCAN_CUS_INVALID_OR_MISSING_REVERT_TO_ON_DISK_EXTENT 6364            
#define IM_SCAN_CUS_FAILED_TO_REGET_PIN 6368                                    
#define IM_SCAN_CUS_NO_ROWS_VALID 6372                                          
#define IM_SCAN__DYNAMIC__ROWS 6376                                             
#define IM_SCAN__DYNAMIC__MULTI_THREADED_SCANS 6380                             
#define IM_SCAN__DYNAMIC__MAX_DEGREE 6384                                       
#define IM_SCAN__DYNAMIC__PENDING_TASKS 6388                                    
#define IM_SCAN__DYNAMIC__EXECUTING_TASKS 6392                                  
#define IM_SCAN__DYNAMIC__TASK_EXECUTION_TIME 6396                              
#define IM_SCAN__DYNAMIC__TASK_SUBMISSION_TIME 6400                             
#define IM_SCAN__DYNAMIC__TASK_REAP_TIME 6404                                   
#define IM_SCAN__DYNAMIC__TASKS_PROCESSED_BY_THREAD 6408                        
#define IM_SCAN__DYNAMIC__TASKS_PROCESSED_BY_PARENT 6412                        
#define IM_SCAN__DYNAMIC__RS2_ROWSETS 6416                                      
#define IM_SPLIT_CUS_REQUESTED 6420                                             
#define IM_SPLIT_CUS 6424                                                       
#define IM_SPLIT_GET_SMALLER_CUS 6428                                           
#define IM_SPLIT_FAIL_NO_SPACE 6432                                             
#define IM_SPLIT_CU_TOO_SMALL 6436                                              
#define IM_SPLIT_FAIL 6440                                                      
#define IM_ZZZZ_SPARE1 6444                                                     
#define IM_ZZZZ_SPARE2 6448                                                     
#define IM_SUBCU_MM_BYTES_ALLOCATED 6452                                        
#define IM_SUBCU_INVIDX_BYTES_ALLOCATED 6456                                    
#define IM_SUBCU_MM_CUS 6460                                                    
#define IM_SUBCU_INVIDX_CUS 6464                                                
#define IM_SUBCU_MM_CUS_EXAMINED 6468                                           
#define IM_SUBCU_MM_CUS_SELECTED 6472                                           
#define IM_SUBCU_MM_SUBCUS_ELIMINATED 6476                                      
#define IM_SUBCU_MM_SUBCUS_IN_SELECTED_CUS 6480                                 
#define IM_SUBCU_HIST_SUBCUS_ELIMINATED 6484                                    
#define IM_SUBCU_HIST_SUBCUS_IN_SELECTED_CUS 6488                               
#define IM_SUBCU_INVIDX_CUS_EXAMINED 6492                                       
#define IM_SUBCU_INVIDX_CUS_SELECTED 6496                                       
#define IM_PREPOPULATE_CUS_REQUESTED_HWM 6500                                   
#define IM_POPULATE_CUS_REQUESTED_HWM 6504                                      
#define IM_PREPOPULATE_CUS_HWM 6508                                             
#define IM_POPULATE_CUS_HWM 6512                                                
#define IM_REPOPULATE_CUS_REQ_CLEANDELTA 6516                                   
#define IM_CUS_HWM_EXPANDED 6520                                                
#define IM_CUS_HWM_MISMATCH_DROP 6524                                           
#define IM_CUS_HWM_DROPPED 6528                                                 
#define INDEX_CMPH_LD_CU_UNDER_EST 6532                                        
#define INDEX_CMPH_LD_CU_FIT_ADD_ROWS 6536                                    
#define INDEX_CMPH_LD_CU_FIT 6540                                              
#define INDEX_CMPH_LD_CU_OVER_EST 6544                                         
#define INDEX_CMPH_LD_RETRY_IN_OVER_EST 6548                                   
#define INDEX_CMPH_LD_CU_NEGATIVE_COMP 6552                                    
#define INDEX_CMPH_LD_LF_BLKS_FLUSHED 6556                                     
#define INDEX_CMPH_LD_LF_BLKS_W_O_CU 6560                                      
#define INDEX_CMPH_LD_LF_BLKS_W_O_UNC_R 6564                                   
#define INDEX_CMPH_LD_LF_BLKS_W__UND_CU 6568                                   
#define INDEX_CMPH_LD_ROWS_COMPRESSED 6572                                     
#define INDEX_CMPH_LD_ROWS_UNCOMPRESSED 6576                                   
#define INDEX_CMPH_LD_INFINITE_LOOP 6580                                       
#define INDEX_CMPH_LD_CU_CMP_SUBCOL_PREFIX 6584                                
#define INDEX_CMPH_LD_CU_CMP_PREFIX_ROWS 6588                                  
#define INDEX_CMPH_LD_CU_CMP_ROWDIR 6592                                       
#define INDEX_CMPH_LD_CU_CMP_PROWDIR 6596                                      
#define INDEX_CMPH_LD_CU_CMP_DEDUP_KEYS 6600                                   
#define INDEX_CMPH_LD_CU_COLS_PREFIX_COMP 6604                                 
#define INDEX_CMPH_LD_CU_COLS_SUFFIX_COMP 6608                                 
#define INDEX_CMPH_LD_CU_COLS_LENGTH_COMP 6612                                 
#define INDEX_CMPH_LD_CU_COLS_FIXED_LENGTH 6616                                
#define INDEX_CMPH_LD_CU_COLS_LIST_COMP 6620                                   
#define INDEX_CMPH_LD_CU_COLS_BITMAP_COMP 6624                                 
#define INDEX_CMPH_LD_CU_COLS_CMP_SPECIAL_LENGTH 6628                          
#define INDEX_CMPH_LD_CU_COLS_SPECIAL_LENGTH 6632                              
#define INDEX_CMPH_LD_CU_COLS_SYMTAB_COMP 6636                                 
#define INDEX_CMPH_LD_CU_COLS_PREFIX_LENVAL 6640                               
#define INDEX_CMPH_CU_UNCOMP_SENTINELS 6644                                    
#define INDEX_CMPH_SP_LEAF_RECOMP_FEWER_UCS 6648                               
#define INDEX_CMPH_SP_LEAF_RECOMP_ZERO_UCS 6652                                
#define INDEX_CMPH_DM_CU_LOCK_EXPAND 6656                                      
#define INDEX_CMPH_DM_SPLIT_FOR_CU_LOCK_EXPAND 6660                            
#define INDEX_CMPH_DM_PURGE_DUMMY_CU 6664                                      
#define MEMOPT_R_FAIL_TO_PIN_BUFFER 6668                                        
#define MEMOPT_R_ENTRIES_DELETED 6672                                           
#define MEMOPT_R_LOOKUPS 6676                                                   
#define MEMOPT_R_HITS 6680                                                      
#define MEMOPT_R_MISSES 6684                                                    
#define MEMOPT_R_TAG_COLLISIONS 6688                                            
#define MEMOPT_R_LOOKUP_SKIPPED_DELETED_ROWS 6692                               
#define MEMOPT_R_LOOKUP_SKIPPED_LOCKED_ROWS 6696                                
#define MEMOPT_R_LOOKUP_SKIPPED_CHAINED_ROWS 6700                               
#define MEMOPT_R_FAILED_READS_ON_BUCKETS 6704                                   
#define MEMOPT_R_FAILED_READS_ON_BLOCKS 6708                                    
#define MEMOPT_R_LOOKUP_DETECTED_CR_BUFFER 6712                                 
#define MEMOPT_R_PUTS 6716                                                      
#define MEMOPT_R_PUTS_BUCKETS_FULL 6720                                         
#define MEMOPT_R_SUCCESSFUL_PUTS 6724                                           
#define MEMOPT_R_SUCCESSFUL_PUTS_WITH_EVICTIONS 6728                            
#define MEMOPT_R_SUCCESSFUL_PUTS_WITH_CUCKOO 6732                               
#define MEMOPT_R_SUCCESSFUL_PUTS_CUCKOO_DEADEND 6736                            
#define MEMOPT_R_SUCCESSFUL_PUTS_MAX_CUCKOO 6740                                
#define MEMOPT_R_FAILED_PUTS 6744                                               
#define MEMOPT_R_FAILED_PUTS_BUCKET_IN_FLUX 6748                                
#define MEMOPT_R_FAILED_PUTS_NO_SPACE 6752                                      
#define MEMOPT_R_POPULATE_TASKS_ACCEPTED 6756                                   
#define MEMOPT_R_POPULATE_TASKS_NOT_ACCEPTED 6760                               
#define MEMOPT_R_POPULATE_SKIPPED_LOCKED_ROWS 6764                              
#define MEMOPT_R_POPULATE_SKIPPED_DELETED_ROWS 6768                             
#define MEMOPT_R_POPULATE_SKIPPED_CHAINED_ROWS 6772                             
#define MEMOPT_R_ROWS_POPULATED 6776                                            
#define MEMOPT_R_POPULATE 6780                                                  
#define MEMOPT_R_BLOCKS_POPULATED 6784                                          
#define MEMOPT_R_FAILED_TO_GET_TBS_DROP_EQ 6788                                 
#define MEMOPT_R_FAILED_TO_GET_TBS_OFFLINE_EQ 6792                              
#define MEMOPT_R_FAILED_TO_GET_SEGMENT_DROP_EQ 6796                             
#define MEMOPT_R_REPOPULATE_TASKS_ACCEPTED 6800                                 
#define MEMOPT_R_REPOPULATE_TASKS_NOT_ACCEPTED 6804                             
#define MEMOPT_R_REPOPULATE 6808                                                
#define MEMOPT_R_ROWS_REPOPULATED 6812                                          
#define MEMOPT_R_BLOCKS_REPOPULATED 6816                                        
#define MEMOPT_R_REPOPULATE_SKIPPED_LOCKED_ROWS 6820                            
#define MEMOPT_R_REPOPULATE_SKIPPED_DELETED_ROWS 6824                           
#define MEMOPT_R_REPOPULATE_SKIPPED_CHAINED_ROWS 6828                           
#define MEMOPT_R_REPOPULATE_INVALIDATED_ENTRIES 6832                            
#define MEMOPT_R_CLEANUP 6836                                                   
#define MEMOPT_R_NO_IM_TASKS_ACCEPTED 6840                                      
#define MEMOPT_R_NO_IM_TASKS_NOT_ACCEPTED 6844                                  
#define MEMOPT_R_DROP_IM_TASKS_ACCEPTED 6848                                    
#define MEMOPT_R_DROP_IM_TASKS_NOT_ACCEPTED 6852                                
#define MEMOPT_W_BUFFER_GETS 6856                                               
#define MEMOPT_W_ROWS_WRITTEN 6860                                              
#define MEMOPT_W_ROWS_FLUSHED 6864                                              
#define MEMOPT_W_FLUSH_TASKS 6868                                               
#define MEMOPT_W_FLUSH_TASKS_DEFERRED 6872                                      
#define MEMOPT_W_BUFFER_MISS_SPACE 6876                                         
#define MEMOPT_W_BUFFER_MISS_LATCH 6880                                         
#define MEMOPT_W_BUFFER_MISS_WAITS 6884                                         
#define MEMOPT_W_BUFFER_MISS_SPC_NOLATCH 6888                                   
#define MEMOPT_W_BUFFER_MISS_WAIT_UNQ 6892                                      
#define MEMOPT_W_BUFFER_GOTCUR 6896                                             
#define MEMOPT_W_BUFFER_MISS_SPC_UNQ_NOLAT 6900                                 
#define MEMOPT_W_BUFFER_MISS_NOBUF 6904                                         
#define MEMOPT_W_BUFFER_HIT_BUCKET_0 6908                                       
#define MEMOPT_W_BUFFER_WAKE_POST 6912                                          
#define MEMOPT_W_DRAIN_SLEEP_WORK 6916                                          
#define MEMOPT_W_DRAIN_SLEEP 6920                                               
#define MEMOPT_W_DRAIN_SLEEP_WAKE_POST 6924                                     
#define SQL_AREA_PURGED 6928                                                    
#define SQL_AREA_EVICTED 6932                                                   
#define CCURSOR_SQL_AREA_EVICTED 6936                                         
#define NO_OF_ENCRYPT_OPS 6940                                                 
#define NO_OF_DECRYPT_OPS 6944                                                 
#define NO_OF_XS_SESSIONS_CREATED 6948                                         
#define NO_OF_XS_SESSIONS_ATTACHED 6952                                        
#define NO_OF_NAMESPACES_CREATED 6956                                          
#define NO_OF_USER_CALLBACKS_EXECUTED 6960                                     
#define NO_OF_ROLES_ENABLED_OR_DISABLED 6964                                   
#define NO_OF_PRINCIPAL_CACHE_MISSES 6968                                      
#define NO_OF_PRINCIPAL_INVALIDATIONS 6972                                     
#define NUMBER_OF_NONE_REDACTIONS 6976                                          
#define NUMBER_OF_FULL_REDACTIONS 6980                                          
#define NUMBER_OF_PARTIAL_REDACTIONS 6984                                       
#define NUMBER_OF_FORMAT_PRESERVING_REDACTIONS 6988                             
#define NUMBER_OF_RANDOM_REDACTIONS 6992                                        
#define NUMBER_OF_REGEXP_REDACTIONS 6996                                        
#define NUMBER_OF_NULLIFY_REDACTIONS 7000                                       
#define NUMBER_OF_REGEXP_WIDTH_REDACTIONS 7004                                  
#define DX_BB_ENQUEUE_LOCK_FOREGROUND_REQUESTS 7008                             
#define DX_BB_ENQUEUE_LOCK_FOREGROUND_WAIT_TIME 7012                            
#define DX_BB_ENQUEUE_LOCK_BACKGROUND_GETS 7016                                 
#define DX_BB_ENQUEUE_LOCK_BACKGROUND_GET_TIME 7020                             
#define CLUSTERWIDE_GLOBAL_TRANSACTIONS 7024                                    
#define CLUSTERWIDE_GLOBAL_TRANSACTIONS_SPANNING_RAC_NODES 7028                 
#define FORWARDED_2PC_COMMANDS_ACROSS_RAC_NODES 7032                            
#define GTX_PROCESSES_SPAWNED_BY_AUTOTUNE 7036                                  
#define GTX_PROCESSES_STOPPED_BY_AUTOTUNE 7040                                  
#define SESSION_CURSOR_CACHE_HITS 7044                                          
#define SESSION_CURSOR_CACHE_COUNT 7048                                         
#define CURSOR_RELOAD_FAILURES 7052                                             
#define DML_STATEMENTS_RETRIED 7056                                             
#define JAVA_CALL_HEAP_TOTAL_SIZE 7060                                          
#define JAVA_CALL_HEAP_TOTAL_SIZE_MAX 7064                                      
#define JAVA_CALL_HEAP_USED_SIZE 7068                                           
#define JAVA_CALL_HEAP_USED_SIZE_MAX 7072                                       
#define JAVA_CALL_HEAP_LIVE_SIZE 7076                                           
#define JAVA_CALL_HEAP_LIVE_SIZE_MAX 7080                                       
#define JAVA_CALL_HEAP_OBJECT_COUNT 7084                                        
#define JAVA_CALL_HEAP_OBJECT_COUNT_MAX 7088                                    
#define JAVA_CALL_HEAP_LIVE_OBJECT_COUNT 7092                                   
#define JAVA_CALL_HEAP_LIVE_OBJECT_COUNT_MAX 7096                               
#define JAVA_CALL_HEAP_GC_COUNT 7100                                            
#define JAVA_CALL_HEAP_COLLECTED_COUNT 7104                                     
#define JAVA_CALL_HEAP_COLLECTED_BYTES 7108                                     
#define JAVA_SESSION_HEAP_USED_SIZE 7112                                        
#define JAVA_SESSION_HEAP_USED_SIZE_MAX 7116                                    
#define JAVA_SESSION_HEAP_LIVE_SIZE 7120                                        
#define JAVA_SESSION_HEAP_LIVE_SIZE_MAX 7124                                    
#define JAVA_SESSION_HEAP_OBJECT_COUNT 7128                                     
#define JAVA_SESSION_HEAP_OBJECT_COUNT_MAX 7132                                 
#define JAVA_SESSION_HEAP_LIVE_OBJECT_COUNT 7136                                
#define JAVA_SESSION_HEAP_LIVE_OBJECT_COUNT_MAX 7140                            
#define JAVA_SESSION_HEAP_GC_COUNT 7144                                         
#define JAVA_SESSION_HEAP_COLLECTED_COUNT 7148                                  
#define JAVA_SESSION_HEAP_COLLECTED_BYTES 7152                                  
#define CURSOR_AUTHENTICATIONS 7156                                             
#define QUERIES_PARALLELIZED 7160                                               
#define DML_STATEMENTS_PARALLELIZED 7164                                        
#define DDL_STATEMENTS_PARALLELIZED 7168                                        
#define DFO_TREES_PARALLELIZED 7172                                             
#define PARALLEL_OPERATIONS_NOT_DOWNGRADED 7176                                 
#define PARALLEL_OPERATIONS_DOWNGRADED_TO_SERIAL 7180                           
#define PARALLEL_OPERATIONS_DOWNGRADED_75_TO_99_PCT 7184                        
#define PARALLEL_OPERATIONS_DOWNGRADED_50_TO_75_PCT 7188                        
#define PARALLEL_OPERATIONS_DOWNGRADED_25_TO_50_PCT 7192                        
#define PARALLEL_OPERATIONS_DOWNGRADED_1_TO_25_PCT 7196                         
#define PX_LOCAL_MESSAGES_SENT 7200                                             
#define PX_LOCAL_MESSAGES_RECV_D 7204                                           
#define PX_REMOTE_MESSAGES_SENT 7208                                            
#define PX_REMOTE_MESSAGES_RECV_D 7212                                          
#define BUFFER_IS_PINNED_COUNT 7216                                             
#define BUFFER_IS_NOT_PINNED_COUNT 7220                                         
#define NO_BUFFER_TO_KEEP_PINNED_COUNT 7224                                     
#define WORKAREA_MEMORY_ALLOCATED 7228                                          
#define WORKAREA_EXECUTIONS___OPTIMAL 7232                                      
#define WORKAREA_EXECUTIONS___ONEPASS 7236                                      
#define WORKAREA_EXECUTIONS___MULTIPASS 7240                                    
#define KEY_VECTOR_CUS_FILTERED 7244                                            
#define KEY_VECTOR_CUS_MIN_MAX_FILTERED 7248                                    
#define KEY_VECTOR_CU_CODES_PROCESSED 7252                                      
#define KEY_VECTOR_ROWS_PROCESSED_BY_VALUE 7256                                 
#define KEY_VECTOR_ROWS_PROCESSED_BY_CODE 7260                                  
#define KEY_VECTOR_CUS_PROCESSED_USING_CACHED_INTEGER_JOIN_KEYS 7264            
#define KEY_VECTOR_ROWS_FILTERED 7268                                           
#define KEY_VECTOR_FILTERED_ON_CELL 7272                                        
#define KEY_VECTOR_PROBED_ON_CELL 7276                                          
#define KEY_VECTORS_SENT_TO_CELL 7280                                           
#define KEY_VECTORS_SENT_TO_CELL_IN_LITE_MODE_DUE_TO_LAYOUT 7284                
#define KEY_VECTORS_SENT_TO_CELL_IN_LITE_MODE_DUE_TO_QUOTA 7288                 
#define KEY_VECTOR_SERIALIZATIONS_FOR_CELL 7292                                 
#define KEY_VECTOR_SERIALIZATIONS_IN_LITE_MODE_FOR_CELL 7296                    
#define KEY_VECTOR_QUERIES 7300                                                 
#define KEY_VECTORS_CREATED 7304                                                
#define KEY_VECTORS_CREATED__SIMPLE_LAYOUT_ 7308                                
#define KEY_VECTORS_CREATED__INDIRECT_LAYOUT_ 7312                              
#define KEY_VECTORS_CREATED__OFFSET_LAYOUT_ 7316                                
#define KEY_VECTORS_CREATED__DOUBLY_INDIRECT_LAYOUT_ 7320                       
#define KEY_VECTORS_CREATED__HASH_LAYOUT_ 7324                                  
#define KEY_VECTORS_CREATED__PAGED_ 7328                                        
#define KEY_VECTORS_CREATED__BIT_WIDE_ 7332                                     
#define KEY_VECTORS_CREATED__NIBBLE_WIDE_ 7336                                  
#define KEY_VECTORS_CREATED__BYTE_WIDE_ 7340                                    
#define KEY_VECTORS_CREATED__2_BYTE_WIDE_ 7344                                  
#define KEY_VECTORS_CREATED__4_BYTE_WIDE_ 7348                                  
#define KEY_VECTORS_CREATED_WITH_PAYLOAD 7352                                   
#define KEY_VECTORS_BYPASSED 7356                                               
#define KEY_VECTOR_STUBS_CREATED 7360                                           
#define KEY_VECTOR_CAS_MERGE_LOCKING_RETRIAL 7364                               
#define KEY_VECTOR_CAS_MERGE_ABORT 7368                                         
#define KEY_VECTOR_CAS_MERGE_OPERATIONS 7372                                    
#define KEY_VECTOR_NON_CAS_MERGE_OPERATIONS 7376                                
#define KEY_VECTOR_DGK_BATCH_PARCELS 7380                                       
#define KEY_VECTOR_DGK_RANGE_PARCELS 7384                                       
#define KEY_VECTOR_HASH_PROBES 7388                                             
#define KEY_VECTOR_HASH_INSERTS 7392                                            
#define KEY_VECTOR_HASH_CELLS_SCANNED 7396                                      
#define KEY_VECTOR_HASH_LOCKS_ENCOUNTERED 7400                                  
#define KEY_VECTOR_HASH_COPIED_ENCOUNTERED 7404                                 
#define KEY_VECTOR_EFILTERS_CREATED 7408                                        
#define VECTOR_GROUP_BY_OPERATIONS_SENT_TO_CELL 7412                            
#define VECTOR_GROUP_BY_OPERATIONS_NOT_SENT_TO_CELL_DUE_TO_KEY_VECTOR 7416      
#define VECTOR_GROUP_BY_OPERATIONS_NOT_SENT_TO_CELL_DUE_TO_CARDINALITY 7420     
#define VECTOR_GROUP_BY_ROWS_PROCESSED_ON_CELL 7424                             
#define VECTOR_GROUP_BY_ROWS_RETURNED_BY_CELL 7428                              
#define VECTOR_GROUP_BY_USED 7432                                               
#define VECTOR_GROUP_BY_ROWSOURCES_ADAPTED 7436                                 
#define VECTOR_GROUP_BY_ACCUMSPACE_CARDINALITY 7440                             
#define VECTOR_GROUP_BY_ACCUMSPACE_SIZE 7444                                    
#define VECTOR_GROUP_BY_OUT_OF_LINE_ROWS 7448                                   
#define VECTOR_GROUP_BY_OUT_OF_LINE_SIZE 7452                                   
#define VECTOR_GROUP_BY_STRING_ALLOCATIONS_SIZE 7456                            
#define VECTOR_GROUP_BY_STRING_ALLOCATIONS 7460                                 
#define VECTOR_GROUP_BY_STRING_RESIZES 7464                                     
#define VECTOR_GROUP_BY_ROWSETS_PROCESSED_ON_CELL 7468                          
#define VECTOR_ENCODED_ROWS 7472                                                
#define VECTOR_ENCODED_ROWS_DECODED 7476                                        
#define VECTOR_ENCODED_ROW_OPERATIONS 7480                                      
#define VECTOR_ENCODED_ROWSETS 7484                                             
#define VECTOR_ENCODED_ROWSETS_DECODED 7488                                     
#define VECTOR_ENCODED_ROWSET_OPERATIONS 7492                                   
#define VECTOR_ENCODED_ARITHMETIC_EXCEPTIONS 7496                               
#define VECTOR_ENCODED_ADAPTIVELY_DISABLED 7500                                 
#define LOB_TABLE_ID_LOOKUP_CACHE_MISSES 7504                                   
#define PARSE_TIME_CPU 7508                                                     
#define PARSE_TIME_ELAPSED 7512                                                 
#define PARSE_COUNT__TOTAL_ 7516                                                
#define PARSE_COUNT__HARD_ 7520                                                 
#define PARSE_COUNT__FAILURES_ 7524                                             
#define PARSE_COUNT__DESCRIBE_ 7528                                             
#define FRAME_SIGNATURE_MISMATCH 7532                                           
#define EXECUTE_COUNT 7536                                                      
#define BYTES_SENT_VIA_SQL_NET_TO_CLIENT 7540                                   
#define BYTES_RECEIVED_VIA_SQL_NET_FROM_CLIENT 7544                             
#define SQL_NET_ROUNDTRIPS_TO_FROM_CLIENT 7548                                  
#define BYTES_SENT_VIA_SQL_NET_TO_DBLINK 7552                                   
#define BYTES_RECEIVED_VIA_SQL_NET_FROM_DBLINK 7556                             
#define SQL_NET_ROUNDTRIPS_TO_FROM_DBLINK 7560                                  
#define BYTES_VIA_SQL_NET_VECTOR_TO_CLIENT 7564                                 
#define BYTES_VIA_SQL_NET_VECTOR_FROM_CLIENT 7568                               
#define BYTES_VIA_SQL_NET_VECTOR_TO_DBLINK 7572                                 
#define BYTES_VIA_SQL_NET_VECTOR_FROM_DBLINK 7576                               
#define SORTS__MEMORY_ 7580                                                     
#define SORTS__DISK_ 7584                                                       
#define SORTS__ROWS_ 7588                                                       
#define OTC_COMMIT_OPTIMIZATION_ATTEMPTS 7592                                   
#define OTC_COMMIT_OPTIMIZATION_HITS 7596                                       
#define OTC_COMMIT_OPTIMIZATION_FAILURE___SETUP 7600                            
#define CUMULATIVE_BEGIN_REQUESTS 7604                                          
#define CUMULATIVE_END_REQUESTS 7608                                            
#define CUMULATIVE_USER_CALLS_IN_REQUESTS 7612                                  
#define CUMULATIVE_USER_CALLS_PROTECTED_BY_APPLICATION_CONTINUITY 7616          
#define OLAP_PAGING_MANAGER_CACHE_HIT 7620                                      
#define OLAP_PAGING_MANAGER_CACHE_MISS 7624                                     
#define OLAP_PAGING_MANAGER_NEW_PAGE 7628                                       
#define OLAP_PAGING_MANAGER_CACHE_WRITE 7632                                    
#define OLAP_SESSION_CACHE_HIT 7636                                             
#define OLAP_SESSION_CACHE_MISS 7640                                            
#define OLAP_AGGREGATE_FUNCTION_CALC 7644                                       
#define OLAP_AGGREGATE_FUNCTION_PRECOMPUTE 7648                                 
#define OLAP_AGGREGATE_FUNCTION_LOGICAL_NA 7652                                 
#define OLAP_PAGING_MANAGER_POOL_SIZE 7656                                      
#define OLAP_IMPORT_ROWS_PUSHED 7660                                            
#define OLAP_IMPORT_ROWS_LOADED 7664                                            
#define OLAP_ROW_SOURCE_ROWS_PROCESSED 7668                                     
#define OLAP_ENGINE_CALLS 7672                                                  
#define OLAP_TEMP_SEGMENTS 7676                                                 
#define OLAP_TEMP_SEGMENT_READ 7680                                             
#define OLAP_PERM_LOB_READ 7684                                                 
#define OLAP_PAGING_MANAGER_CACHE_CHANGED_PAGE 7688                             
#define OLAP_FAST_LIMIT 7692                                                    
#define OLAP_GID_LIMIT 7696                                                     
#define OLAP_UNIQUE_KEY_ATTRIBUTE_LIMIT 7700                                    
#define OLAP_INHIER_LIMIT 7704                                                  
#define OLAP_FULL_LIMIT 7708                                                    
#define OLAP_CUSTOM_MEMBER_LIMIT 7712                                           
#define OLAP_ROW_ID_LIMIT 7716                                                  
#define OLAP_LIMIT_TIME 7720                                                    
#define OLAP_ROW_LOAD_TIME 7724                                                 
#define CELL_FLASH_CACHE_READ_HITS 7728                                         
#define CELL_FLASH_CACHE_READ_HITS_FOR_CONTROLFILE_READS 7732                   
#define CELL_FLASH_CACHE_READ_HITS_FOR_SMART_IO 7736                            
#define CELL_FLASH_CACHE_READ_HITS_FOR_TEMP_IO 7740                             
#define CELL_RAM_CACHE_READ_HITS 7744                                           
#define CELL_PERSISTENT_MEMORY_IO_READ_REQUESTS___LOCAL 7748                    
#define CELL_PERSISTENT_MEMORY_IO_READ_REQUESTS___REMOTE 7752                   
#define CELL_PERSISTENT_MEMORY_IO_READ_REQUESTS___SMART_IO 7756                 
#define WORKLOAD_CAPTURE__SIZE__IN_BYTES__OF_RECORDING 7760                     
#define WORKLOAD_CAPTURE__DBTIME 7764                                           
#define WORKLOAD_CAPTURE__USER_CALLS 7768                                       
#define WORKLOAD_CAPTURE__USER_CALLS_FLUSHED 7772                               
#define WORKLOAD_CAPTURE__UNREPLAYABLE_USER_CALLS 7776                          
#define WORKLOAD_CAPTURE__USER_TXNS 7780                                        
#define WORKLOAD_CAPTURE__USER_LOGINS 7784                                      
#define WORKLOAD_CAPTURE__UNSUPPORTED_USER_CALLS 7788                           
#define WORKLOAD_CAPTURE__ERRORS 7792                                           
#define WORKLOAD_CAPTURE__PL_SQL_USER_SUBCALLS 7796                             
#define WORKLOAD_CAPTURE__PL_SQL_USER_CALLS 7800                                
#define WORKLOAD_CAPTURE__PL_SQL_SUBCALL_SIZE_OF_RECORDING 7804                 
#define WORKLOAD_CAPTURE__PL_SQL_DBTIME 7808                                    
#define WORKLOAD_REPLAY__DBTIME 7812                                            
#define WORKLOAD_REPLAY__NETWORK_TIME 7816                                      
#define WORKLOAD_REPLAY__THINK_TIME 7820                                        
#define WORKLOAD_REPLAY__TIME_GAIN 7824                                         
#define WORKLOAD_REPLAY__TIME_LOSS 7828                                         
#define WORKLOAD_REPLAY__USER_CALLS 7832                                        
#define WORKLOAD_REPLAY__DEADLOCKS_RESOLVED 7836                                
#define WORKLOAD_REPLAY__PL_SQL_USER_CALLS 7840                                 
#define WORKLOAD_REPLAY__PL_SQL_USER_SUBCALLS 7844                              
#define WORKLOAD_REPLAY__PL_SQL_DBTIME 7848                                     
#define CELL_PHYSICAL_WRITE_IO_BYTES_ELIGIBLE_FOR_OFFLOAD 7852                  
#define CELL_PHYSICAL_WRITE_IO_HOST_NETWORK_BYTES_WRITTEN_DURING_OFFLOA 7856    
#define CELL_LOGICAL_WRITE_IO_REQUESTS 7860                                     
#define CELL_LOGICAL_WRITE_IO_REQUESTS_ELIGIBLE_FOR_OFFLOAD 7864                
#define INFINIBAND_HCA_TRANSMIT_LOADAVG 7868                                    
#define INFINIBAND_HCA_RECEIVE_LOADAVG 7872                                     
#define INFINIBAND_HCA_MAX_RATE 7876                                           
#define INFINIBAND_HCA_TRANSMIT_DATA 7880                                       
#define INFINIBAND_HCA_RECEIVE_DATA 7884                                        
#define BACKUP_PIECES_COMPRESSED_LOCALLY 7888                                   
#define BACKUP_DATA_COMPRESSED_LOCALLY 7892                                     
#define BACKUP_COMPRESSED_DATA_WRITTEN_LOCALLY 7896                             
#define BACKUP_PIECE_LOCAL_PROCESSING_TIME 7900                                 
#define BACKUP_PIECES_COMPRESSED_REMOTELY 7904                                  
#define BACKUP_DATA_COMPRESSED_REMOTELY 7908                                    
#define BACKUP_COMPRESSED_DATA_WRITTEN_REMOTELY 7912                            
#define BACKUP_PIECE_REMOTE_PROCESSING_TIME 7916                                
#define OS_USER_TIME_USED 7920                                                  
#define OS_SYSTEM_TIME_USED 7924                                                
#define OS_MAXIMUM_RESIDENT_SET_SIZE 7928                                       
#define OS_INTEGRAL_SHARED_TEXT_SIZE 7932                                       
#define OS_INTEGRAL_UNSHARED_DATA_SIZE 7936                                     
#define OS_INTEGRAL_UNSHARED_STACK_SIZE 7940                                    
#define OS_PAGE_RECLAIMS 7944                                                   
#define OS_PAGE_FAULTS 7948                                                     
#define OS_SWAPS 7952                                                           
#define OS_BLOCK_INPUT_OPERATIONS 7956                                          
#define OS_BLOCK_OUTPUT_OPERATIONS 7960                                         
#define OS_SOCKET_MESSAGES_SENT 7964                                            
#define OS_SOCKET_MESSAGES_RECEIVED 7968                                        
#define OS_SIGNALS_RECEIVED 7972                                                
#define OS_VOLUNTARY_CONTEXT_SWITCHES 7976                                      
#define OS_INVOLUNTARY_CONTEXT_SWITCHES 7980                                    
#define OS_LOST_PACKETS 7984                                                    
#define OS_TOTAL_NUMBER_OF_RETRANSMITTED_PACKETS 7988                           
#define OS_TOTAL_BYTES_ACKED 7992                                               
#define OS_TOTAL_BYTES_RECEIVED 7996                                            
#define OS_TIME__USEC__BUSY_SENDING_DATA 8000                                   
#define OS_TIME__USEC__LIMITED_BY_RECEIVE_WINDOW 8004                           
#define OS_TIME__USEC__LIMITED_BY_SEND_BUFFER 8008                              
#define OS_DATA_SEGMENTS_IN 8012                                                
#define OS_DATA_SEGMENTS_OUT 8016                                               
#define OS_TIME__USEC__BUSY_SENDING_DATA_UNDER_CONGESTION 8020                  
#define OS_TIME__USEC__ROUND_TRIP_TIME 8024                                     
#define OS_TIME__USEC__ROUND_TRIP_TIME_VARIANCE 8028                            
#define OS_SEND_CONGESTION_WINDOW 8032                                          
#define OS_ADVERTISED_SEND_WINDOW 8036                                          
#define OS_ADVERTISED_RECEIVE_WINDOW 8040                                       
#define OS_TIME__USEC__LAST_DATA_SENT 8044                                      
#define OS_TIME__USEC__LAST_DATA_RECEIVED 8048                                  
#define OS_TIME__USEC__LAST_ACK_SENT 8052                                       
#define OS_TIME__USEC__LAST_ACK_RECEIVED 8056                                   
#define OS_PATH_MAXIMUM_TRANSMISSION_UNIT_MTU_ 8060                             
#define INSTANCE_STATISTIC_TEST_CASE 8064                                       
#define CELL_RDMA_READS 8068                                                    
#define CELL_RDMA_WRITES 8072                                                   
#define CELL_PMEM_CACHE_READ_HITS 8076                                          
#define CELL_PMEM_CACHE_WRITES 8080                                             
#define NS_TRANSACTIONS 8084                                                    
#define NS_TRANSACTIONS_TIMED_OUT 8088                                          
#define NS_TRANSACTIONS_INTERRUPTED 8092                                        
#define NS_TRANSACTIONS_NOT_USING_ALL_STANDBYS 8096                             
#define NS_TRANSACTIONS_SKIPPING_SEND 8100                                      
#define NS_TRANSACTION_SETUPS 8104                                              
#define NS_TRANSACTION_BYTES_LOADED 8108                                        
#define NS_TRANSACTION_BYTES_TO_NETWORK 8112                                    
#define NS_TRANSACTION_BYTES_RELOGGED 8116                                      
#define NS_TRANSACTION_BYTES_LOGGED 8120                                        
#define NS_TRANSACTION_SEND_TIME 8124                                           
#define NS_TRANSACTION_SETUP_TIME 8128                                          
#define NS_TRANSACTION_CONFIRM_TIME 8132                                        
#define NS_RECOVERY_TIMEOUT_INTERRUPTS 8136                                     
#define NS_RECOVERY_DTC_FULL_INTERRUPTS 8140                                    
#define NS_RECOVERY_FETCH_REQUESTS_MADE 8144                                    
#define NS_RECOVERY_FETCH_RANGES_RECEIVED 8148                                  
#define NS_RECOVERY_FETCH_REQUESTED_BYTES 8152                                  
#define NS_RECOVERY_FETCH_RECEIVED_BYTES 8156                                   
#define NS_RECOVERY_FETCH_RECEIVED_TIME 8160                                    
#define NS_RECOVERY_FETCH_REQUESTS_REMADE 8164                                  
char latch[][100]={                                                             
"PC and Classifier lists for WLM",                                              
"PC and Service Request Count lists for WLM",                                   
"post/wait queue",                                                              
"hot latch diags",                                                              
"test excl. non-parent l0",                                                     
"test excl. parent l0",                                                         
"test excl. parent2 l0",                                                        
"test shared non-parent l0",                                                    
"test excl. non-parent lmax",                                                   
"test excl. parent2 lmid cln",                                                  
"test shared parent2 lmid",                                                     
"test pdb exclusive",                                                           
"test pdb shared",                                                              
"test open exclusive",                                                          
"test open shared",                                                             
"test mode exclusive",                                                          
"test mode shared",                                                             
"test mixed exclusive",                                                         
"test OSP lt1",                                                                 
"test OSP tl2",                                                                 
"test OSP ult3",                                                                
"test OSP lt4",                                                                 
"process allocation",                                                           
"call allocation",                                                              
"session statistics",                                                           
"interrupt manipulation",                                                       
"session allocation",                                                           
"session switching",                                                            
"process group creation",                                                       
"session idle bit",                                                             
"client/application info",                                                      
"longop free list parent",                                                      
"ksuosstats global area",                                                       
"ksupkttest latch",                                                             
"ksi resource reuse count",                                                     
"cached attr list",                                                             
"ksim membership request latch",                                                
"ksim group membership cache",                                                  
"object stats modification",                                                    
"Drain structure latch",                                                        
"kss move lock",                                                                
"SO private so latch",                                                          
"ksm sga alloc latch",                                                          
"PDB LRU structure",                                                            
"process memory detail",                                                        
"DGA heap latch 1",                                                             
"UM root latch ",                                                               
"UM object latch",                                                              
"parameter table management",                                                   
"dtp latch",                                                                    
"ksbxic instance latch",                                                        
"kse signature",                                                                
"messages",                                                                     
"enqueues",                                                                     
"pdb enqueue hash chains",                                                      
"enqueue hash chains",                                                          
"instance enqueue",                                                             
"enqueue freelist latch",                                                       
"trace latch",                                                                  
"i/o slave adaptor",                                                            
"ksfv messages",                                                                
"msg queue latch",                                                              
"done queue latch",                                                             
"session queue latch",                                                          
"direct msg latch",                                                             
"vecio buf des",                                                                
"ksfv subheap",                                                                 
"FOB s.o list latch",                                                           
"FOB consolidated s.o list latch",                                              
"FIB s.o chain latch",                                                          
"SGA IO buffer pool latch",                                                     
"File IO Stats segmented array latch",                                          
"SGA global fib table latch",                                                   
"DGA anchor latch",                                                             
"FOB OSP latch",                                                                
"KSFQ",                                                                         
"X$KSFQP",                                                                      
"KSFS OFS layer alloc latch",                                                   
"KSFS OFS ctx level parent latch",                                              
"KSFS OFS sess layer parent latch",                                             
"KSFS OFS req layer parent latch",                                              
"KSFSD name cache latch",                                                       
"KSFSD name cache parent latch",                                                
"KSFS id table parent latch",                                                   
"KSFS ksfs_node latch",                                                         
"KSFS Receive and Send Queue latch",                                            
"OFS request latch",                                                            
"OFS forget queue latch",                                                       
"resmgr:free threads list",                                                     
"resmgr group change latch",                                                    
"KSK PDB IO ON",                                                                
"KSK PDB IO STAT",                                                              
"resmgr:plan change latch",                                                     
"resmgr:plan change alloc latch",                                               
"resmgr:pq event array",                                                        
"resmgr:pq mstat",                                                              
"channel handle pool latch",                                                    
"channel operations parent latch",                                              
"message pool operations parent latch",                                         
"channel anchor",                                                               
"dynamic channels",                                                             
"ksv instance latch",                                                           
"ksv class latch",                                                              
"ksv msg queue latch",                                                          
"ksv allocation latch",                                                         
"ksv remote inst ops",                                                          
"first spare latch - X non-parent",                                             
"second spare latch - X non-parent",                                            
"third spare latch - X non-parent",                                             
"fourth spare latch - X non-parent",                                            
"fifth spare latch - X non-parent",                                             
"sixth spare latch - X parent",                                                 
"seventh spare latch - X parent",                                               
"eighth spare latch - X parent",                                                
"ninth spare latch - X parent",                                                 
"tenth spare latch - X parent",                                                 
"eleventh spare latch - children",                                              
"twelfth spare latch - children",                                               
"thirteenth spare latch - children",                                            
"fourteenth spare latch - children",                                            
"fifteenth spare latch - children",                                             
"sixteenth spare latch - S non-parent",                                         
"seventeenth spare latch - S non-parent",                                       
"eighteenth spare latch - S non-parent",                                        
"nineteenth spare latch - S non-parent",                                        
"twentieth spare latch - S non-parent",                                         
"twenty-first spare latch - S par",                                             
"twenty-second spare latch - S par",                                            
"twenty-third spare latch - S par",                                             
"twenty-fourth spare latch - S par",                                            
"twenty-fifth spare latch - S par",                                             
"KSIPCGSN Hash Table latch",                                                    
"KSIPCGSN Namespace latch",                                                     
"KSIPC SGA allocation parent latch",                                            
"ksipc so latch",                                                               
"KSIPC SHREG latch",                                                            
"KSIPC ASPC anchor latch",                                                      
"ksxp shared latch",                                                            
"IPC stats buffer allocation latch",                                            
"IPC other latch",                                                              
"ksxp so latch",                                                                
"segmented array pool",                                                         
"KSXR Instance Gone Latch",                                                     
"KSXR large replies",                                                           
"KSXR hang analysis phase 1 latch",                                             
"KSXR hang analysis phase 2 latch",                                             
"SGA mapping latch",                                                            
"active service list",                                                          
"service drain list",                                                           
"last service list",                                                            
"java patching",                                                                
"database property service latch",                                              
"OS process allocation",                                                        
"OS process",                                                                   
"OS process: request allocation",                                               
"Request holder compeltion list latch",                                         
"prespawn queue latch",                                                         
"proc-group map latch",                                                         
"ksir sga latch",                                                               
"kspoltest latch",                                                              
"ksz_so allocation latch",                                                      
"reid allocation latch",                                                        
"storage server table manipulation latch",                                      
"pmon tst latch",                                                               
"pmon tst latch 2",                                                             
"BA statistics",                                                                
"KSRMF SGA anchor latch",                                                       
"KSRMF UT anchor latch",                                                        
"ksolt lwth alloc",                                                             
"KSOLT OSP latch",                                                              
"pmon dead latch",                                                              
"pmon spawn latch",                                                             
"MGA shared context root latch",                                                
"MGA shared context latch",                                                     
"MGA heap latch",                                                               
"MGA pid alloc latch",                                                          
"MGA asr alloc latch",                                                          
"KSGL SGA anchor latch",                                                        
"KSGL LS Segment latch",                                                        
"KSRMA SGA anchor latch",                                                       
"DNFS DISP R Q",                                                                
"DNFS DISP C Q",                                                                
"DNFS DISP CLEAN PAR",                                                          
"quarantine object",                                                            
"quarantine region",                                                            
"quarantine pending",                                                           
"ksevn object root latch",                                                      
"ksns object root latch",                                                       
"ksns object allocation latch",                                                 
"ksns object latch",                                                            
"KSWL SGA anchor latch",                                                        
"NVM Coremask",                                                                 
"NVM DISP Global context",                                                      
"ksutcpistat latch",                                                            
"queued dump request",                                                          
"global hanganlyze operation",                                                  
"ges process table freelist",                                                   
"ges process parent latch",                                                     
"ges process hash list",                                                        
"affinity stats objects freelist",                                              
"affinity stats hash tables freelist",                                          
"process pkey statistics list",                                                 
"ges resource table freelist",                                                  
"ges cached resource lists",                                                    
"ges resource hash list",                                                       
"ges resource scan list",                                                       
"GES quarantineQ latch",                                                        
"ges s-lock bitvec freelist",                                                   
"ges enqueue table freelist",                                                   
"ges remote lock freelist",                                                     
"ges DFS wait callback info",                                                   
"kjirbuddy resource latch",                                                     
"mount mode context latch",                                                     
"ges timeout list",                                                             
"ges deadlock list",                                                            
"kjci process list latch",                                                      
"kjci process context latch",                                                   
"kjci objects freelist latch",                                                  
"kjcipctx state object freelist latch",                                         
"kjci request sequence latch",                                                  
"kjoeq omni enqueue hash bucket latch",                                         
"kjoeq Omni Enqueue freelist latch",                                            
"kjoeq replication context freelist latch",                                     
"kjoedcso state object freelist latch",                                         
"kjoer owner hash bucket",                                                      
"kjoer owner freelist",                                                         
"kjoer replication context freelist",                                           
"kjsc protect control request queue",                                           
"kjsc Request obj freelist latch",                                              
"kjsc Ring Buffer obj freelist latch",                                          
"kjscpss state object freelist latch",                                          
"kjsca protect service hash table bucket",                                      
"kjsca protect pkey hash table bucket",                                         
"kjsca service obj freelist latch",                                             
"kjsca pkey obj freelist latch",                                                
"kjsc protect warm up context",                                                 
"ges statistic table",                                                          
"ges synchronous data",                                                         
"KJC message pool free list",                                                   
"KJC message pool pending avail list",                                          
"KJC message pool KGH calls",                                                   
"KJC receiver ctx free list",                                                   
"KJC snd proxy ctx free list",                                                  
"KJC destination ctx free list",                                                
"KJC receiver queue access list",                                               
"KJC snd proxy queue access list",                                              
"KJC global resend message queue",                                              
"KJCT receiver queue access",                                                   
"KJCT flow control latch",                                                      
"KJC global post event buffer",                                                 
"ges domain table",                                                             
"ges group table",                                                              
"gcs resource hash",                                                            
"gcs opaque info freelist",                                                     
"gcs nodemap pool",                                                             
"gcs resource freelist",                                                        
"gcs resource scan list",                                                       
"gcs resource timerq list",                                                     
"kjbr roi instance map",                                                        
"gcs resource validate list",                                                   
"gcs lock state resolution latch",                                              
"gcs shadows freelist",                                                         
"cr slave free list",                                                           
"gcs commit scn state",                                                         
"name-service entry",                                                           
"name-service request queue",                                                   
"name-service pending queue",                                                   
"name-service namespace bucket",                                                
"name-service memory objects",                                                  
"name-service namespace objects",                                               
"name-service request",                                                         
"name-service memory recovery",                                                 
"gcs remastering latch",                                                        
"pkey global statistics",                                                       
"gcs partitioned table hash",                                                   
"gcs pcm hashed value bucket hash",                                             
"gcs remaster request queue",                                                   
"gcs affinity object freelist latch",                                           
"gcs brownout history latch",                                                   
"read-moslty lock queue under pkey",                                            
"recovery domain freelist",                                                     
"recovery domain hash bucket",                                                  
"pdb domain request queues",                                                    
"ges value block free list",                                                    
"Testing",                                                                      
"heartbeat check",                                                              
"heartbeat structure management",                                               
"heartbeat history management",                                                 
"acceptable condition management",                                              
"Hang Manager wait event statistics",                                           
"gcr global ctx",                                                               
"gcr metric datalist",                                                          
"gcr structure management",                                                     
"rt rmv count latch",                                                           
"Accel glob updates",                                                           
"Accel KGA glob updates",                                                       
"ASM to smr",                                                                   
"GCS logfile block",                                                            
"GCS logfile write queue",                                                      
"kjbfp shared context",                                                         
"kjpm my inst data",                                                            
"kjpm same node instance lists",                                                
"kjpm process struct free list",                                                
"latch for ges resource pool freelist",                                         
"ksilookup lmd array freelist latch",                                           
"ksiresm freelist latch",                                                       
"latch for ges rht structure freelist",                                         
"latch for ges rht buckets array freelist",                                     
"ges recovery domain freelist latch",                                           
"KMG MMAN ready and startup request latch",                                     
"KMG resize request state object freelist",                                     
"Memory Management Latch",                                                      
"Deferred Allocation Latch",                                                    
"file number translation table",                                                
"mostly latch-free SCN",                                                        
"lgwr LWN SCN",                                                                 
"other instances last written RBA",                                             
"Consistent RBA",                                                               
"write to kcbpws",                                                              
"kcbtsemkid latch",                                                             
"FC keep messages queue",                                                       
"cache buffers lru chain",                                                      
"buffer pool",                                                                  
"multiple dbwriter suspend",                                                    
"active checkpoint queue latch",                                                
"checkpoint queue latch",                                                       
"cache buffers chains",                                                         
"cache buffer handles",                                                         
"multiblock read objects",                                                      
"block corruption recovery state",                                              
"parallel ibr array",                                                           
"kcb DW scan objtemp latch",                                                    
"kcb DW scan objtemp hash table latch",                                         
"cache table scan latch",                                                       
"tablespace key chain",                                                         
"flash file access latch",                                                      
"simulator lru latch",                                                          
"simulator hash latch",                                                         
"sim partition latch",                                                          
"state object free list",                                                       
"object queue header operation",                                                
"object queue header freelist",                                                 
"object queue memory",                                                          
"archive destination",                                                          
"FAL Queue",                                                                    
"kcrrgapb latch",                                                               
"RSGA Queue",                                                                   
"Unexpected Error Test",                                                        
"controlfile update task",                                                      
"redo log management",                                                          
"Managed Standby Recovery State",                                               
"log archive config",                                                           
"krso process",                                                                 
"SGA kcrrgap latch",                                                            
"krsr_sgaq_avmstats latch",                                                     
"Real time apply boundary",                                                     
"SGA kcrrpinfo latch",                                                          
"SGA kcrrlatmscnl latch",                                                       
"RTA CIC message",                                                              
"redo transport task",                                                          
"archive process",                                                              
"alert log latch",                                                              
"LGWR NS Write",                                                                
"managed standby",                                                              
"RTT parent context",                                                           
"for slaves getting lno",                                                       
"redo writing",                                                                 
"redo copy",                                                                    
"redo allocation",                                                              
"real redo SCN",                                                                
"log write info",                                                               
"log write worker phase",                                                       
"redo gen encryption key structure",                                            
"RBA broadcast init",                                                           
"OS file lock latch",                                                           
"Online Datafile Move latch",                                                   
"kcfpdbrel_bitvec latch",                                                       
"gc element",                                                                   
"gc persistent rm",                                                             
"gc imc list",                                                                  
"gc pmon cleanup",                                                              
"gc xid list",                                                                  
"gc undo hash index",                                                           
"gc query keys",                                                                
"loader state object freelist",                                                 
"begin backup scn array",                                                       
"flush log buffer task latch",                                                  
"write to kcvcfhmap",                                                           
"modify kcvdpc_req/_file",                                                      
"wallet access so alloc latch",                                                 
"krb spare1 latch",                                                             
"krb spare2 latch",                                                             
"krb spare3 latch",                                                             
"krb spare4 latch",                                                             
"krbmrosl",                                                                     
"krbabrstatl",                                                                  
"Backup Appliance state change latch",                                          
"Backup Appliance communications latch",                                        
"Backup Appliance health check latch",                                          
"BA container sga ctx latch",                                                   
"logminer work area",                                                           
"logminer local",                                                               
"logminer context allocation",                                                  
"logical standby cache",                                                        
"logical standby view",                                                         
"media recovery process out of buffers",                                        
"read-only violation array modification",                                       
"standby media recovery info",                                                  
"obj/range reuse redo processing",                                              
"Media rcv so alloc latch",                                                     
"parallel recoverable recovery",                                                
"block media rcv so alloc latch",                                               
"readable standby influx scn",                                                  
"readable standby metadata redo cache",                                         
"readable standby lamport table",                                               
"rsb inst ckpt scn",                                                            
"change tracking state change latch",                                           
"change tracking optimization SCN",                                             
"change tracking consistent SCN",                                               
"lock DBA buffer during media recovery",                                        
"lock new checkpoint scn during media recovery",                                
"reservation so alloc latch",                                                   
"Reserved Space Latch",                                                         
"flashback marker cache",                                                       
"flashback FBA barrier",                                                        
"flashback SCN barrier",                                                        
"hint flashback FBA barrier",                                                   
"flashback hint SCN barrier",                                                   
"flashback allocation",                                                         
"flashback mapping",                                                            
"flashback copy",                                                               
"flashback sync request",                                                       
"flashback prepare log info",                                                   
"Minimum flashback SCN latch",                                                  
"Block new check invariant rollback SCN latch",                                 
"Flashback coordinator context latch",                                          
"file deallocation SCN cache",                                                  
"Transportable DB Context Latch",                                               
"readredo stats and histogram",                                                 
"cvmap freelist lock",                                                          
"kcfis latch",                                                                  
"latch for sabmr requests triggered by queries",                                
"io pool granule metadata list",                                                
"io pool granule list",                                                         
"Nologging Standby SCN Time Map cache",                                         
"Nologging Standby Statistics",                                                 
"data request task latch",                                                      
"KCNF Data Request Queue",                                                      
"Nologging standby progress SIL",                                               
"kcn buffer chains",                                                            
"kcn header allocation",                                                        
"kcnr cache write SO allocation",                                               
"kcnr recent RCVID list update",                                                
"granule list of data transfer cache",                                          
"granule from data transfer cache",                                             
"KCNIBR - invalid block range tree",                                            
"mira inst ckpt scn",                                                           
"mira process information array modification",                                  
"krdbc state object latch",                                                     
"Lost write SCN list",                                                          
"Lost write change tracking",                                                   
"Shadow lost write data file",                                                  
"ADG active session counter latch",                                             
"dml lock allocation",                                                          
"DML lock allocation",                                                          
"list of block allocation",                                                     
"transaction allocation",                                                       
"dummy allocation",                                                             
"transaction branch allocation",                                                
"undo global data",                                                             
"KTU in-memory txn table latch",                                                
"MinActiveScn Latch",                                                           
"temp undo so allocation",                                                      
"KTURMA SGA allocation parent latch",                                           
"KTURMA ODPSCN latch",                                                          
"parallel txn reco latch",                                                      
"intra txn parallel recovery",                                                  
"Undo Hint Latch",                                                              
"resumable state object",                                                       
"In memory undo latch",                                                         
"KTF sga latch",                                                                
"MQL Tracking Latch",                                                           
"Change Notification Hash table latch",                                         
"Change Notification Latch",                                                    
"flashback archiver latch",                                                     
"change notification client cache latch",                                       
"corrupted undo seg latch",                                                     
"SGA Logging Log Latch",                                                        
"SGA Logging Bkt Latch",                                                        
"KTILM latch",                                                                  
"ILM activity tracking latch",                                                  
"ILM access tracking extent",                                                   
"ktm prv jrnls",                                                                
"ktmpj HT ls",                                                                  
"imc-txn-wrk-lat",                                                              
"imc buf hdl lat",                                                              
"imc srchsp lat",                                                               
"imc hash lat",                                                                 
"imc sj lat",                                                                   
"imc cr clone buf",                                                             
"ktm adg jrnls",                                                                
"ktm adg worklink",                                                             
"ktm adg lookuptable level 1",                                                  
"ktm adg lookuptable level 2",                                                  
"ktm adg stages",                                                               
"ktm adg space",                                                                
"sort extent pool",                                                             
"lob segment hash table latch",                                                 
"lob segment query latch",                                                      
"lob segment dispenser latch",                                                  
"fast space usage latch",                                                       
"shrink stat allocation latch",                                                 
"file cache latch",                                                             
"ktm global data",                                                              
"ktfbn latch",                                                                  
"space background SGA latch",                                                   
"space background task latch",                                                  
"space background state object latch",                                          
"ILM Stats main anchor latch",                                                  
"ILM Stats Stripe Latch",                                                       
"in-memory columnar extent map latch",                                          
"in-memory columnar ts extent map chunk latch",                                 
"in-memory global pool latch",                                                  
"in-memory area latch",                                                         
"IM area scb latch",                                                            
"IM area sb latch",                                                             
"base objn cache latch",                                                        
"in-memory columnar segment hash table latch",                                  
"IM seg hdr latch",                                                             
"IM emb latch",                                                                 
"GDID metadata structure latch",                                                
"SR Stats main anchor latch",                                                   
"SR Stats Stripe Latch",                                                        
"auto segment repair latch",                                                    
"ktimext state object latch",                                                   
"IMXT hash table latch",                                                        
"sequence cache",                                                               
"temp lob duration state obj allocation",                                       
"kssmov protection latch",                                                      
"File State Object Pool Parent Latch",                                          
"Write State Object Pool Parent Latch",                                         
"deferred cleanup latch",                                                       
"domain validation update latch",                                               
"kdlx hb parent latch",                                                         
"Locator state objects pool parent latch",                                      
"Dedup Write Append Table Latch",                                               
"Populate so latch",                                                            
"In-Memory auxiliary task latch",                                               
"In-Memory Background task hash table latch",                                   
"IMFS defer write list",                                                        
"IMFS defer write force",                                                       
"IM Global dictionary latch",                                                   
"IM Global dictionary queue latch",                                             
"IM Global dictionary rw latch",                                                
"Global dict space allocation latch",                                           
"KDMADO latch",                                                                 
"KDMADO bll latch",                                                             
"KDMADO action list latch",                                                     
"KDMADO param val cache sync",                                                  
"KDMADO Action Sync",                                                           
"KDCStatHash latch",                                                            
"Column stats entry latch",                                                     
"KDKV Auxiliary Map Latch",                                                     
"KDKV Invalid Buffer Latch",                                                    
"KDFI Buf Ctl Latch",                                                           
"KDFI Buffer Latch",                                                            
"KDFI Hash Bucket Latch",                                                       
"KDFI Hash Elem Latch",                                                         
"row cache objects",                                                            
"KQF runtime table column alloc",                                               
"KQF runtime purge top lvl latch",                                              
"QOL Name Generation Latch",                                                    
"remote tool request latch",                                                    
"kkae edition name cache",                                                      
"KKCN reg stat latch",                                                          
"KKCN grp reg latch",                                                           
"KKCN grp data latch",                                                          
"global KZLD latch for mem in SGA",                                             
"global KZLD latch for auth type mem in SGA",                                   
"Read Only Database Account Status",                                            
"cost function",                                                                
"Policy Refresh Latch",                                                         
"Policy Hash Table Latch",                                                      
"OLS label cache",                                                              
"OLS Group Tree",                                                               
"instance information",                                                         
"policy information",                                                           
"REDO key cache latch",                                                         
"global ctx hash table latch",                                                  
"RECO Verifiers Cache",                                                         
"Triton Security Context Version Latch",                                        
"RAS Session User&Flag Table Latch",                                            
"Roles granted to users",                                                       
"Roles granted to regular roles",                                               
"Role set constraints",                                                         
"Limit of XDS Child Cursor Latch",                                              
"Security Class Hashtable",                                                     
"first Audit Vault latch",                                                      
"second Audit Vault latch",                                                     
"third Audit Vault latch",                                                      
"fourth Audit Vault latch",                                                     
"policy result list latch",                                                     
"XS state object latch",                                                        
"Dependency Info",                                                              
"Parent latch for dependency tracking",                                         
"sga hash table parent latch",                                                  
"kzsc heap latch",                                                              
"Key management",                                                               
"Nonce variable",                                                               
"Store Old PDB GUID list",                                                      
"kzan audit policy latch",                                                      
"records written to CLI",                                                       
"global KZLG latch for memory in SGA",                                          
"global KZLG latch for AD domain memory in SGA",                                
"KZIC Latch",                                                                   
"global tx hash mapping",                                                       
"k2q lock allocation",                                                          
"k2q global data latch",                                                        
"shared pool",                                                                  
"library cache load lock",                                                      
"Token Manager",                                                                
"resmgr:actses change state",                                                   
"resmgr:actses change group",                                                   
"resmgr:session queuing",                                                       
"resmgr:active threads",                                                        
"resmgr:schema config",                                                         
"resmgr:vc list latch",                                                         
"resmgr:incr/decr stats",                                                       
"resmgr:method mem alloc latch",                                                
"resmgr:plan CPU method",                                                       
"resmgr:resource group CPU method",                                             
"QMT",                                                                          
"shared pool simulator",                                                        
"shared pool sim alloc",                                                        
"Streams Generic",                                                              
"Shared B-Tree",                                                                
"Memory Queue",                                                                 
"Memory Queue Subscriber",                                                      
"Memory Queue Message Subscriber #1",                                           
"Memory Queue Message Subscriber #2",                                           
"Memory Queue Message Subscriber #3",                                           
"Memory Queue Message Subscriber #4",                                           
"pesom_hash_node",                                                              
"pesom_free_list",                                                              
"pesom_heap_alloc",                                                             
"peshm",                                                                        
"Mutex",                                                                        
"Mutex Stats",                                                                  
"pebof_rrv",                                                                    
"ODM-NFS:Global file structure",                                                
"KGNFS-NFS:SHM structure",                                                      
"kgnfs mount latch",                                                            
"KGNFS-NFS:SVR LIST ",                                                          
"SGA heap creation lock",                                                       
"SGA heap locks",                                                               
"SGA pool creation lock",                                                       
"SGA pool locks",                                                               
"SGA bucket locks",                                                             
"SGA blob lock",                                                                
"SGA blob parent",                                                              
"kgb latch",                                                                    
"kgb parent",                                                                   
"SGA table lock",                                                               
"Event Group Locks",                                                            
"SGA slab metadata lock",                                                       
"test generic normal",                                                          
"test generic pdb",                                                             
"test generic open",                                                            
"test generic mode",                                                            
"Sage HT Latch",                                                                
"OFS SGA Latch",                                                                
"shared server configuration",                                                  
"session timer",                                                                
"shared server info",                                                           
"dispatcher info",                                                              
"virtual circuit buffers",                                                      
"virtual circuit queues",                                                       
"virtual circuits",                                                             
"virtual circuit holder",                                                       
"kmcptab latch",                                                                
"kmcpvec latch",                                                                
"cp pool array latch",                                                          
"cp cmon array latch",                                                          
"cp server array latch",                                                        
"cp server hash latch",                                                         
"cp cso latch",                                                                 
"cp pool latch",                                                                
"cp handoff latch",                                                             
"cp holder latch",                                                              
"cp srv type state latch",                                                      
"cp srv type wait latch",                                                       
"cp ref latch",                                                                 
"cp sga latch",                                                                 
"lreg configuration",                                                           
"end-point list",                                                               
"parameter list",                                                               
"address list",                                                                 
"JOX SGA heap latch",                                                           
"JOX JIT latch",                                                                
"JOX JIT DGA latch",                                                            
"JOX JIT code cache latch",                                                     
"job_queue_processes parameter latch",                                          
"job workq parent latch",                                                       
"job_queue_processes free list latch",                                          
"SGA Blackbox latch",                                                           
"query server process",                                                         
"query server freelists",                                                       
"error message lists",                                                          
"process queue",                                                                
"process queue reference",                                                      
"parallel query stats",                                                         
"business card",                                                                
"queuing load statistics",                                                      
"parallel query alloc buffer",                                                  
"kxfxscanrate_latch",                                                           
"PX hash array latch",                                                          
"hash table modification latch",                                                
"hash table dml freq tracking latch",                                           
"hash table zonemap usage tracking latch",                                      
"hash table expression usage tracking latch",                                   
"hash table column usage latch",                                                
"hash table column stats latch",                                                
"hash table Sql Plan Finding latch",                                            
"hash table sql contorl latch",                                                 
"constraint object allocation",                                                 
"device information",                                                           
"temporary table state object allocation",                                      
"Parent latch for segments scanning",                                           
"Parent latch for query hash table access",                                     
"internal temp table object number allocation latch",                           
"SQL memory manager latch",                                                     
"SQL memory manager workarea list latch",                                       
"compile environment latch",                                                    
"Bloom filter list latch",                                                      
"Bloom Filter SGA latch",                                                       
"Result Cache: RC Latch",                                                       
"Result Cache: SO Latch",                                                       
"Result Cache: MB Latch",                                                       
"Statement queuing latch",                                                      
"Statement Queuing SGA latch",                                                  
"key vector list latch",                                                        
"MGA service latch",                                                            
"kupp process latch",                                                           
"pass worker exception to master",                                              
"datapump job fixed tables latch",                                              
"datapump attach fixed tables latch",                                           
"Shared memory lock latch",                                                     
"process",                                                                      
"VPSO SGA",                                                                     
"STREAMS LCR",                                                                  
"STREAMS: txn btree",                                                           
"STREAMS Pool Advisor",                                                         
"kokc descriptor allocation latch",                                             
"ncodef allocation latch",                                                      
"NLS data objects",                                                             
"kpon job info latch",                                                          
"kpon sga structure",                                                           
"reg$ timeout service time",                                                    
"KPON ksr channel latch",                                                       
"Emon Post latch",                                                              
"emon sga global latch",                                                        
"KPOND pool lst latch",                                                         
"KPOND ksr channel latch",                                                      
"KKCN Reg Hash Table latch",                                                    
"KKCNE Reg Stat latch",                                                         
"kKCN Cqn SGA",                                                                 
"KKCN Cqn Reg Hash Table latch",                                                
"KKCNE grp reg latch",                                                          
"session state list latch",                                                     
"kpoxft latch",                                                                 
"kpplsSyncStateListSga: lock",                                                  
"connection pool sga data lock",                                                
"message enqueue sync latch",                                                   
"image handles of buffered messages latch",                                     
"kwqi:kchunk latch",                                                            
"AQ spare variable",                                                            
"enqueue message sequence number",                                              
"Req enq shard id",                                                             
"Req deq shard id",                                                             
"KWSMCLD State Object",                                                         
"AQ Message drive state object latch",                                          
"KWQP Prop Status",                                                             
"KWQS pqueue ctx latch",                                                        
"KWQS pqsubs latch",                                                            
"AQ Propagation Scheduling Proc Table",                                         
"AQ Propagation Scheduling System Load",                                        
"job queue sob latch",                                                          
"rules engine aggregate statistics",                                            
"rules engine rule set statistics",                                             
"rules engine rule statistics",                                                 
"rules engine evaluation context statistics",                                   
"enqueue sob latch",                                                            
"kwqbsgn:msghdr",                                                               
"kwqbsn:qxl",                                                                   
"kwqbsn:qsga",                                                                  
"kwqbcco:cco",                                                                  
"bufq statistics",                                                              
"spilled messages latch",                                                       
"queue sender's info. latch",                                                   
"bq:time manger info latch",                                                    
"qmn task queue latch",                                                         
"qmn task context latch",                                                       
"qmn state object latch",                                                       
"KWQMN job cache list latch",                                                   
"KWQMN to-be-Stopped Buffer list Latch",                                        
"AQ deq hash table latch",                                                      
"AQ dequeue txn counter latch",                                                 
"AQ disk delete txn counter latch",                                             
"AQ small txn context latch",                                                   
"AQ deq log statistics latch",                                                  
"AQ deq log cmt cbk chunk latch",                                               
"AQ ht cmt cbk chunk latch",                                                    
"Message cache latch",                                                          
"message bitmap latch",                                                         
"Txn bkt latch",                                                                
"Retry bkt latch",                                                              
"Txn Ht elm latch",                                                             
"Retry Ht elm latch",                                                           
"shard latch",                                                                  
"subshard operation latch",                                                     
"subscriber Ht bkt",                                                            
"Subscriber Ht elm latch",                                                      
"kwslbprocl: process count latch",                                              
"kwslbmdl: metadata latch",                                                     
"kwslbutl: uncommitted txn latch",                                              
"kwslbql: queue latch",                                                         
"Cross process SGAlat",                                                         
"AQ Coord jobx_kwsbgsgn latch",                                                 
"AQ process state object latch",                                                
"AQ Sharded master pool latch",                                                 
"AQ Background: interrupt command latch",                                       
"AQ Slave freSlvL_kwsbgsgn latch",                                              
"KWSBIT Free List",                                                             
"KWSB Job Cache",                                                               
"KWSNSM State Object",                                                          
"KWSNSME Free List",                                                            
"kwsptjobAdPtLt: AdPt list latch",                                              
"kwsptjobTrPtLt: TrPt list latch",                                              
"kwsptQcachLt: queue cache latch",                                              
"kwsptTrncTsksLt: trunc task latch",                                            
"KWSBTM slave so",                                                              
"KWSBTM scheduling stats",                                                      
"KWSSNMAP bitmap",                                                              
"AQ: IPC master latch",                                                         
"AQ: IPC msg seq no latch",                                                     
"AQ Sharded subscriber statistics latch",                                       
"kwsopt stat latch",                                                            
"kwsslLat: skiplist latch",                                                     
"state object latch",                                                           
"kwsslGlobalLat: global latch",                                                 
"AQ OPT Background Master Latch",                                               
"fixed table rows for x$hs_session",                                            
"qm_init_sga",                                                                  
"Latch for NonceHistory",                                                       
"XDB unused session pool",                                                      
"XDB used session pool",                                                        
"XDB Config-1",                                                                 
"XDB Config-2",                                                                 
"XDB Config-3",                                                                 
"qmtmrcsg_init",                                                                
"XML DB Events",                                                                
"XDB NFS Stateful SGA Latch",                                                   
"qmne Export Table Latch",                                                      
"XDB NFS Security Latch",                                                       
"XDB Byte Lock SGA Latch",                                                      
"XDB Mcache SGA Latch",                                                         
"XDB PL/SQL Support",                                                           
"DMON Work Queues Latch",                                                       
"DMON Network Error List Latch",                                                
"RSM process latch",                                                            
"NSV command ID generation latch",                                              
"NSV message latch",                                                            
"Metadata in SGA latch",                                                        
"Request id generation latch",                                                  
"Fast-Start Failover State Latch",                                              
"xscalc freelist",                                                              
"xssinfo freelist",                                                             
"AW SGA latch",                                                                 
"ASM allocation",                                                               
"KFA SGA latch",                                                                
"buffer pin latch",                                                             
"KFC SGA latch",                                                                
"KFC LRU latch",                                                                
"KFC Hash Latch",                                                               
"KFC FX Hash Latch",                                                            
"ASM map headers",                                                              
"ASM map operation freelist",                                                   
"ASM map operation hash table",                                                 
"ASM map load waiting list",                                                    
"Split maps with pending writes",                                               
"KFK SGA Libload latch",                                                        
"ASM Keyed state latch",                                                        
"Lsod array latch",                                                             
"I/O Staticstics latch",                                                        
"KFM allocation",                                                               
"KFMD SGA",                                                                     
"ASM network background latch",                                                 
"ASM network SGA latch",                                                        
"ASM network state latch",                                                      
"ASM rcl group latch",                                                          
"ASM remote client latch",                                                      
"ASM db client latch",                                                          
"ASM Clusterware clients latch ",                                               
"ASM file locked extent latch",                                                 
"ASM scan context latch",                                                       
"ASM connection state latch",                                                   
"ASM network group sga latch",                                                  
"SR segment reuse latch",                                                       
"ASM DiskGroup access Mode latch",                                              
"ASM file allocation latch",                                                    
"KFR redo allocation latch",                                                    
"ASM rollback operations",                                                      
"KFIAS top latch",                                                              
"KFIAS fast latch",                                                             
"KFIAS queue latch",                                                            
"KFIAS cluster latch",                                                          
"KFIAS node latch",                                                             
"KFIAS client latch",                                                           
"KFIAS process latch",                                                          
"KFIAS endpoint latch",                                                         
"KFCL LE Freelist",                                                             
"KFCL Instance Latch",                                                          
"KFCL BX Freelist",                                                             
"ASM attribute latch",                                                          
"ASM staleness latch",                                                          
"ASM Volume process latch",                                                     
"ASM Volume extent lock list",                                                  
"ASM Volume SGA latch",                                                         
"ASM user latch",                                                               
"ASM KFFD SO Latch",                                                            
"ASM Scrubbing background process latch",                                       
"KFDVA SGA Latch",                                                              
"KFDVA vaL Cache Latch",                                                        
"server alert latch",                                                           
"generalized trace enabling latch",                                             
"Autotask management",                                                          
"MMON per PDB bit map latch",                                                   
"statistics aggregation",                                                       
"AWR Alerted Metric Element list",                                              
"threshold alerts latch",                                                       
"WCR: kecu cas mem",                                                            
"WCR: kecr File Count",                                                         
"WCR: MMON Create dir",                                                         
"WCR: ticker cache",                                                            
"WCR: sync",                                                                    
"WCR: processes HT",                                                            
"WCR: MTS VC queue",                                                            
"kexsv SC latch",                                                               
"kexsvus latch",                                                                
"Real-time descriptor latch",                                                   
"DBOP Monitoring latch",                                                        
"Active DBOP List latch",                                                       
"Report Request struct latch",                                                  
"Report Request stats latch",                                                   
"keiut hash table modification",                                                
"SPA Slave Task Context Latch",                                                 
"JS broadcast add buf latch",                                                   
"JS broadcast drop buf latch",                                                  
"JS broadcast kill buf latch",                                                  
"JS broadcast load blnc latch",                                                 
"JS broadcast autostart latch",                                                 
"JS broadcast LW Job latch",                                                    
"JS mem alloc latch",                                                           
"JS global state obj latch",                                                    
"JS slv state obj latch",                                                       
"JS queue state obj latch",                                                     
"JS queue access latch",                                                        
"JS Sh mem access",                                                             
"Sched InMem Job Cache",                                                        
"Sched IM Job latch",                                                           
"jslv pdb context latch",                                                       
"JS recent failure latch",                                                      
"PL/SQL warning settings",                                                      
"dbkpls swphs latch",                                                           
"periodic dump event callbacks",                                                
"dbkea msgq latch",                                                             
"KXDAM sga state latch",                                                        
"KXDBIO latch",                                                                 
"PDB SGA Operation Latch",                                                      
"PDB SGA accounting Latch",                                                     
"PDB Hash Table Latch",                                                         
"CDB Service Hash Table Latch",                                                 
"gsm instance stat",                                                            
"read or modify gwm sga variables",                                             
"RLB latch",                                                                    
"gsm region list letch",                                                        
"gsm Service Per Region list letch",                                            
"spare latch 1",                                                                
"spare latch 2",                                                                
"Sharding general allocation latch",                                            
"chunk list latch",                                                             
"shardgroup list latch",                                                        
"gws:Sharding global descriptor latch",                                         
 "" };                                                                          
char event[][100]={                                                             
"null event",                                                                   
"logout restrictor",                                                            
"VKTM Logical Idle Wait",                                                       
"VKTM Init Wait for GSGA",                                                      
"IORM Scheduler Slave Idle Wait",                                               
"acknowledge over PGA limit",                                                   
"Parameter File I/O",                                                           
"rdbms ipc message",                                                            
"remote db operation",                                                          
"remote db file read",                                                          
"remote db file write",                                                         
"io done",                                                                      
"i/o slave wait",                                                               
"RMAN Disk slave I/O",                                                          
"RMAN Tape slave I/O",                                                          
"DBWR slave I/O",                                                               
"LGWR slave I/O",                                                               
"Archiver slave I/O",                                                           
"Disk file operations I/O",                                                     
"Disk file I/O Calibration",                                                    
"Disk file Mirror Read",                                                        
"Disk file Mirror/Media Repair Write",                                          
"direct path sync",                                                             
"Clonedb bitmap file write",                                                    
"Datapump dump file I/O",                                                       
"dbms_file_transfer I/O",                                                       
"DG Broker configuration file I/O",                                             
"Data file init write",                                                         
"Log file init write",                                                          
"Log archive I/O",                                                              
"RMAN backup & recovery I/O",                                                   
"RMAN lost write reread",                                                       
"Standby redo I/O",                                                             
"Network file transfer",                                                        
"Pluggable Database file copy",                                                 
"File Copy",                                                                    
"Backup: MML initialization",                                                   
"Backup: MML v1 open backup piece",                                             
"Backup: MML v1 read backup piece",                                             
"Backup: MML v1 write backup piece",                                            
"Backup: MML v1 close backup piece",                                            
"Backup: MML v1 query backup piece",                                            
"Backup: MML v1 delete backup piece",                                           
"Backup: MML create a backup piece",                                            
"Backup: MML commit backup piece",                                              
"Backup: MML command to channel",                                               
"Backup: MML shutdown",                                                         
"Backup: MML obtain textual error",                                             
"Backup: MML query backup piece",                                               
"Backup: MML extended initialization",                                          
"Backup: MML read backup piece",                                                
"Backup: MML delete backup piece",                                              
"Backup: MML restore backup piece",                                             
"Backup: MML write backup piece",                                               
"Backup: MML proxy initialize backup",                                          
"Backup: MML proxy cancel",                                                     
"Backup: MML proxy commit backup piece",                                        
"Backup: MML proxy session end",                                                
"Backup: MML datafile proxy backup?",                                           
"Backup: MML datafile proxy restore?",                                          
"Backup: MML proxy initialize restore",                                         
"Backup: MML proxy start data movement",                                        
"Backup: MML data movement done?",                                              
"Backup: MML proxy prepare to start",                                           
"Backup: MML obtain a direct buffer",                                           
"Backup: MML release a direct buffer",                                          
"Backup: MML get base address",                                                 
"Backup: MML query for direct buffers",                                         
"OFS Receive Queue",                                                            
"OFS operation completion",                                                     
"OFS idle",                                                                     
"VKRM Idle",                                                                    
"resmgr: redo throttle",                                                        
"wait for unread message on broadcast channel",                                 
"wait for unread message on multiple broadcast channels",                       
"class slave wait",                                                             
"RMA: IPC0 completion sync",                                                    
"IPC group service call",                                                       
"PING",                                                                         
"Service operation completion",                                                 
"service monitor: inst recovery completion",                                    
"watchdog main loop",                                                           
"process in prespawned state",                                                  
"BA: Performance API",                                                          
"File Repopulation Write",                                                      
"pmon timer",                                                                   
"pman timer",                                                                   
"latch: MGA shared context root latch",                                         
"latch: MGA shared context latch",                                              
"latch: MGA heap latch",                                                        
"latch: MGA pid alloc latch",                                                   
"latch: MGA asr alloc latch",                                                   
"DNFS disp IO slave idle",                                                      
"DIAG idle wait",                                                               
"ges remote message",                                                           
"enq: RI - Reader Farm SQL Isolation",                                          
"SCM slave idle",                                                               
"LMS CR slave timer",                                                           
"gcs remote message",                                                           
"gcs yield cpu",                                                                
"heartbeat monitor sleep",                                                      
"GCR sleep",                                                                    
"PBR logfile IO",                                                               
"PBR logfile block write",                                                      
"SGA: MMAN sleep for component shrink",                                         
"retry contact SCN lock master",                                                
"control file sequential read",                                                 
"control file single write",                                                    
"control file parallel write",                                                  
"control file backup creation",                                                 
"Shared IO Pool Memory",                                                        
"Shared IO Pool IO Completion",                                                 
"enq: PW - flush prewarm buffers",                                              
"latch: cache buffers chains",                                                  
"free buffer waits",                                                            
"local write wait",                                                             
"checkpoint completed",                                                         
"write complete waits",                                                         
"write complete waits: flash cache",                                            
"buffer read retry",                                                            
"buffer busy waits",                                                            
"gc buffer busy acquire",                                                       
"gc buffer busy release",                                                       
"read by other session",                                                        
"multiple dbwriter suspend/resume for file offline",                            
"recovery read",                                                                
"pi renounce write complete",                                                   
"db flash cache single block physical read",                                    
"db flash cache multiblock physical read",                                      
"db flash cache write",                                                         
"db flash cache invalidate wait",                                               
"db flash cache dynamic disabling wait",                                        
"remote log force - commit",                                                    
"remote log force - buffer update",                                             
"remote log force - buffer read",                                               
"remote log force - SCN range",                                                 
"remote log force - session cleanout",                                          
"DBWR timer",                                                                   
"enq: RO - contention",                                                         
"enq: RO - fast object reuse",                                                  
"enq: KO - fast object checkpoint",                                             
"Data Guard network buffer stall reap",                                         
"Data Guard: Gap Manager",                                                      
"Data Guard: controlfile update",                                               
"MRP redo arrival",                                                             
"RFS sequential i/o",                                                           
"RFS random i/o",                                                               
"RFS write",                                                                    
"Data Guard: Timer",                                                            
"ARCH wait for net re-connect",                                                 
"ARCH wait for netserver start",                                                
"LNS wait on LGWR",                                                             
"LGWR wait on LNS",                                                             
"ARCH wait for netserver init 2",                                               
"ARCH wait for flow-control",                                                   
"ARCH wait for netserver detach",                                               
"LNS ASYNC archive log",                                                        
"LNS ASYNC dest activation",                                                    
"LNS ASYNC end of log",                                                         
"log file sequential read",                                                     
"log file single write",                                                        
"log file parallel write",                                                      
"log file pmem persist write",                                                  
"log file pmem persist read",                                                   
"latch: redo writing",                                                          
"latch: redo copy",                                                             
"log buffer space",                                                             
"log file switch (checkpoint incomplete)",                                      
"log file switch (private strand flush incomplete)",                            
"log file switch (archiving needed)",                                           
"switch logfile command",                                                       
"log file switch completion",                                                   
"log file sync",                                                                
"log file sync: SCN ordering",                                                  
"simulated log write delay",                                                    
"heartbeat redo informer",                                                      
"LGWR real time apply sync",                                                    
"LGWR worker group idle",                                                       
"remote log force - log switch/recovery",                                       
"db file sequential read",                                                      
"db file scattered read",                                                       
"db file single write",                                                         
"db file parallel write",                                                       
"db file async I/O submit",                                                     
"db file parallel read",                                                        
"enq: MV - datafile move",                                                      
"gc current request",                                                           
"gc cr request",                                                                
"gc cr disk request",                                                           
"gc cr multi block request",                                                    
"gc cr multi block mixed",                                                      
"gc cr multi block grant",                                                      
"gc current multi block request",                                               
"gc block recovery request",                                                    
"gc imc multi block request",                                                   
"gc imc multi block quiesce",                                                   
"gc cr block remote read",                                                      
"gc cr block 2-way",                                                            
"gc cr block 3-way",                                                            
"gc cr block busy",                                                             
"gc cr block congested",                                                        
"gc cr failure",                                                                
"gc cr block lost",                                                             
"gc current block 2-way",                                                       
"gc current block 3-way",                                                       
"gc current block busy",                                                        
"gc current block congested",                                                   
"gc current retry",                                                             
"gc current block lost",                                                        
"gc current split",                                                             
"gc cr grant 2-way",                                                            
"gc cr grant 3-way",                                                            
"gc cr grant busy",                                                             
"gc cr grant congested",                                                        
"gc cr disk read",                                                              
"gc cr grant ka",                                                               
"gc cr grant cluster flash cache read",                                         
"gc cr cluster flash cache read",                                               
"gc cr flash cache copy",                                                       
"gc cr grant read-mostly invalidation",                                         
"gc cr grant read-only instance invalidation",                                  
"gc current grant 2-way",                                                       
"gc current grant 3-way",                                                       
"gc current grant busy",                                                        
"gc current grant congested",                                                   
"gc current grant ka",                                                          
"gc current grant cluster flash cache read",                                    
"gc current grant read-mostly invalidation",                                    
"gc current grant read-only instance invalidation",                             
"gc transaction table",                                                         
"gc index operation",                                                           
"gc freelist",                                                                  
"gc remaster",                                                                  
"gc quiesce",                                                                   
"gc recovery",                                                                  
"gc flushed buffer",                                                            
"gc send complete",                                                             
"gc current cancel",                                                            
"gc cr cancel",                                                                 
"gc assume",                                                                    
"gc current index split",                                                       
"gc domain validation",                                                         
"gc recovery free",                                                             
"gc recovery quiesce",                                                          
"gc claim",                                                                     
"gc cancel retry",                                                              
"direct path read",                                                             
"direct path read temp",                                                        
"direct path write",                                                            
"direct path write temp",                                                       
"datafile pre-create",                                                          
"parallel recovery slave idle wait",                                            
"Backup Appliance waiting for work",                                            
"Backup Appliance waiting restore start",                                       
"Backup Appliance Surrogate wait",                                              
"Backup Appliance Servlet wait",                                                
"Backup Appliance Comm SGA setup wait",                                         
"LogMiner builder: idle",                                                       
"LogMiner builder: memory",                                                     
"LogMiner builder: DDL",                                                        
"LogMiner builder: branch",                                                     
"LogMiner preparer: idle",                                                      
"LogMiner preparer: memory",                                                    
"LogMiner reader: buffer",                                                      
"LogMiner reader: log (idle)",                                                  
"LogMiner reader: redo (idle)",                                                 
"LogMiner merger: idle",                                                        
"LogMiner client: transaction",                                                 
"LogMiner: other",                                                              
"LogMiner: activate",                                                           
"LogMiner: reset",                                                              
"LogMiner: find session",                                                       
"LogMiner: internal",                                                           
"Logical Standby Apply Delay",                                                  
"wait for possible quiesce finish",                                             
"parallel recovery coordinator waits for slave cleanup",                        
"flashback log file write",                                                     
"flashback log file read",                                                      
"flashback buf free by RVWR",                                                   
"flashback log file sync",                                                      
"parallel recovery coordinator idle wait",                                      
"parallel recovery control message reply",                                      
"cell smart table scan",                                                        
"cell smart index scan",                                                        
"cell external table smart scan",                                               
"cell statistics gather",                                                       
"cell smart incremental backup",                                                
"cell smart file creation",                                                     
"cell smart restore from backup",                                               
"parallel recovery slave next change",                                          
"concurrent I/O completion",                                                    
"datafile copy range completion",                                               
"nologging fetch slave idle",                                                   
"Nologging standby progress",                                                   
"nologging standby txn commit",                                                 
"nologging range consumption list",                                             
"recovery sender idle",                                                         
"recovery receiver idle",                                                       
"recovery coordinator idle",                                                    
"recovery logmerger idle",                                                      
"block compare coord process idle",                                             
"enq: TM - contention",                                                         
"enq: ST - contention",                                                         
"undo segment extension",                                                       
"undo segment tx slot",                                                         
"switch undo - offline",                                                        
"alter rbs offline",                                                            
"enq: TX - row lock contention",                                                
"enq: TX - allocate ITL entry",                                                 
"enq: TX - index contention",                                                   
"enq: TW - contention",                                                         
"PX Deq: Txn Recovery Start",                                                   
"PX Deq: Txn Recovery Reply",                                                   
"latch: Undo Hint Latch",                                                       
"statement suspended, wait error to be cleared",                                
"latch: In memory undo latch",                                                  
"latch: MQL Tracking Latch",                                                    
"fbar timer",                                                                   
"Archive Manager file transfer I/O",                                            
"SecureFile log buffer",                                                        
"IM buffer busy",                                                               
"IM buffer busy TXN",                                                           
"IM buffer busy SHR",                                                           
"securefile chain update",                                                      
"enq: HW - contention",                                                         
"enq: BE - Critical Block Allocation",                                          
"enq: SS - contention",                                                         
"sort segment request",                                                         
"smon timer",                                                                   
"PX Deq: Metadata Update",                                                      
"Space Manager: slave idle wait",                                               
"enq: SQ - contention",                                                         
"enq: SV -  contention",                                                        
"PX Deq: Index Merge Reply",                                                    
"PX Deq: Index Merge Execute",                                                  
"PX Deq: Index Merge Close",                                                    
"enq: HV - contention",                                                         
"PX Deq: kdcph_mai",                                                            
"PX Deq: kdcphc_ack",                                                           
"index (re)build online start",                                                 
"index (re)build online cleanup",                                               
"index (re)build online merge",                                                 
"index (re)build lock or pin object",                                           
"securefile direct-read completion",                                            
"securefile direct-write completion",                                           
"SecureFile mutex",                                                             
"enq: WG - lock fso",                                                           
"imco timer",                                                                   
"Inmemory Populate: get loadscn",                                               
"IMFS defer writes scheduler",                                                  
"memoptimize write buffer get",                                                 
"memoptimize write drain idle",                                                 
"latch: row cache objects",                                                     
"row cache mutex",                                                              
"row cache lock",                                                               
"row cache read",                                                               
"libcache interrupt action by LCK",                                             
"enq: IV - cross instance invalidation",                                        
"cursor: mutex X",                                                              
"cursor: mutex S",                                                              
"cursor: pin X",                                                                
"cursor: pin S",                                                                
"cursor: pin S wait on X",                                                      
"enq: CB - role operation",                                                     
"Global transaction acquire instance locks",                                    
"enq: BB - 2PC across RAC instances",                                           
"latch: shared pool",                                                           
"LCK0 row cache object free",                                                   
"Unpin a recreatable chunk",                                                    
"library cache pin",                                                            
"library cache lock",                                                           
"library cache load lock",                                                      
"library cache: mutex X",                                                       
"library cache: bucket mutex X",                                                
"library cache: dependency mutex X",                                            
"library cache: mutex S",                                                       
"BFILE read",                                                                   
"resmgr:cpu quantum",                                                           
"resmgr:large I/O queued",                                                      
"resmgr: I/O rate limit",                                                       
"resmgr:internal state change",                                                 
"resmgr:sessions to exit",                                                      
"resmgr:become active",                                                         
"resmgr:pq queued",                                                             
"TCP Socket (KGAS)",                                                            
"utl_file I/O",                                                                 
"DNFS disp IO slave completion",                                                
"alter system set dispatcher",                                                  
"virtual circuit wait",                                                         
"virtual circuit next request",                                                 
"shared server idle wait",                                                      
"dispatcher timer",                                                             
"dispatcher listen timer",                                                      
"dedicated server timer",                                                       
"cmon timer",                                                                   
"pool server timer",                                                            
"connection pool wait",                                                         
"connection broker handoff",                                                    
"lreg timer",                                                                   
"JOX Jit Process Sleep",                                                        
"jobq slave wait",                                                              
"Wait for Table Lock",                                                          
"pipe get",                                                                     
"pipe put",                                                                     
"enq: DB - contention",                                                         
"PX Deque wait",                                                                
"PX Idle Wait",                                                                 
"PX Deq Credit: need buffer",                                                   
"PX Deq Credit: send blkd",                                                     
"PX Deq: Msg Fragment",                                                         
"PX Deq: Parse Reply",                                                          
"PX Deq: Execute Reply",                                                        
"PX Deq: Execution Msg",                                                        
"PX Deq: Table Q Normal",                                                       
"PX Deq: Table Q Sample",                                                       
"enq: TG - IMCDT global resource",                                              
"enq: TI - IMCDT object HT",                                                    
"external table read",                                                          
"external table write",                                                         
"external table open",                                                          
"external table seek",                                                          
"external table misc IO",                                                       
"enq: RC - Result Cache: Contention",                                           
"result cache lock wait",                                                       
"enq: JX - SQL statement queue",                                                
"enq: JX - cleanup of  queue",                                                  
"PX Queuing: statement queue",                                                  
"enq: KV - IMA key vector access",                                              
"dbverify reads",                                                               
"REPL Apply: txns",                                                             
"REPL Capture: subscribers to catch up",                                        
"REPL Capture/Apply: memory",                                                   
"REPL Apply: commit",                                                           
"REPL Apply: dependency",                                                       
"REPL Capture/Apply: flow control",                                             
"REPL Capture/Apply: messages",                                                 
"REPL Capture: archive log",                                                    
"REPL Capture: filter callback ruleset",                                        
"REPL Apply: apply DDL",                                                        
"enq: ZG - contention",                                                         
"single-task message",                                                          
"SQL*Net message to client",                                                    
"SQL*Net message to dblink",                                                    
"SQL*Net more data to client",                                                  
"SQL*Net more data to dblink",                                                  
"SQL*Net message from client",                                                  
"SQL*Net more data from client",                                                
"SQL*Net message from dblink",                                                  
"SQL*Net more data from dblink",                                                
"SQL*Net vector message from client",                                           
"SQL*Net vector message from dblink",                                           
"SQL*Net vector data to client",                                                
"SQL*Net vector data from client",                                              
"SQL*Net vector data to dblink",                                                
"SQL*Net vector data from dblink",                                              
"SQL*Net break/reset to client",                                                
"SQL*Net break/reset to dblink",                                                
"External Procedure initial connection",                                        
"External Procedure call",                                                      
"PL/SQL lock timer",                                                            
"wait for EMON to process ntfns",                                               
"Streams AQ: emn coordinator idle wait",                                        
"EMON slave idle wait",                                                         
"Emon coordinator main loop",                                                   
"Emon slave main loop",                                                         
"enq: UL - contention",                                                         
"Streams AQ: waiting for messages in the queue",                                
"Streams AQ: waiting for time management or cleanup tasks",                     
"Streams AQ: enqueue blocked on low memory",                                    
"Streams AQ: enqueue blocked due to flow control",                              
"Streams AQ: delete acknowledged messages",                                     
"Streams AQ: deallocate messages from Streams Pool",                            
"Streams AQ: qmn coordinator idle wait",                                        
"Streams AQ: qmn slave idle wait",                                              
"AQ: 12c message cache init wait",                                              
"AQ Cross Master idle",                                                         
"AQPC idle",                                                                    
"Streams AQ: load balancer idle",                                               
"Sharded  Queues : Part Maintenance idle",                                      
"Sharded  Queues : Part Truncate idle",                                         
"REPL Capture/Apply: RAC AQ qmn coordinator",                                   
"Streams AQ: opt idle",                                                         
"HS message to agent",                                                          
"TEXT: URL_DATASTORE network wait",                                             
"TEXT: File System I/O",                                                        
"OLAP DML Sleep",                                                               
"Cube Build Master Wait for Jobs",                                              
"ASM sync cache disk read",                                                     
"ASM sync relocation I/O",                                                      
"ASM async relocation I/O",                                                     
"ASM COD rollback operation completion",                                        
"kfk: async disk IO",                                                           
"ASM IO for non-blocking poll",                                                 
"ASM remote SQL",                                                               
"ASM background timer",                                                         
"ASM cluster membership changes",                                               
"iowp io",                                                                      
"iowp msg",                                                                     
"iowp file id",                                                                 
"netp network",                                                                 
"gopp msg",                                                                     
"ASM Fixed Package I/O",                                                        
"ASM mount : wait for heartbeat",                                               
"ASM PST query : wait for [PM][grp][0] grant",                                  
"lock remastering",                                                             
"ASM Staleness File I/O",                                                       
"ASM File Group Sync",                                                          
"auto-sqltune: wait graph update",                                              
"WCR: replay client notify",                                                    
"WCR: replay clock",                                                            
"WCR: replay lock order",                                                       
"WCR: replay paused",                                                           
"JS kgl get object wait",                                                       
"JS external job",                                                              
"JS kill job wait",                                                             
"JS coord start wait",                                                          
"cell single block physical read",                                              
"cell multiblock physical read",                                                
"cell list of blocks physical read",                                            
"cell physical read no I/O",                                                    
"cell single block read request",                                               
"cell multiblock read request",                                                 
"cell list of blocks read request",                                             
"cell manager opening cell",                                                    
"cell manager closing cell",                                                    
"cell manager discovering disks",                                               
"cell worker idle",                                                             
"events in waitclass Other",                                                    
"enq: WM - WLM Plan activation",                                                
"latch free",                                                                   
"latch activity",                                                               
"wait list latch free",                                                         
"kslwait unit test event 1",                                                    
"kslwait unit test event 2",                                                    
"kslwait unit test event 3",                                                    
"unspecified wait event",                                                       
"global enqueue expand wait",                                                   
"free process state object",                                                    
"inactive session",                                                             
"process terminate",                                                            
"latch: call allocation",                                                       
"latch: session allocation",                                                    
"check CPU wait times",                                                         
"ADG switchover completion",                                                    
"process allocation slot",                                                      
"session allocation inc count",                                                 
"enq: CI - contention",                                                         
"enq: PR - contention",                                                         
"enq: AK -  contention",                                                        
"enq: XK -  contention",                                                        
"enq: DI -  contention",                                                        
"enq: RM -  contention",                                                        
"enq: BO -  contention",                                                        
"ges resource enqueue open retry sleep",                                        
"ksim generic wait event",                                                      
"enq: DE - Update Draining Test",                                               
"debugger command",                                                             
"oradebug request slot",                                                        
"oradebug request completion",                                                  
"latch: ksm sga alloc latch",                                                   
"defer SGA allocation slave",                                                   
"SGA Allocator termination",                                                    
"PGA memory operation",                                                         
"enq: PE - contention",                                                         
"enq: PG - contention",                                                         
"ksbsrv",                                                                       
"ksbcic",                                                                       
"process startup",                                                              
"process shutdown",                                                             
"prior spawner clean up",                                                       
"latch: messages",                                                              
"rdbms ipc message block",                                                      
"rdbms ipc reply",                                                              
"latch: pdb enqueue hash chains",                                               
"latch: enqueue hash chains",                                                   
"imm op",                                                                       
"slave exit",                                                                   
"enq: FP - global fob contention",                                              
"enq: RE - block repair contention",                                            
"enq: BM - clonedb bitmap file write",                                          
"asynch descriptor resize",                                                     
"OFS interrupted req not found",                                                
"enq: FO - file system operation contention",                                   
"resmgr:plan change",                                                           
"enq: KM - contention",                                                         
"enq: KT - contention",                                                         
"enq: CA - contention",                                                         
"enq: KD - determine DBRM master",                                              
"reliable message",                                                             
"broadcast mesg queue transition",                                              
"broadcast mesg recovery queue transition",                                     
"KSV master wait",                                                              
"master exit",                                                                  
"ksv slave avail wait",                                                         
"enq: PV - syncstart",                                                          
"enq: PV - syncshut",                                                           
"enq: SP - contention 1",                                                       
"enq: SP - contention 2",                                                       
"enq: SP - contention 3",                                                       
"enq: SP - contention 4",                                                       
"enq: SX - contention 5",                                                       
"enq: SX - contention 6",                                                       
"first spare wait event",                                                       
"second spare wait event",                                                      
"Memory: Reg/Dereg",                                                            
"IPC send completion sync",                                                     
"OSD IPC library",                                                              
"IPC wait for name service busy",                                               
"IPC busy async request",                                                       
"IPC waiting for OSD resources",                                                
"ksxr poll remote instances",                                                   
"ksxr wait for mount shared",                                                   
"DBMS_LDAP: LDAP operation ",                                                   
"wait for FMON to come up",                                                     
"enq: FM - contention",                                                         
"enq: XY - contention",                                                         
"latch: active service list",                                                   
"latch: service drain list",                                                    
"latch: last service list",                                                     
"latch: java patching",                                                         
"enq: AS - service activation",                                                 
"JAVA patching",                                                                
"enq: PD - contention",                                                         
"oracle thread bootstrap",                                                      
"os thread creation",                                                           
"cleanup of aborted process",                                                   
"enq: XM -  contention",                                                        
"enq: RU - contention",                                                         
"enq: RU - waiting",                                                            
"rolling migration: cluster quiesce",                                           
"LMON global data update",                                                      
"rolling migration: orphans detected",                                          
"process diagnostic dump",                                                      
"enq: MX - sync storage server info",                                           
"master diskmon startup",                                                       
"master diskmon read",                                                          
"DSKM to complete cell health check",                                           
"pmon dblkr tst event",                                                         
"latch: ksolt lwth alloc",                                                      
"lightweight thread operation",                                                 
"lightweight thread task completion",                                           
"enq: WN - rw snapshot synchronization",                                        
"read/write snapshot completion",                                               
"enq: ZX - repopulation file write",                                            
"pmon cleanup",                                                                 
"pmon shutdown",                                                                
"GL: cross instance latch free",                                                
"RMA: rlog allocate",                                                           
"RMA: RAC reconfig",                                                            
"RMA: latch",                                                                   
"DNFS disp IO slave cleanup",                                                   
"enq: KA - ACL control status",                                                 
"Nest operation",                                                               
"DIAG lock acquisition",                                                        
"latch: ges resource hash list",                                                
"DFS lock handle",                                                              
"ges server process to shutdown",                                               
"ges client process to exit",                                                   
"ges global resource directory to be frozen",                                   
"ges resource directory to be unfrozen",                                        
"gcs resource directory to be unfrozen",                                        
"ges LMD to inherit communication channels",                                    
"ges lmd sync during reconfig",                                                 
"ges wait for lmon to be ready",                                                
"ges cgs registration",                                                         
"wait for master scn",                                                          
"ges yield cpu in reconfig",                                                    
"ges2 proc latch in rm latch get 1",                                            
"ges2 proc latch in rm latch get 2",                                            
"ges lmd/lmses to freeze in rcfg",                                              
"ges lmd/lmses to unfreeze in rcfg",                                            
"ges lms sync during dynamic remastering and reconfig",                         
"ges LMON to join CGS group",                                                   
"ges pmon to exit",                                                             
"ges lmd and pmon to attach",                                                   
"gcs drm freeze begin",                                                         
"gcs retry nowait latch get",                                                   
"gcs remastering wait for read latch",                                          
"ges cached resource cleanup",                                                  
"ges generic event",                                                            
"ges instance reconfig name entry query",                                       
"ges process with outstanding i/o",                                             
"ges user error",                                                               
"ges enter server mode",                                                        
"gcs enter server mode",                                                        
"ges ipc enter server mode",                                                    
"gcs drm freeze in enter server mode",                                          
"gcs ddet enter server mode",                                                   
"ges cancel",                                                                   
"ges resource cleanout during enqueue open",                                    
"ges resource cleanout during enqueue open-cvt",                                
"ges master to get established for SCN op",                                     
"ges LMON to get to FTDONE ",                                                   
"ges1 LMON to wake up LMD - mrcvr",                                             
"ges2 LMON to wake up LMD - mrcvr",                                             
"ges2 LMON to wake up lms - mrcvr 2",                                           
"ges2 LMON to wake up lms - mrcvr 3",                                           
"ges inquiry response",                                                         
"ges reusing os pid",                                                           
"ges LMON for send queues",                                                     
"ges LMD suspend for testing event",                                            
"ges performance test completion",                                              
"kjbopen wait for recovery domain attach",                                      
"kjudomatt wait for recovery domain attach",                                    
"kjudomdet wait for recovery domain detach",                                    
"kjbdomalc allocate recovery domain - retry",                                   
"kjbdrmcvtq lmon drm quiesce: ping completion",                                 
"ges RMS0 retry add redo log",                                                  
"readable standby redo apply remastering",                                      
"ges DFS hang analysis phase 2 acks",                                           
"ges/gcs diag dump",                                                            
"global plug and play automatic resource creation",                             
"gcs lmon dirtydetach step completion",                                         
"recovery instance recovery completion",                                        
"ack for a broadcasted res from a remote instance",                             
"kill all read-only instances in cluster",                                      
"latch: kjci process context latch",                                            
"latch: kjci request sequence latch",                                           
"DLM cross inst call completion",                                               
"DLM: shared instance mode init",                                               
"enq: KI - contention",                                                         
"latch: kjoeq omni enqueue hash bucket latch",                                  
"DLM enqueue copy completion",                                                  
"latch: kjoer owner hash bucket",                                               
"DLM Omni Enq Owner replication",                                               
"KJC: Wait for msg sends to complete",                                          
"ges message buffer allocation",                                                
"kjctssqmg: quick message send wait",                                           
"gcs domain validation",                                                        
"latch: gcs resource hash",                                                     
"affinity expansion in replay",                                                 
"wait for sync ack",                                                            
"wait for verification ack",                                                    
"wait for assert messages to be sent",                                          
"wait for scn ack",                                                             
"lms flush message acks",                                                       
"name-service call wait",                                                       
"CGS wait for IPC msg",                                                         
"IMR hang simulation",                                                          
"IMR mount phase II completion",                                                
"IMR disk votes",                                                               
"IMR rr lock release",                                                          
"IMR net-check message ack",                                                    
"IMR rr update",                                                                
"IMR membership resolution",                                                    
"IMR CSS join retry",                                                           
"IMR slave process init",                                                       
"IMR slave process shutdown",                                                   
"IMR slave acknowledgement msg",                                                
"CGS skgxn join retry",                                                         
"CGS ping operation",                                                           
"gcs to be enabled",                                                            
"gcs log flush sync",                                                           
"KA: shared KGA not initialized",                                               
"enq: PP -  contention",                                                        
"enq: HM -  contention",                                                        
"GCR ctx lock acquisition",                                                     
"GCR CSS group lock",                                                           
"GCR CSS group join",                                                           
"GCR CSS group leave",                                                          
"GCR CSS group update",                                                         
"GCR CSS group query",                                                          
"enq: AC - acquiring partition id",                                             
"LMA glob lock acquisition",                                                    
"LMA KGA glob lock acquisition",                                                
"latch: GCS logfile block",                                                     
"latch: GCS logfile write queue",                                               
"LMFC reconfig operation",                                                      
"PCFC: recovery domain valid",                                                  
"SGA: allocation forcing component growth",                                     
"SGA: sga_target resize",                                                       
"enq: SC -  contention",                                                        
"control file heartbeat",                                                       
"control file diagnostic dump",                                                 
"enq: CF - contention",                                                         
"enq: SW - contention",                                                         
"enq: DS - contention",                                                         
"enq: TC - contention",                                                         
"enq: TC - contention2",                                                        
"buffer exterminate",                                                           
"kcbw: cache protect wait",                                                     
"latch: cache buffers lru chain",                                               
"enq: PW - perwarm status in dbw0",                                             
"latch: checkpoint queue latch",                                                
"latch: cache buffer handles",                                                  
"kcbzps",                                                                       
"DBWR range invalidation sync",                                                 
"buffer deadlock",                                                              
"buffer latch",                                                                 
"cr request retry",                                                             
"influx scn",                                                                   
"writes stopped by instance recovery or database suspension",                   
"lock escalate retry",                                                          
"lock deadlock retry",                                                          
"prefetch warmup block being transferred",                                      
"recovery buffer pinned",                                                       
"tablespace key change",                                                        
"TSE SSO wallet reopen",                                                        
"force-cr-override flush",                                                      
"enq: CR - block range reuse ckpt",                                             
"enq: TR - serialize TS rekeys",                                                
"enq: TR - database key open check",                                            
"enq: TR - serialize system rekeys",                                            
"wait for MTTR advisory state object",                                          
"latch: object queue header operation",                                         
"enq: BU - recovery set construct",                                             
"enq: BU - recovery set takeover",                                              
"retry CFTXN during close",                                                     
"get branch/thread/sequence enqueue",                                           
"enq: WL - Test access/locking",                                                
"Data Guard server operation completion",                                       
"FAL archive wait 1 sec for REOPEN minimum",                                    
"TEST: action sync",                                                            
"TEST: action hang",                                                            
"RSGA: RAC reconfiguration",                                                    
"enq: WL - RAC-wide SGA initialize",                                            
"enq: WL - RAC-wide SGA write",                                                 
"enq: WL - RAC-wide SGA dump",                                                  
"MRP stop",                                                                     
"enq: SA - standby redo logfiles",                                              
"enq: WS -  contention",                                                        
"MRP wait on process start",                                                    
"MRP wait on process restart",                                                  
"MRP wait on startup clear",                                                    
"MRP inactivation",                                                             
"MRP wait on archivelog arrival",                                               
"MRP wait on archivelog archival",                                              
"enq: WL - Far Sync Fail Over",                                                 
"enq: SA - MRP SRL access",                                                     
"Monitor testing",                                                              
"enq: WL - redo_db table update",                                               
"enq: WL - redo_log table update",                                              
"log switch/archive",                                                           
"enq: WL - Switchover To Primary",                                              
"ARCH wait on c/f tx acquire 1",                                                
"RFS attach",                                                                   
"RFS create",                                                                   
"RFS close",                                                                    
"RFS announce",                                                                 
"RFS register",                                                                 
"RFS detach",                                                                   
"RFS ping",                                                                     
"RFS dispatch",                                                                 
"enq: WL - RFS global state contention",                                        
"enq: WL - SNA access/locking",                                                 
"LGWR simulation latency wait",                                                 
"LNS simulation latency wait",                                                  
"ASYNC Remote Write",                                                           
"SYNC Remote Write",                                                            
"ARCH Remote Write",                                                            
"Redo Transport Attach",                                                        
"Redo Transport Detach",                                                        
"Redo Transport Open",                                                          
"Redo Transport Close",                                                         
"Redo Transport Ping",                                                          
"Remote SYNC Ping",                                                             
"Redo Transport Slave Startup",                                                 
"Redo Transport Slave Shutdown",                                                
"Redo Writer Remote Sync Notify",                                               
"Redo Writer Remote Sync Complete",                                             
"Redo Transport MISC",                                                          
"Redo Transport Network Throttle",                                              
"enq: WL - Network Throttle",                                                   
"LGWR-LNS wait on channel",                                                     
"enq: WR - contention",                                                         
"Data Guard: rtrt work",                                                        
"Redo transport testing",                                                       
"enq: RZ - add element",                                                        
"enq: RZ - remove element",                                                     
"Image redo gen delay",                                                         
"Long operation CF pause",                                                      
"LGWR wait for redo copy",                                                      
"latch: redo allocation",                                                       
"log file switch (clearing log file)",                                          
"log file sync: PDB shutdown abort",                                            
"target log write size",                                                        
"LGWR any worker group",                                                        
"LGWR all worker groups",                                                       
"LGWR worker group ordering",                                                   
"LGWR intra group sync",                                                        
"LGWR intra group IO completion",                                               
"enq: WL - contention",                                                         
"enq: RN - contention",                                                         
"DFS db file lock",                                                             
"PDB close/open on another instance",                                           
"database open on read-write instance",                                         
"enq: DF - contention",                                                         
"enq: IS - contention",                                                         
"enq: IP - open/close PDB",                                                     
"enq: PX - PDB instance recovery",                                              
"enq: FS - contention",                                                         
"enq: FS - online log operation",                                               
"enq: DM - contention",                                                         
"enq: DM - access control",                                                     
"enq: RP - contention",                                                         
"latch: gc element",                                                            
"redo log switch request completion",                                           
"enq: RT - contention",                                                         
"enq: RT - thread internal enable/disable",                                     
"enq: IR - contention",                                                         
"enq: IR - contention2",                                                        
"enq: IR - global serialization",                                               
"enq: IR - local serialization",                                                
"enq: IR - arbitrate instance recovery",                                        
"enq: MR - contention",                                                         
"enq: MR - standby role transition",                                            
"enq: MR - multi instance redo apply",                                          
"enq: MR - any role transition",                                                
"enq: MR - PDB open",                                                           
"enq: MR - datafile online",                                                    
"enq: MR - adg instance recovery",                                              
"enq: MR - preplugin recovery",                                                 
"enq: MR - datafile pre-create",                                                
"shutdown after switchover to standby",                                         
"cancel media recovery on switchover",                                          
"PDB lock domain invalidation",                                                 
"Recovery: scn growth limit",                                                   
"parallel recovery coord wait for reply",                                       
"parallel recovery coord send blocked",                                         
"parallel recovery slave wait for change",                                      
"enq: BR - file shrink",                                                        
"enq: BR - proxy-copy",                                                         
"enq: BR - multi-section restore header",                                       
"enq: BR - multi-section restore section",                                      
"enq: BR - space info datafile hdr update",                                     
"enq: BR - request autobackup",                                                 
"enq: BR - perform autobackup",                                                 
"enq: BR - perform catalog recovery area",                                      
"enq: ID - contention",                                                         
"Backup Restore Throttle sleep",                                                
"Backup Restore Switch Bitmap sleep",                                           
"Backup Restore Event sleep",                                                   
"RMAN wallet access limit",                                                     
"enq: BS - Backup spare1",                                                      
"enq: BS - Backup spare2",                                                      
"enq: BS - Backup spare3",                                                      
"enq: BS - Backup spare4",                                                      
"enq: BS - Backup spare5",                                                      
"enq: BS - Backup spare6",                                                      
"enq: BS - Backup spare7",                                                      
"enq: BS - Backup spare8",                                                      
"enq: BS - Backup spare9",                                                      
"enq: BS - Backup spare0",                                                      
"enq: AB - ABMR process start/stop",                                            
"enq: AB - ABMR process initialized",                                           
"Auto BMR completion",                                                          
"Auto BMR RPC standby catchup",                                                 
"enq: ZR - ZDLRA lock db",                                                      
"enq: ZR - ZDLRA lock storage loc",                                             
"enq: ZR - ZDLRA lock timer queue",                                             
"enq: ZR - ZDLRA lock scheduler",                                               
"enq: ZR - ZDLRA lock API",                                                     
"enq: ZR - ZDLRA quiesce tasks ",                                               
"enq: ZR - ZDLRA check quiesce tasks",                                          
"enq: ZR - ZDLRA quiesce servlets",                                             
"enq: ZR - ZDLRA check servlet quiescence",                                     
"enq: ZR - ZDLRA serialize unregister db",                                      
"enq: ZR - ZDLRA run scheduler",                                                
"enq: ZR - ZDLRA purge storage loc",                                            
"enq: ZR - ZDLRA spare enq 10",                                                 
"enq: ZR - ZDLRA invalidate plans",                                             
"enq: ZR - ZDLRA protect plans",                                                
"enq: BC - drop container group",                                               
"enq: BC - create container",                                                   
"enq: BC - group - create container",                                           
"enq: BC - drop container",                                                     
"enq: BC - group - create file",                                                
"enq: BI - create file",                                                        
"enq: BI - identify file",                                                      
"enq: BI - delete file",                                                        
"enq: BZ - resize file",                                                        
"enq: BV - rebuild/validate group",                                             
"Backup Appliance container synchronous read",                                  
"Backup Appliance container synchronous write",                                 
"Backup Appliance container I/O",                                               
"Supplemental logging roles",                                                   
"LogMiner builder: queue full",                                                 
"LogMiner reader: redo slot",                                                   
"LogMiner reader: memory",                                                      
"LogMiner merger: redo slot",                                                   
"LogMiner: txn",                                                                
"LogMiner: queue",                                                              
"LogMiner: session audit list",                                                 
"LogMiner FSC: dictionary load completion",                                     
"enq: MN - contention",                                                         
"enq: ZL - LogMiner foreign log metadata",                                      
"enq: PL - contention",                                                         
"enq: CP - Pluggable database resetlogs",                                       
"enq: SB - logical standby metadata",                                           
"enq: SB - table instantiation",                                                
"Logical Standby Apply shutdown",                                               
"Logical Standby pin transaction",                                              
"Logical Standby dictionary build",                                             
"Logical Standby Terminal Apply",                                               
"Logical Standby Debug",                                                        
"Resolution of in-doubt txns",                                                  
"enq: XR - quiesce database",                                                   
"enq: XR - database force logging",                                             
"ADG query scn advance",                                                        
"ADG instance recovery complete",                                               
"latch: obj/range reuse redo processing",                                       
"standby query scn advance",                                                    
"change tracking file synchronous read",                                        
"change tracking file synchronous write",                                       
"change tracking file parallel write",                                          
"block change tracking buffer space",                                           
"CTWR media recovery checkpoint request",                                       
"enq: CT - global space management",                                            
"enq: CT - local space management",                                             
"enq: CT - change stream ownership",                                            
"enq: CT - state",                                                              
"enq: CT - state change gate 1",                                                
"enq: CT - state change gate 2",                                                
"enq: CT - CTWR process start/stop",                                            
"enq: CT - reading",                                                            
"recovery area: computing dropped files",                                       
"recovery area: computing obsolete files",                                      
"recovery area: computing backed up files",                                     
"recovery area: computing applied logs",                                        
"enq: RS - file delete",                                                        
"enq: RS - record reuse",                                                       
"enq: RS - prevent file delete",                                                
"enq: RS - prevent aging list update",                                          
"enq: RS - persist alert level",                                                
"enq: RS - read alert level",                                                   
"enq: RS - write alert level",                                                  
"enq: FL - Flashback database log",                                             
"enq: FL - Flashback db command",                                               
"enq: FD - Marker generation",                                                  
"enq: FD - Tablespace flashback on/off",                                        
"enq: FD - Flashback coordinator",                                              
"enq: FD - Flashback on/off",                                                   
"enq: FD - Restore point create/drop",                                          
"enq: FD - Flashback logical operations",                                       
"flashback free VI log",                                                        
"flashback log switch",                                                         
"enq: FW -  contention",                                                        
"RVWR wait for flashback copy",                                                 
"parallel recovery read buffer free",                                           
"parallel recovery redo cache buffer free",                                     
"parallel recovery change buffer free",                                         
"parallel recovery push change",                                                
"cell smart flash keep",                                                        
"cell smart flash unkeep",                                                      
"cell ram cache population",                                                    
"parallel recovery coord: all replies",                                         
"datafile move cleanup during resize",                                          
"Nologging Standby Unit Test",                                                  
"Nonlogged block fetch",                                                        
"recovery receive buffer free",                                                 
"recovery cancel ",                                                             
"recovery remote file verification ",                                           
"recovery active instance mapping setup",                                       
"recovery new thread enable",                                                   
"recovery file header update for checkpoint",                                   
"recovery file header update for fuzziness",                                    
"recovery coordinator apply  pending",                                          
"recovery coordinator marker apply",                                            
"recovery coordinator message",                                                 
"recovery merge pending",                                                       
"recovery metadata latch",                                                      
"recovery checkpoint",                                                          
"recovery apply pending",                                                       
"recovery fuzzy update",                                                        
"recovery shutdown",                                                            
"recovery message",                                                             
"recovery slaves to be informed",                                               
"recovery move influx buffers",                                                 
"recovery marker apply",                                                        
"recovery timestamp",                                                           
"recovery send buffer free",                                                    
"DBMS_ROLLING instruction completion",                                          
"Shadow lost write",                                                            
"blocking txn id for DDL",                                                      
"transaction",                                                                  
"inactive transaction branch",                                                  
"txn to complete",                                                              
"PMON to cleanup pseudo-branches at svc stop time",                             
"PMON to cleanup detached branches at shutdown",                                
"test long ops",                                                                
"latch: undo global data",                                                      
"undo segment recovery",                                                        
"unbound tx",                                                                   
"wait for change",                                                              
"wait for another txn - undo rcv abort",                                        
"wait for another txn - txn abort",                                             
"wait for another txn - rollback to savepoint",                                 
"undo_retention publish retry",                                                 
"txn cache read version",                                                       
"enq: TA - contention",                                                         
"enq: TX - contention",                                                         
"enq: US - contention",                                                         
"wait for stopper event to be increased",                                       
"wait for a undo record",                                                       
"wait for a paralle reco to abort",                                             
"enq: IM - contention for blr",                                                 
"enq: TD - KTF dump entries",                                                   
"enq: TE - KTF broadcast",                                                      
"enq: CN - race with txn",                                                      
"enq: CN - race with reg",                                                      
"enq: CN - race with init",                                                     
"latch: Change Notification Hash table latch",                                  
"enq: CO - master slave det",                                                   
"enq: FE - contention",                                                         
"latch: change notification client cache latch",                                
"latch: SGA Logging Log Latch",                                                 
"latch: SGA Logging Bkt Latch",                                                 
"enq: MC - Securefile log",                                                     
"enq: MF - flush bkgnd periodic",                                               
"enq: MF - creating swap in instance",                                          
"enq: MF - flush space",                                                        
"enq: MF - flush client",                                                       
"enq: MF - flush prior error",                                                  
"enq: MF - flush destroy",                                                      
"latch: ILM activity tracking latch",                                           
"latch: ILM access tracking extent",                                            
"IM CU busy",                                                                   
"enq: ZQ - register",                                                           
"enq: ZQ - quiesce",                                                            
"IM ADG space pressure",                                                        
"enq: TF - contention",                                                         
"latch: lob segment hash table latch",                                          
"latch: lob segment query latch",                                               
"latch: lob segment dispenser latch",                                           
"Wait for shrink lock2",                                                        
"Wait for shrink lock",                                                         
"L1 validation",                                                                
"Wait for TT enqueue",                                                          
"kttm2d",                                                                       
"ktsambl",                                                                      
"ktfbtgex",                                                                     
"enq: DT - contention",                                                         
"enq: TS - contention",                                                         
"enq: FB - contention",                                                         
"enq: SK - contention",                                                         
"enq: DW - contention",                                                         
"enq: SU - contention",                                                         
"enq: TT - contention",                                                         
"ktm: instance recovery",                                                       
"instance state change",                                                        
"enq: SM -  contention",                                                        
"enq: SJ - Slave Task Cancel",                                                  
"Space Manager: slave messages",                                                
"enq: FH - contention",                                                         
"latch: IM area scb latch",                                                     
"latch: IM area sb latch",                                                      
"enq: TZ - contention",                                                         
"enq: IN - contention",                                                         
"enq: ZB - contention",                                                         
"latch: IM seg hdr latch",                                                      
"latch: IM emb latch",                                                          
"Analyze hash compare",                                                         
"index block split",                                                            
"internal test event (index split branch)",                                     
"internal test event (index split leaf)",                                       
"kdblil wait before retrying ORA-54",                                           
"dupl. cluster key",                                                            
"internal test event (index merge)",                                            
"enq: DL - contention",                                                         
"enq: HQ - contention",                                                         
"enq: HP - contention",                                                         
"Securefile Write Gather Cache Yield Process",                                  
"enq: KL -  contention",                                                        
"enq: WG - delete fso",                                                         
"enq: SL - get lock",                                                           
"enq: SL - escalate lock",                                                      
"enq: SL - get lock for undo",                                                  
"enq: ZH - compression analysis",                                               
"Compression analysis",                                                         
"enq: SZ - contention",                                                         
"enq: ZC - FS Seg contention",                                                  
"enq: ZD - FS CU mod",                                                          
"enq: SY - IM populate by other session",                                       
"enq: JZ - Join group dictionary",                                              
"IM populate completion",                                                       
"IMXT Populate - drop HT",                                                      
"IM FastStart deadlock retry",                                                  
"IM ADO scheduler retry",                                                       
"latch: IMFS defer write list",                                                 
"IMFS Flush defer writes",                                                      
"In-Memory populate: over pga limit",                                           
"latch: Column stats entry latch",                                              
"row cache cleanup",                                                            
"row cache process",                                                            
"enq: QA -  contention",                                                        
"enq: QB -  contention",                                                        
"enq: QC -  contention",                                                        
"enq: QD -  contention",                                                        
"enq: QE -  contention",                                                        
"enq: QF -  contention",                                                        
"enq: QG -  contention",                                                        
"enq: QH -  contention",                                                        
"enq: QI -  contention",                                                        
"enq: QJ -  contention",                                                        
"enq: QK -  contention",                                                        
"enq: QL -  contention",                                                        
"enq: QM -  contention",                                                        
"enq: QN -  contention",                                                        
"enq: QO -  contention",                                                        
"enq: QP -  contention",                                                        
"enq: QQ -  contention",                                                        
"enq: QR -  contention",                                                        
"enq: QS -  contention",                                                        
"enq: QT -  contention",                                                        
"enq: QU -  contention",                                                        
"enq: QV -  contention",                                                        
"enq: QX -  contention",                                                        
"enq: QY -  contention",                                                        
"enq: QZ -  contention",                                                        
"enq: DV - contention",                                                         
"enq: SO - contention",                                                         
"RAC: row cache lock nowait retry",                                             
"enq: VA -  contention",                                                        
"enq: VB -  contention",                                                        
"enq: VC -  contention",                                                        
"enq: VD -  contention",                                                        
"enq: VE -  contention",                                                        
"enq: VF -  contention",                                                        
"enq: VG -  contention",                                                        
"enq: VH -  contention",                                                        
"enq: VI -  contention",                                                        
"enq: VJ -  contention",                                                        
"enq: VK -  contention",                                                        
"enq: VL -  contention",                                                        
"enq: VM -  contention",                                                        
"enq: VN -  contention",                                                        
"enq: VO -  contention",                                                        
"enq: VP -  contention",                                                        
"enq: VQ -  contention",                                                        
"enq: VR -  contention",                                                        
"enq: VS -  contention",                                                        
"enq: VT -  contention",                                                        
"enq: VU -  contention",                                                        
"enq: VV -  contention",                                                        
"enq: VX -  contention",                                                        
"enq: VY -  contention",                                                        
"enq: VZ -  contention",                                                        
"enq: EA -  contention",                                                        
"enq: EB -  contention",                                                        
"enq: EC -  contention",                                                        
"enq: ED -  contention",                                                        
"enq: EE -  contention",                                                        
"enq: EF -  contention",                                                        
"enq: EG -  contention",                                                        
"enq: EH -  contention",                                                        
"enq: EI -  contention",                                                        
"enq: EJ -  contention",                                                        
"enq: EK -  contention",                                                        
"enq: EL -  contention",                                                        
"enq: EM -  contention",                                                        
"enq: EN -  contention",                                                        
"enq: EO -  contention",                                                        
"enq: EP -  contention",                                                        
"enq: EQ -  contention",                                                        
"enq: ER -  contention",                                                        
"enq: ES -  contention",                                                        
"enq: ET -  contention",                                                        
"enq: EU -  contention",                                                        
"enq: EV -  contention",                                                        
"enq: EX -  contention",                                                        
"enq: EY -  contention",                                                        
"enq: EZ -  contention",                                                        
"enq: LA -  contention",                                                        
"enq: LB -  contention",                                                        
"enq: LC -  contention",                                                        
"enq: LD -  contention",                                                        
"enq: LE -  contention",                                                        
"enq: LF -  contention",                                                        
"enq: LG -  contention",                                                        
"enq: LH -  contention",                                                        
"enq: LI -  contention",                                                        
"enq: LJ -  contention",                                                        
"enq: LK -  contention",                                                        
"enq: LL -  contention",                                                        
"enq: LM -  contention",                                                        
"enq: LN -  contention",                                                        
"enq: LO -  contention",                                                        
"enq: LP -  contention",                                                        
"enq: LQ -  contention",                                                        
"enq: LR -  contention",                                                        
"enq: LS -  contention",                                                        
"enq: LT -  contention",                                                        
"enq: LU -  contention",                                                        
"enq: LV -  contention",                                                        
"enq: LX -  contention",                                                        
"enq: LY -  contention",                                                        
"enq: LZ -  contention",                                                        
"enq: YA -  contention",                                                        
"enq: YB -  contention",                                                        
"enq: YC -  contention",                                                        
"enq: YD -  contention",                                                        
"enq: YE -  contention",                                                        
"enq: YF -  contention",                                                        
"enq: YG -  contention",                                                        
"enq: YH -  contention",                                                        
"enq: YI -  contention",                                                        
"enq: YJ -  contention",                                                        
"enq: YK -  contention",                                                        
"enq: YL -  contention",                                                        
"enq: YM -  contention",                                                        
"enq: YN -  contention",                                                        
"enq: YO -  contention",                                                        
"enq: YP -  contention",                                                        
"enq: YQ -  contention",                                                        
"enq: YR -  contention",                                                        
"enq: YS -  contention",                                                        
"enq: YT -  contention",                                                        
"enq: YU -  contention",                                                        
"enq: YV -  contention",                                                        
"enq: YX -  contention",                                                        
"enq: YY -  contention",                                                        
"enq: YZ -  contention",                                                        
"enq: GA -  contention",                                                        
"enq: GB -  contention",                                                        
"enq: GC -  contention",                                                        
"enq: GD -  contention",                                                        
"enq: GE -  contention",                                                        
"enq: GF -  contention",                                                        
"enq: GG -  contention",                                                        
"enq: GH -  contention",                                                        
"enq: GI -  contention",                                                        
"enq: GJ -  contention",                                                        
"enq: GK -  contention",                                                        
"enq: GL -  contention",                                                        
"enq: GM -  contention",                                                        
"enq: GN -  contention",                                                        
"enq: GO -  contention",                                                        
"enq: GP -  contention",                                                        
"enq: GQ -  contention",                                                        
"enq: GR -  contention",                                                        
"enq: GS -  contention",                                                        
"enq: GT -  contention",                                                        
"enq: GU -  contention",                                                        
"enq: GV -  contention",                                                        
"enq: GX -  contention",                                                        
"enq: GY -  contention",                                                        
"enq: GZ -  contention",                                                        
"enq: NA -  contention",                                                        
"enq: NB -  contention",                                                        
"enq: NC -  contention",                                                        
"enq: ND -  contention",                                                        
"enq: NE -  contention",                                                        
"enq: NF -  contention",                                                        
"enq: NG -  contention",                                                        
"enq: NH -  contention",                                                        
"enq: NI -  contention",                                                        
"enq: NJ -  contention",                                                        
"enq: NK -  contention",                                                        
"enq: NL -  contention",                                                        
"enq: NM -  contention",                                                        
"enq: NN -  contention",                                                        
"enq: NO -  contention",                                                        
"enq: NP -  contention",                                                        
"enq: NQ -  contention",                                                        
"enq: NR -  contention",                                                        
"enq: NS -  contention",                                                        
"enq: NT -  contention",                                                        
"enq: NU -  contention",                                                        
"enq: NV -  contention",                                                        
"enq: NX -  contention",                                                        
"enq: NY -  contention",                                                        
"enq: NZ -  contention",                                                        
"enq: IV -  contention",                                                        
"enq: TP - contention",                                                         
"enq: RW - MV metadata contention",                                             
"enq: OC - contention",                                                         
"enq: OL - contention",                                                         
"kkdlgon",                                                                      
"kkdlsipon",                                                                    
"kkdlhpon",                                                                     
"Remote Tool Request Reply",                                                    
"Remote Tool Request Free List",                                                
"kgltwait",                                                                     
"kksfbc research",                                                              
"kksscl hash split",                                                            
"kksfbc child completion",                                                      
"enq: CU - contention",                                                         
"enq: AE - lock",                                                               
"Revoke: get object",                                                           
"enq: PF - contention",                                                         
"enq: PZ - flush passwordfile metadata",                                        
"enq: PZ - load passwordfile metadata",                                         
"enq: IL - contention",                                                         
"enq: CL - drop label",                                                         
"enq: CL - compare labels",                                                     
"enq: SG - OLS Add Group",                                                      
"enq: SG - OLS Create Group",                                                   
"enq: SG - OLS Drop Group",                                                     
"enq: SG - OLS Alter Group Parent",                                             
"enq: OP - OLS Store user entries",                                             
"enq: OP - OLS Cleanup unused profiles",                                        
"move audit tablespace delay",                                                  
"enq: CC - decryption",                                                         
"enq: MK - contention",                                                         
"enq: OW - initialization",                                                     
"enq: OW - termination",                                                        
"enq: RK - set key",                                                            
"enq: RK - queue wallet and TS keys",                                           
"enq: HC - HSM cache write",                                                    
"enq: HC - HSM cache read",                                                     
"enq: RL - RAC wallet lock",                                                    
"enq: PJ - modify DV policy",                                                   
"enq: PJ - read DV policy",                                                     
"Row cache for Grant or Revoke",                                                
"enq: ZZ - update hash tables",                                                 
"Failed Logon Delay",                                                           
"enq: ZA - add std audit table partition",                                      
"enq: ZF - add fga audit table partition",                                      
"enq: ZS - excl access to spill audit file",                                    
"enq: UT - transfer audit records",                                             
"enq: PA - modify a privilege capture",                                         
"enq: PA - read a privilege capture",                                           
"enq: PC - update privilege capture info",                                      
"enq: PC - read privilege capture info",                                        
"enq: KZ -  contention",                                                        
"enq: DX - contention",                                                         
"enq: DR - contention",                                                         
"pending global transaction(s)",                                                
"free global transaction table entry",                                          
"library cache revalidation",                                                   
"library cache shutdown",                                                       
"BFILE closure",                                                                
"BFILE check if exists",                                                        
"BFILE check if open",                                                          
"BFILE get length",                                                             
"BFILE get name object",                                                        
"BFILE get path object",                                                        
"BFILE open",                                                                   
"BFILE internal seek",                                                          
"resmgr:internal state cleanup",                                                
"xdb schema cache initialization",                                              
"ASM cluster file access",                                                      
"CSS initialization",                                                           
"CSS group registration",                                                       
"CSS group membership query",                                                   
"CSS operation: data query",                                                    
"CSS operation: data update",                                                   
"CSS Xgrp shared operation",                                                    
"CSS operation: query",                                                         
"CSS operation: action",                                                        
"CSS operation: diagnostic",                                                    
"GIPC operation: dump",                                                         
"GPnP Initialization",                                                          
"GPnP Termination",                                                             
"GPnP Get Item",                                                                
"GPnP Set Item",                                                                
"GPnP Get Error",                                                               
"ADR file lock",                                                                
"ADR block file read",                                                          
"ADR block file write",                                                         
"CRS call completion",                                                          
"ASM: OFS Cluster membership update",                                           
"dispatcher shutdown",                                                          
"latch: virtual circuit queues",                                                
"listen endpoint status",                                                       
"listener registration dump",                                                   
"OJVM: Generic",                                                                
"select wait",                                                                  
"jobq slave shutdown wait",                                                     
"jobq slave TJ process wait",                                                   
"job scheduler coordinator slave wait",                                         
"enq: JD - contention",                                                         
"enq: JQ - contention",                                                         
"enq: OD - Serializing DDLs",                                                   
"RAC referential constraint parent lock",                                       
"RAC: constraint DDL lock",                                                     
"kkshgnc reloop",                                                               
"optimizer stats update retry",                                                 
"wait active processes",                                                        
"SUPLOG PL wait for inflight pragma-d PL/SQL",                                  
"enq: MD - contention",                                                         
"enq: MS - contention",                                                         
"wait for kkpo ref-partitioning *TEST EVENT*",                                  
"RAC reference partitioning descendants lock",                                  
"enq: AP - contention",                                                         
"enq: RH - quarantine",                                                         
"PX slave connection",                                                          
"PX slave release",                                                             
"PX Send Wait",                                                                 
"PX qref latch",                                                                
"PX server shutdown",                                                           
"PX create server",                                                             
"PX signal server",                                                             
"PX Deq: Join ACK",                                                             
"PX Deq Credit: free buffer",                                                   
"PX Deq: Test for msg",                                                         
"PX Deq: Test for credit",                                                      
"PX Deq: Signal ACK RSG",                                                       
"PX Deq: Signal ACK EXT",                                                       
"PX Deq: reap credit",                                                          
"PX Nsq: PQ descriptor query",                                                  
"PX Nsq: PQ load info query",                                                   
"PX Deq Credit: Session Stats",                                                 
"PX Deq: Slave Session Stats",                                                  
"PX Deq: Slave Join Frag",                                                      
"enq: PI - contention",                                                         
"enq: PS - contention",                                                         
"enq: DA - Slave Process Array",                                                
"latch: parallel query alloc buffer",                                           
"kxfxse",                                                                       
"kxfxsp",                                                                       
"PX Deq: Table Q qref",                                                         
"PX Deq: Table Q Get Keys",                                                     
"PX Deq: Table Q Close",                                                        
"GV$: slave acquisition retry wait time",                                       
"PX hash elem being inserted",                                                  
"latch: PX hash array latch",                                                   
"enq: AY - contention",                                                         
"enq: TO - contention",                                                         
"enq: ZP - Private Temporary Table",                                            
"IMCDT end of scans cleanup",                                                   
"enq: IT - contention",                                                         
"enq: BF - allocation contention",                                              
"enq: BF - PMON Join Filter cleanup",                                           
"enq: RD - RAC load",                                                           
"PX key vector flatten",                                                        
"PX hash key vector cell",                                                      
"PX hash key vector merge",                                                     
"PX key vector use load",                                                       
"PX key vector create dgk init",                                                
"enq: MG - MGA allocation",                                                     
"enq: MG - client shared context allocation",                                   
"timer in sksawat",                                                             
"scginq AST call",                                                              
"kupp process wait",                                                            
"Kupp process shutdown",                                                        
"Data Pump slave startup",                                                      
"Data Pump slave init",                                                         
"enq: KP - contention",                                                         
"Replication Dequeue ",                                                         
"knpc_acwm_AwaitChangedWaterMark",                                              
"knpc_anq_AwaitNonemptyQueue",                                                  
"knpsmai",                                                                      
"enq: SR - contention",                                                         
"enq: RG - Apply coord start/stop",                                             
"REPL Capture/Apply: database startup",                                         
"REPL Capture/Apply: miscellaneous",                                            
"enq: SI - contention",                                                         
"REPL Capture/Apply: RAC inter-instance ack",                                   
"enq: IA - contention",                                                         
"enq: JI - contention",                                                         
"qerex_gdml",                                                                   
"enq: AT - contention",                                                         
"Retry DB Audit Record Insertion Delay",                                        
"opishd",                                                                       
"secure protocol error delay",                                                  
"kpodplck wait before retrying ORA-54",                                         
"enq: CQ - contention",                                                         
"wait for EMON to spawn",                                                       
"EMON termination",                                                             
"enq: AZ - AQ_SRVNTFN_Q Creation",                                              
"Emon coordinator startup",                                                     
"enq: SE - contention",                                                         
"tsm with timeout",                                                             
"Streams AQ: waiting for busy instance for instance_name",                      
"Streams AQ: index block pin/row lock",                                         
"enq: TQ - TM contention",                                                      
"enq: TQ - DDL contention",                                                     
"enq: TQ - INI contention",                                                     
"enq: TQ - DDL-INI contention",                                                 
"enq: TQ - INI sq contention",                                                  
"enq: TQ - MC free sync at cross job start",                                    
"enq: TQ - MC free sync at cross job stop",                                     
"enq: TQ - MC free sync at cross job end",                                      
"enq: TQ - MC free sync at export subshard",                                    
"enq: TQ - create eviction table",                                              
"enq: TQ - TM Job cache initialization",                                        
"enq: TQ - TM Job cache use",                                                   
"enq: TQ -  sq TM contention",                                                  
"enq: TQ - LB drop volatile shard",                                             
"AQ reload SO release",                                                         
"enq: RQ - Enqueue commit uncached",                                            
"enq: RQ - Enqueue commit cached",                                              
"enq: RQ - Dequeue update scn",                                                 
"enq: RQ - Parallel cross update scn",                                          
"enq: RQ - Cross update scn",                                                   
"enq: RQ - Trucate subshard",                                                   
"enq: RQ - Cross export subshard",                                              
"enq: RQ - Cross import subshard",                                              
"enq: RQ - Free shadow shard",                                                  
"enq: RQ - AQ indexed cached commit",                                           
"enq: RQ - AQ uncached commit WM update",                                       
"enq: RQ - AQ uncached dequeue",                                                
"enq: RQ - AQ Eq Ptn Mapping",                                                  
"enq: RQ - AQ Dq Ptn Mapping",                                                  
"enq: RQ - AQ Trnc mem free",                                                   
"enq: RQ - AQ Trnc mem free remote",                                            
"enq: RQ - AQ Trnc mem free by LB",                                             
"enq: RQ - AQ Trnc mem free by CP",                                             
"enq: RQ - AQ Enq commit incarnation wrap",                                     
"enq: RQ - AQ Rule evaluation segment load",                                    
"enq: RQ - AQ Evict: block truncate",                                           
"enq: RQ - AQ Unevict PGA: setup subscriber",                                   
"enq: RQ - AQ Unevict PGA: Queue View",                                         
"enq: RQ - AQ Shid Gen",                                                        
"enq: RQ - AQ Enq commit block truncate",                                       
"enq: RQ - AQ Cross update scn for delay",                                      
"enq: RQ - AQ Cross Shard mem free",                                            
"enq: RQ - AQ rollback retry count update",                                     
"enq: RQ - AQ cached commit WM update",                                         
"enq: RQ - AQ cached dequeue by condition",                                     
"AQ propagation connection",                                                    
"enq: KR - Drop rule force",                                                    
"enq: KR - Add rule to ruleset",                                                
"enq: KR - Remove rule from ruleset",                                           
"enq: DP - contention",                                                         
"enq: MH - contention",                                                         
"enq: ML - contention",                                                         
"enq: PH - contention",                                                         
"enq: SF - contention",                                                         
"enq: XH - contention",                                                         
"enq: WA - contention",                                                         
"Streams AQ: QueueTable kgl locks",                                             
"AQ spill debug idle",                                                          
"AQ master shutdown",                                                           
"AQPC: new master",                                                             
"AQ Background Master: slave start",                                            
"enq: AQ - QPT fg map dqpt",                                                    
"enq: AQ - QPT fg map qpt",                                                     
"enq: PQ - QPT add qpt",                                                        
"enq: PQ - QPT drop qpt",                                                       
"enq: PQ - QPT add dqpt",                                                       
"enq: PQ - QPT drop dqpt",                                                      
"enq: PQ - QPT add qpt fg",                                                     
"enq: PQ - QPT add dqpt fg",                                                    
"enq: PQ - QPT Trunc",                                                          
"enq: PQ - QPT LB Trunc sync",                                                  
"enq: PQ - QPT XSTART Trunc sync",                                              
"AQ master: time mgmt/task cleanup",                                            
"AQ slave: time mgmt/task cleanup",                                             
"enq: BA - SUBBMAP contention",                                                 
"AQ:non durable subscriber add or drop",                                        
"AQ: RAC AQ Network",                                                           
"latch: AQ Sharded subscriber statistics latch",                                
"AQ OPT Operation Complete",                                                    
"latch: AQ OPT Background Master Latch",                                        
"enq: CX - TEXT: Index Specific Lock",                                          
"enq: OT - TEXT: Generic Lock",                                                 
"XDB SGA initialization",                                                       
"enq: XC - XDB Configuration",                                                  
"NFS read delegation outstanding",                                              
"Data Guard Broker Wait",                                                       
"enq: RF - synch: DG Broker metadata",                                          
"enq: RF - atomicity",                                                          
"enq: RF - Broker Chief Lock",                                                  
"enq: RF - synchronization: aifo master",                                       
"enq: RF - new AI",                                                             
"enq: RF - synchronization: critical ai",                                       
"enq: RF - RF - Database Automatic Disable",                                    
"enq: RF - FSFO Observer Heartbeat",                                            
"enq: RF - DG Broker Current File ID",                                          
"enq: RF - FSFO Primary Shutdown suspended",                                    
"enq: RF - Broker State Lock",                                                  
"enq: RF - FSFO string buffer",                                                 
"enq: RF - Broker NSV Lock",                                                    
"enq: RF - Broker LSBY FO Lock",                                                
"PX Deq: OLAP Update Reply",                                                    
"PX Deq: OLAP Update Execute",                                                  
"PX Deq: OLAP Update Close",                                                    
"enq: AW - AW$ table lock",                                                     
"enq: AW - AW state lock",                                                      
"enq: AW - user access for AW",                                                 
"enq: AW - AW generation lock",                                                 
"enq: AG - contention",                                                         
"enq: AO - contention",                                                         
"enq: OQ - xsoqhiAlloc",                                                        
"enq: OQ - xsoqhiFlush",                                                        
"enq: OQ - xsoq*histrecb",                                                      
"enq: OQ - xsoqhiClose",                                                        
"enq: OQ - xsoqhistrecb",                                                       
"enq: IZ -  contention",                                                        
"enq: AM - client registration",                                                
"enq: AM - shutdown",                                                           
"enq: AM - rollback COD reservation",                                           
"enq: AM - background COD reservation",                                         
"enq: AM - ASM cache freeze",                                                   
"enq: AM - ASM ACD Relocation",                                                 
"enq: AM - group use",                                                          
"enq: AM - group block",                                                        
"enq: AM - ASM File Destroy",                                                   
"enq: AM - ASM User",                                                           
"enq: AM - ASM Password File Update",                                           
"enq: AM - ASM Amdu Dump",                                                      
"enq: AM - disk offline",                                                       
"enq: AM - ASM reserved",                                                       
"enq: AM - block repair",                                                       
"enq: AM - ASM disk based alloc/dealloc",                                       
"enq: AM - ASM file descriptor",                                                
"enq: AM - ASM file relocation",                                                
"enq: AM - ASM SR relocation",                                                  
"enq: AM - ASM Grow ACD",                                                       
"enq: AM - ASM DD update SrRloc",                                               
"enq: AM - ASM file chown",                                                     
"enq: AM - Register with IOServer",                                             
"enq: AM - ASM metadata replication",                                           
"enq: AM - SR slice Clear/Mark",                                                
"enq: AM - Enable Remote ASM",                                                  
"enq: AM - Disable Remote ASM",                                                 
"enq: AM - Credential creation",                                                
"enq: AM - Credential deletion",                                                
"enq: AM - ASM file access req",                                                
"enq: AM - ASM client operation",                                               
"enq: AM - ASM client check",                                                   
"enq: AM - ASM ATB COD creation",                                               
"enq: AM - Create default DG key in OCR",                                       
"enq: AM - ASM Audit file Delete",                                              
"enq: AM - ASM Audit file Cleanup",                                             
"enq: AM - ASM VAT migration",                                                  
"enq: AM - Update SR nomark flag",                                              
"enq: AM - ASM VAL cache",                                                      
"enq: AM - ASM SR Segment Reuse",                                               
"enq: AM - ASM SR Segment Reuse Lookup",                                        
"enq: AM - ASM SR Batch Allocation",                                            
"enq: AM - ASM Sparse Disk IOCTL",                                              
"enq: AM - ASM VAM Active",                                                     
"enq: AM - ASM Split Mirror File Create",                                       
"enq: AM - ASM Split Mirror File Delete",                                       
"enq: AM - ASM Mirror Prepare",                                                 
"enq: AM - ASM Mirror Split",                                                   
"enq: AM - ASM Drop Mirror",                                                    
"enq: AM - ASM PDB Mirror Split",                                               
"enq: AM - DB Mirror Prepare",                                                  
"enq: AM - DB Drop Mirror Copy",                                                
"enq: AM - DB Mirror Split",                                                    
"enq: AM - PDB Mirror Split",                                                   
"enq: AM - Create Prepare Child file group",                                    
"enq: AM - Change file group redundancy",                                       
"enq: AM - ASM Split Mirror ODM File Crt",                                      
"enq: AM - ASM Split Mirror ODM File Del",                                      
"enq: AM - ASMB Startup",                                                       
"enq: AM - ASMB Renew",                                                         
"enq: AM - ASM: group unblock",                                                 
"enq: AM - ASM file create",                                                    
"enq: AM - ASM ATE conversion",                                                 
"enq: AM - ASM resync from ATE",                                                
"enq: AM - ASM Split Status Write",                                             
"enq: AM - ASM Split Status Read",                                              
"enq: AM - ASM Client Assisted Offline",                                        
"enq: AM - ASM Client Assisted Offline Chk",                                    
"ASM internal hang test",                                                       
"ASM Instance startup",                                                         
"buffer busy",                                                                  
"buffer freelistbusy",                                                          
"buffer rememberlist busy",                                                     
"buffer writeList full",                                                        
"no free buffers",                                                              
"buffer write wait",                                                            
"buffer invalidation wait",                                                     
"buffer dirty disabled",                                                        
"ASM metadata cache frozen",                                                    
"enq: FZ -  contention",                                                        
"enq: CM - gate",                                                               
"enq: CM - instance",                                                           
"enq: CM - diskgroup dismount",                                                 
"enq: XQ - recovery",                                                           
"enq: XQ - relocation",                                                         
"enq: XQ - purification",                                                       
"enq: AD - allocate AU",                                                        
"enq: AD - deallocate AU",                                                      
"enq: AD - relocate AU",                                                        
"enq: AD - flush writes to AU",                                                 
"enq: DO - disk online",                                                        
"enq: DO - disk online recovery",                                               
"enq: DO - Staleness Registry create",                                          
"enq: DO - startup of MARK process",                                            
"extent map load/unlock",                                                       
"extent map locked",                                                            
"enq: XL - fault extent map",                                                   
"Sync ASM rebalance",                                                           
"Sync ASM discovery",                                                           
"File Directory Use",                                                           
"enq: DG - contention",                                                         
"enq: DD - contention",                                                         
"enq: HD - contention",                                                         
"enq: DQ -  contention",                                                        
"ASM ioctl to dematerialize blocks",                                            
"enq: DN - contention",                                                         
"Cluster stabilization wait",                                                   
"Cluster Suspension wait",                                                      
"ASMB cookie valid check",                                                      
"ASM background starting",                                                      
"CSS cookie check",                                                             
"ASM db client exists",                                                         
"ASM file metadata operation",                                                  
"ASM network foreground exits",                                                 
"ASM check disk slices",                                                        
"enq: XB -  contention",                                                        
"enq: FA - access file",                                                        
"enq: RX - relocate extent",                                                    
"enq: RX - unlock extent",                                                      
"enq: AR -  contention",                                                        
"enq: AH -  contention",                                                        
"log write(odd)",                                                               
"log write(even)",                                                              
"checkpoint advanced",                                                          
"enq: FR - contention",                                                         
"enq: FR - use the thread",                                                     
"enq: FR - recover the thread",                                                 
"enq: FG - serialize ACD relocate",                                             
"enq: FG - FG redo generation enq race",                                        
"enq: FG - LGWR redo generation enq race",                                      
"enq: FT - allow LGWR writes",                                                  
"enq: FT - disable LGWR writes",                                                
"enq: FC - open an ACD thread",                                                 
"enq: FC - recover an ACD thread",                                              
"enq: FX - issue ACD Xtnt Relocation CIC",                                      
"rollback operations block full",                                               
"rollback operations active",                                                   
"enq: RB - contention",                                                         
"ASM: MARK subscribe to msg channel",                                           
"ASM: Send msg to MARK",                                                        
"IOS client reconnect to dif IOS",                                              
"enq: II -  contention",                                                        
"enq: IK -  contention",                                                        
"IOS worker process startup",                                                   
"IOS worker process exit",                                                      
"call",                                                                         
"enq: IC - IOServer clientID",                                                  
"enq: IF - file open",                                                          
"enq: IF - file close",                                                         
"enq: PT - contention",                                                         
"enq: PT - ASM Storage May Split",                                              
"enq: PM -  contention",                                                        
"ASM concurrent diskgroup dismount",                                            
"ASM PST operation",                                                            
"global cache busy",                                                            
"lock release pending",                                                         
"dma prepare busy",                                                             
"GCS lock cancel",                                                              
"GCS lock open S",                                                              
"GCS lock open X",                                                              
"GCS lock open",                                                                
"GCS lock cvt S",                                                               
"GCS lock cvt X",                                                               
"GCS lock esc X",                                                               
"GCS lock esc",                                                                 
"GCS recovery lock open",                                                       
"GCS recovery lock convert",                                                    
"kfcl: instance recovery",                                                      
"no free locks",                                                                
"lock close",                                                                   
"enq: KE -  contention",                                                        
"enq: KQ - access ASM attribute",                                               
"ASM Volume Background",                                                        
"ASM volume directive send",                                                    
"ASM Volume Resource Action",                                                   
"enq: AV - persistent DG number",                                               
"enq: AV - volume relocate",                                                    
"enq: AV - AVD client registration",                                            
"enq: AV - add/enable first volume in DG",                                      
"ASM Scrubbing I/O",                                                            
"ASM Async Scrub",                                                              
"ASM Scrub Stop",                                                               
"ASM Scrub Running",                                                            
"ASM: VAM activation",                                                          
"DB Split Delay",                                                               
"enq: WF - contention",                                                         
"enq: WT - contention",                                                         
"enq: WP - contention",                                                         
"enq: FU - contention",                                                         
"enq: UF - undo stat flush per PDB",                                            
"enq: WI - AWR import",                                                         
"enq: WE - AWR auto-export",                                                    
"enq: WD - AWR mail package retrieval",                                         
"AWR Flush",                                                                    
"AWR Metric Capture",                                                           
"enq: TB - SQL Tuning Base Cache Update",                                       
"enq: TB - SQL Tuning Base Cache Load",                                         
"enq: SH - contention",                                                         
"enq: AF - task serialization",                                                 
"MMON slave messages",                                                          
"MMON (Lite) shutdown",                                                         
"enq: MO - contention",                                                         
"enq: MM - MMON Autotask scheduling",                                           
"enq: TL - contention",                                                         
"enq: TH - metric threshold evaluation",                                        
"enq: TK - Auto Task Serialization",                                            
"enq: TK - Auto Task Slave Lockout",                                            
"enq: RR - contention",                                                         
"WCR: RAC message context busy",                                                
"WCR: capture file IO write",                                                   
"WCR: Sync context busy",                                                       
"latch: WCR: sync",                                                             
"latch: WCR: processes HT",                                                     
"enq: RA - RT ADDM flood control",                                              
"enq: MW - contention",                                                         
"enq: TU - UMF topology",                                                       
"SPA slave messages",                                                           
"enq: JS - job run lock - synchronize",                                         
"enq: JS - job recov lock",                                                     
"enq: JS - wdw op",                                                             
"enq: JS - evt notify",                                                         
"enq: JS - aq sync",                                                            
"enq: JG - queue lock",                                                         
"enq: JG - q mem clnup lck",                                                    
"enq: JG - contention",                                                         
"enq: JG - sch locl enqs",                                                      
"enq: JG - evt notify",                                                         
"enq: JG - evtsub add",                                                         
"enq: JG - evtsub drop",                                                        
"enq: AU - ADR Purge Operation",                                                
"enq: XD - ASM disk drop/add",                                                  
"enq: XD - ASM disk ONLINE",                                                    
"enq: XD - ASM disk OFFLINE",                                                   
"cell worker online completion",                                                
"cell worker retry ",                                                           
"cell manager cancel work request",                                             
"cell manager: CRS DG unmounted list",                                          
"cell manager: CRS DG start",                                                   
"opening cell offload device",                                                  
"ioctl to cell offload device",                                                 
"reap block level offload operations",                                          
"enq: SN - PDB SGA allocation",                                                 
"enq: SN - PDB SGA free",                                                       
"enq: SN - PDB SGA protection",                                                 
"CDB: Per Instance Query for PDB Info",                                         
"PDB relocate completion",                                                      
"enq: PB - PDB Lock",                                                           
"chunk move metadata prefetch",                                                 
"secondary event",                                                              
 "" };                                                                          
int64_t users[]={                                                                   
0x0000000168CA6200,                                                             
0x0000000168CA89E8,                                                             
0x0000000168CAB1D0,                                                             
0x0000000168CAD9B8,                                                             
0x0000000168CB01A0,                                                             
0x0000000168CB2988,                                                             
0x0000000168CB5170,                                                             
0x0000000168CB7958,                                                             
0x0000000168CBA140,                                                             
0x0000000168CBC928,                                                             
0x0000000168CBF110,                                                             
0x0000000168CC18F8,                                                             
0x0000000168CC40E0,                                                             
0x0000000168CC68C8,                                                             
0x0000000168CC90B0,                                                             
0x0000000168CCB898,                                                             
0x0000000168CCE080,                                                             
0x0000000168CD0868,                                                             
0x0000000168CD3050,                                                             
0x0000000168CD5838,                                                             
0x0000000168CD8020,                                                             
0x0000000168CDA808,                                                             
0x0000000168CDCFF0,                                                             
0x0000000168CDF7D8,                                                             
0x0000000168CE1FC0,                                                             
0x0000000168CE47A8,                                                             
0x0000000168CE6F90,                                                             
0x0000000168CE9778,                                                             
0x0000000168CEBF60,                                                             
0x0000000168CEE748,                                                             
0x0000000168CF0F30,                                                             
0x0000000168CF3718,                                                             
0x0000000168CF5F00,                                                             
0x0000000168CF86E8,                                                             
0x0000000168CFAED0,                                                             
0x0000000168CFD6B8,                                                             
0x0000000168CFFEA0,                                                             
0x0000000168D02688,                                                             
0x0000000168D04E70,                                                             
0x0000000168D07658,                                                             
0x0000000168D09E40,                                                             
0x0000000168D0C628,                                                             
0x0000000168D0EE10,                                                             
0x0000000168D115F8,                                                             
0x0000000168D13DE0,                                                             
0x0000000168D165C8,                                                             
0x0000000168D18DB0,                                                             
0x0000000168D1B598,                                                             
0x0000000168D1DD80,                                                             
0x0000000168D20568,                                                             
0x0000000168D22D50,                                                             
0x0000000168D25538,                                                             
0x0000000168D27D20,                                                             
0x0000000168D2A508,                                                             
0x0000000168D2CCF0,                                                             
0x0000000168D2F4D8,                                                             
0x0000000168D31CC0,                                                             
0x0000000168D344A8,                                                             
0x0000000168D36C90,                                                             
0x0000000168D39478,                                                             
0x0000000168D3BC60,                                                             
0x0000000168D3E448,                                                             
0x0000000168D40C30,                                                             
0x0000000168D43418,                                                             
0x0000000168D45C00,                                                             
0x0000000168D483E8,                                                             
0x0000000168D4ABD0,                                                             
0x0000000168D4D3B8,                                                             
0x0000000168D4FBA0,                                                             
0x0000000168D52388,                                                             
0x0000000168D54B70,                                                             
0x0000000168D57358,                                                             
0x0000000168D59B40,                                                             
0x0000000168D5C328,                                                             
0x0000000168D5EB10,                                                             
0x0000000168D612F8,                                                             
0x0000000168D63AE0,                                                             
0x0000000168D662C8,                                                             
0x0000000168D68AB0,                                                             
0x0000000168D6B298,                                                             
0x0000000168D6DA80,                                                             
0x0000000168D70268,                                                             
0x0000000168D72A50,                                                             
0x0000000168D75238,                                                             
0x0000000168D77A20,                                                             
0x0000000168D7A208,                                                             
0x0000000168D7C9F0,                                                             
0x0000000168D7F1D8,                                                             
0x0000000168D819C0,                                                             
0x0000000168D841A8,                                                             
0x0000000168D86990,                                                             
0x0000000168D89178,                                                             
0x0000000168D8B960,                                                             
0x0000000168D8E148,                                                             
0x0000000168D90930,                                                             
0x0000000168D93118,                                                             
0x0000000168D95900,                                                             
0x0000000168D980E8,                                                             
0x0000000168D9A8D0,                                                             
0x0000000168D9D0B8,                                                             
0x0000000168D9F8A0,                                                             
0x0000000168DA2088,                                                             
0x0000000168DA4870,                                                             
0x0000000168DA7058,                                                             
0x0000000168DA9840,                                                             
0x0000000168DAC028,                                                             
0x0000000168DAE810,                                                             
0x0000000168DB0FF8,                                                             
0x0000000168DB37E0,                                                             
0x0000000168DB5FC8,                                                             
0x0000000168DB87B0,                                                             
0x0000000168DBAF98,                                                             
0x0000000168DBD780,                                                             
0x0000000168DBFF68,                                                             
0x0000000168DC2750,                                                             
0x0000000168DC4F38,                                                             
0x0000000168DC7720,                                                             
0x0000000168DC9F08,                                                             
0x0000000168DCC6F0,                                                             
0x0000000168DCEED8,                                                             
0x0000000168DD16C0,                                                             
0x0000000168DD3EA8,                                                             
0x0000000168DD6690,                                                             
0x0000000168DD8E78,                                                             
0x0000000168DDB660,                                                             
0x0000000168DDDE48,                                                             
0x0000000168DE0A20,                                                             
0x0000000168DE3208,                                                             
0x0000000168DE59F0,                                                             
0x0000000168DE81D8,                                                             
0x0000000168DEA9C0,                                                             
0x0000000168DED1A8,                                                             
0x0000000168DEF990,                                                             
0x0000000168DF2178,                                                             
0x0000000168DF4960,                                                             
0x0000000168DF7148,                                                             
0x0000000168DF9930,                                                             
0x0000000168DFC118,                                                             
0x0000000168DFE900,                                                             
0x0000000168E010E8,                                                             
0x0000000168E038D0,                                                             
0x0000000168E060B8,                                                             
0x0000000168E088A0,                                                             
0x0000000168E0B088,                                                             
0x0000000168E0D870,                                                             
0x0000000168E10058,                                                             
0x0000000168E12840,                                                             
0x0000000168E15028,                                                             
0x0000000168E17810,                                                             
0x0000000168E19FF8,                                                             
0x0000000168E1C7E0,                                                             
0x0000000168E1EFC8,                                                             
0x0000000168E217B0,                                                             
0x0000000168E23F98,                                                             
0x0000000168E26780,                                                             
0x0000000168E28F68,                                                             
0x0000000168E2B750,                                                             
0x0000000168E2DF38,                                                             
0x0000000168E30720,                                                             
0x0000000168E32F08,                                                             
0x0000000168E356F0,                                                             
0x0000000168E37ED8,                                                             
0x0000000168E3A6C0,                                                             
0x0000000168E3CEA8,                                                             
0x0000000168E3F690,                                                             
0x0000000168E41E78,                                                             
0x0000000168E44660,                                                             
0x0000000168E46E48,                                                             
0x0000000168E49630,                                                             
0x0000000168E4BE18,                                                             
0x0000000168E4E600,                                                             
0x0000000168E50DE8,                                                             
0x0000000168E535D0,                                                             
0x0000000168E55DB8,                                                             
0x0000000168E585A0,                                                             
0x0000000168E5AD88,                                                             
0x0000000168E5D570,                                                             
0x0000000168E5FD58,                                                             
0x0000000168E62540,                                                             
0x0000000168E64D28,                                                             
0x0000000168E67510,                                                             
0x0000000168E69CF8,                                                             
0x0000000168E6C4E0,                                                             
0x0000000168E6ECC8,                                                             
0x0000000168E714B0,                                                             
0x0000000168E73C98,                                                             
0x0000000168E76480,                                                             
0x0000000168E78C68,                                                             
0x0000000168E7B450,                                                             
0x0000000168E7DC38,                                                             
0x0000000168E80420,                                                             
0x0000000168E82C08,                                                             
0x0000000168E853F0,                                                             
0x0000000168E87BD8,                                                             
0x0000000168E8A3C0,                                                             
0x0000000168E8CBA8,                                                             
0x0000000168E8F390,                                                             
0x0000000168E91B78,                                                             
0x0000000168E94360,                                                             
0x0000000168E96B48,                                                             
0x0000000168E99330,                                                             
0x0000000168E9BB18,                                                             
0x0000000168E9E300,                                                             
0x0000000168EA0AE8,                                                             
0x0000000168EA32D0,                                                             
0x0000000168EA5AB8,                                                             
0x0000000168EA82A0,                                                             
0x0000000168EAAA88,                                                             
0x0000000168EAD270,                                                             
0x0000000168EAFA58,                                                             
0x0000000168EB2240,                                                             
0x0000000168EB4A28,                                                             
0x0000000168EB7210,                                                             
0x0000000168EB99F8,                                                             
0x0000000168EBC1E0,                                                             
0x0000000168EBE9C8,                                                             
0x0000000168EC11B0,                                                             
0x0000000168EC3998,                                                             
0x0000000168EC6180,                                                             
0x0000000168EC8968,                                                             
0x0000000168ECB150,                                                             
0x0000000168ECD938,                                                             
0x0000000168ED0120,                                                             
0x0000000168ED2908,                                                             
0x0000000168ED50F0,                                                             
0x0000000168ED78D8,                                                             
0x0000000168EDA0C0,                                                             
0x0000000168EDC8A8,                                                             
0x0000000168EDF090,                                                             
0x0000000168EE1878,                                                             
0x0000000168EE4060,                                                             
0x0000000168EE6848,                                                             
0x0000000168EE9030,                                                             
0x0000000168EEB818,                                                             
0x0000000168EEE000,                                                             
0x0000000168EF07E8,                                                             
0x0000000168EF2FD0,                                                             
0x0000000168EF57B8,                                                             
0x0000000168EF7FA0,                                                             
0x0000000168EFA788,                                                             
0x0000000168EFCF70,                                                             
0x0000000168EFF758,                                                             
0x0000000168F01F40,                                                             
0x0000000168F04728,                                                             
0x0000000168F06F10,                                                             
0x0000000168F096F8,                                                             
0x0000000168F0BEE0,                                                             
0x0000000168F0E6C8,                                                             
0x0000000168F10EB0,                                                             
0x0000000168F13698,                                                             
0x0000000168F15E80,                                                             
0x0000000168F18668,                                                             
0x0000000168F1B240,                                                             
0x0000000168F1DA28,                                                             
0x0000000168F20210,                                                             
0x0000000168F229F8,                                                             
0x0000000168F251E0,                                                             
0x0000000168F279C8,                                                             
0x0000000168F2A1B0,                                                             
0x0000000168F2C998,                                                             
0x0000000168F2F180,                                                             
0x0000000168F31968,                                                             
0x0000000168F34150,                                                             
0x0000000168F36938,                                                             
0x0000000168F39120,                                                             
0x0000000168F3B908,                                                             
0x0000000168F3E0F0,                                                             
0x0000000168F408D8,                                                             
0x0000000168F430C0,                                                             
0x0000000168F458A8,                                                             
0x0000000168F48090,                                                             
0x0000000168F4A878,                                                             
0x0000000168F4D060,                                                             
0x0000000168F4F848,                                                             
0x0000000168F52030,                                                             
0x0000000168F54818,                                                             
0x0000000168F57000,                                                             
0x0000000168F597E8,                                                             
0x0000000168F5BFD0,                                                             
0x0000000168F5E7B8,                                                             
0x0000000168F60FA0,                                                             
0x0000000168F63788,                                                             
0x0000000168F65F70,                                                             
0x0000000168F68758,                                                             
0x0000000168F6AF40,                                                             
0x0000000168F6D728,                                                             
0x0000000168F6FF10,                                                             
0x0000000168F726F8,                                                             
0x0000000168F74EE0,                                                             
0x0000000168F776C8,                                                             
0x0000000168F79EB0,                                                             
0x0000000168F7C698,                                                             
0x0000000168F7EE80,                                                             
0x0000000168F81668,                                                             
0x0000000168F83E50,                                                             
0x0000000168F86638,                                                             
0x0000000168F88E20,                                                             
0x0000000168F8B608,                                                             
0x0000000168F8DDF0,                                                             
0x0000000168F905D8,                                                             
0x0000000168F92DC0,                                                             
0x0000000168F955A8,                                                             
0x0000000168F97D90,                                                             
0x0000000168F9A578,                                                             
0x0000000168F9CD60,                                                             
0x0000000168F9F548,                                                             
0x0000000168FA1D30,                                                             
0x0000000168FA4518,                                                             
0x0000000168FA6D00,                                                             
0x0000000168FA94E8,                                                             
0x0000000168FABCD0,                                                             
0x0000000168FAE4B8,                                                             
0x0000000168FB0CA0,                                                             
0x0000000168FB3488,                                                             
0x0000000168FB5C70,                                                             
0x0000000168FB8458,                                                             
0x0000000168FBAC40,                                                             
0x0000000168FBD428,                                                             
0x0000000168FBFC10,                                                             
0x0000000168FC23F8,                                                             
0x0000000168FC4BE0,                                                             
0x0000000168FC73C8,                                                             
0x0000000168FC9BB0,                                                             
0x0000000168FCC398,                                                             
0x0000000168FCEB80,                                                             
0x0000000168FD1368,                                                             
0x0000000168FD3B50,                                                             
0x0000000168FD6338,                                                             
0x0000000168FD8B20,                                                             
0x0000000168FDB308,                                                             
0x0000000168FDDAF0,                                                             
0x0000000168FE02D8,                                                             
0x0000000168FE2AC0,                                                             
0x0000000168FE52A8,                                                             
0x0000000168FE7A90,                                                             
0x0000000168FEA278,                                                             
0x0000000168FECA60,                                                             
0x0000000168FEF248,                                                             
0x0000000168FF1A30,                                                             
0x0000000168FF4218,                                                             
0x0000000168FF6A00,                                                             
0x0000000168FF91E8,                                                             
0x0000000168FFB9D0,                                                             
0x0000000168FFE1B8,                                                             
0x00000001690009A0,                                                             
0x0000000169003188,                                                             
0x0000000169005970,                                                             
0x0000000169008158,                                                             
0x000000016900A940,                                                             
0x000000016900D128,                                                             
0x000000016900F910,                                                             
0x00000001690120F8,                                                             
0x00000001690148E0,                                                             
0x00000001690170C8,                                                             
0x00000001690198B0,                                                             
0x000000016901C098,                                                             
0x000000016901E880,                                                             
0x0000000169021068,                                                             
0x0000000169023850,                                                             
0x0000000169026038,                                                             
0x0000000169028820,                                                             
0x000000016902B008,                                                             
0x000000016902D7F0,                                                             
0x000000016902FFD8,                                                             
0x00000001690327C0,                                                             
0x0000000169034FA8,                                                             
0x0000000169037790,                                                             
0x0000000169039F78,                                                             
0x000000016903C760,                                                             
0x000000016903EF48,                                                             
0x0000000169041730,                                                             
0x0000000169043F18,                                                             
0x0000000169046700,                                                             
0x0000000169048EE8,                                                             
0x000000016904B6D0,                                                             
0x000000016904DEB8,                                                             
0x00000001690506A0,                                                             
0x0000000169052E88,                                                             
0x0000000169055A60,                                                             
0x0000000169058248,                                                             
0x000000016905AA30,                                                             
0x000000016905D218,                                                             
0x000000016905FA00,                                                             
0x00000001690621E8,                                                             
0x00000001690649D0,                                                             
0x00000001690671B8,                                                             
0x00000001690699A0,                                                             
0x000000016906C188,                                                             
0x000000016906E970,                                                             
0x0000000169071158,                                                             
0x0000000169073940,                                                             
0x0000000169076128,                                                             
0x0000000169078910,                                                             
0x000000016907B0F8,                                                             
0x000000016907D8E0,                                                             
0x00000001690800C8,                                                             
0x00000001690828B0,                                                             
0x0000000169085098,                                                             
0x0000000169087880,                                                             
0x000000016908A068,                                                             
0x000000016908C850,                                                             
0x000000016908F038,                                                             
0x0000000169091820,                                                             
0x0000000169094008,                                                             
0x00000001690967F0,                                                             
0x0000000169098FD8,                                                             
0x000000016909B7C0,                                                             
0x000000016909DFA8,                                                             
0x00000001690A0790,                                                             
0x00000001690A2F78,                                                             
0x00000001690A5760,                                                             
0x00000001690A7F48,                                                             
0x00000001690AA730,                                                             
0x00000001690ACF18,                                                             
0x00000001690AF700,                                                             
0x00000001690B1EE8,                                                             
0x00000001690B46D0,                                                             
0x00000001690B6EB8,                                                             
0x00000001690B96A0,                                                             
0x00000001690BBE88,                                                             
0x00000001690BE670,                                                             
0x00000001690C0E58,                                                             
0x00000001690C3640,                                                             
0x00000001690C5E28,                                                             
0x00000001690C8610,                                                             
0x00000001690CADF8,                                                             
0x00000001690CD5E0,                                                             
0x00000001690CFDC8,                                                             
0x00000001690D25B0,                                                             
0x00000001690D4D98,                                                             
0x00000001690D7580,                                                             
0x00000001690D9D68,                                                             
0x00000001690DC550,                                                             
0x00000001690DED38,                                                             
0x00000001690E1520,                                                             
0x00000001690E3D08,                                                             
0x00000001690E64F0,                                                             
0x00000001690E8CD8,                                                             
0x00000001690EB4C0,                                                             
0x00000001690EDCA8,                                                             
0x00000001690F0490,                                                             
0x00000001690F2C78,                                                             
0x00000001690F5460,                                                             
0x00000001690F7C48,                                                             
0x00000001690FA430,                                                             
0x00000001690FCC18,                                                             
0x00000001690FF400,                                                             
0x0000000169101BE8,                                                             
0x00000001691043D0,                                                             
0x0000000169106BB8,                                                             
0x00000001691093A0,                                                             
0x000000016910BB88,                                                             
0x000000016910E370,                                                             
0x0000000169110B58,                                                             
0x0000000169113340,                                                             
0x0000000169115B28,                                                             
0x0000000169118310,                                                             
0x000000016911AAF8,                                                             
0x000000016911D2E0,                                                             
0x000000016911FAC8,                                                             
0x00000001691222B0,                                                             
0x0000000169124A98,                                                             
0x0000000169127280,                                                             
0x0000000169129A68,                                                             
0x000000016912C250,                                                             
0x000000016912EA38,                                                             
0x0000000169131220,                                                             
0x0000000169133A08,                                                             
0x00000001691361F0,                                                             
0x00000001691389D8,                                                             
0x000000016913B1C0,                                                             
0x000000016913D9A8,                                                             
0x0000000169140190,                                                             
0x0000000169142978,                                                             
0x0000000169145160,                                                             
0x0000000169147948,                                                             
0x000000016914A130,                                                             
0x000000016914C918,                                                             
0x000000016914F100,                                                             
0x00000001691518E8,                                                             
0x00000001691540D0,                                                             
0x00000001691568B8,                                                             
0x00000001691590A0,                                                             
0x000000016915B888,                                                             
0x000000016915E070,                                                             
0x0000000169160858,                                                             
0x0000000169163040,                                                             
0x0000000169165828,                                                             
0x0000000169168010,                                                             
0x000000016916A7F8,                                                             
0x000000016916CFE0,                                                             
0x000000016916F7C8,                                                             
0x0000000169171FB0,                                                             
0x0000000169174798,                                                             
0x0000000169176F80,                                                             
0x0000000169179768,                                                             
0x000000016917BF50,                                                             
0x000000016917E738,                                                             
0x0000000169180F20,                                                             
0x0000000169183708,                                                             
0x0000000169185EF0,                                                             
0x00000001691886D8,                                                             
0x000000016918AEC0,                                                             
0x000000016918D6A8,                                                             
0x0};                                                                           
