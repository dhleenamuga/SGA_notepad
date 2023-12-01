CC = gcc
TARGET = xksuse
OBJECTS = xksuse.o

CFLAGS = -Wall -W
LDFLAGS = -lc

all : $(TARGET)

clean :
	rm -f $(OBJECTS) $(TARGET)    
	
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^