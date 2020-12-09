#CC=g++
#CC=icpc
CC=CC
CFLAGS=-std=c++11
PATH_LIBS=${BOOST_ROOT}/lib
LIBS=-lboost_filesystem -lboost_system
TARGET=chkfile
OBJ=$(TARGET).o

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

$(TARGET): $(OBJ)
	#$(CC) $(CFLAGS) -L$(PATH_LIBS) $(LIBS) -o $@ $^
	#$(CC) $(CFLAGS) -o $@ $^
	$(CC) $(CFLAGS) $(LIBS) -o $@ $^

clean:
	rm -f $(TARGET) *.o log.*
