CC=gcc
CFLAGS=-c -Wall

all:makeRun

makeRun: main.o matrisoperations.o 
	$(CC) main.o matrisoperations.o -o makeRun

main.o: main.c
	$(CC) $(CFLAGS) main.c

matrisoperations.o: matrisoperations.c matrisoperations.h
	$(CC) $(CFLAGS) matrisoperations.c
	
clean:
	 rm -f *~ *.o makeRun
