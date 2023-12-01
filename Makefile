CC = gcc
TARGET = xksuse
OBJECTS = xksuse.o

CLFAGS = -wall
LDFLAGS = -lc

all : $(TARGET)

$(TARGET) : $(OBJECTS)
        $(CC) $(LDFLAGS) -o $(TARGET) $^

.c.o:
        $(CC) $(CFLAGS) -c -o $@ $<

clean :
        rm -f $(OBJECTS) $(TARGET)    