#CC=g++
#CC=icpc
CC=CC
CFLAGS=-std=c++11
#LIBS=-lboost_filesystem -lboost_system
LIBS=
TARGET=anycast
OBJ=$(TARGET).o

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(LIBS) -o $@ $^

clean:
	rm -f $(TARGET) *.o log.*
