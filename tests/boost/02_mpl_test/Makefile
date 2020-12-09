#CC=g++
#CC=icpc
CC=CC
CFLAGS=-std=c++11
LIBS=
NAME=mplTest
OBJ=${NAME}.o

${OBJ}: ${NAME}.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) *.o log.*
