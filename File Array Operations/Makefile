CC=gcc
CFLAGS=-c -Wall

all:run

run: main.o islemler.o 
	$(CC) main.o islemler.o -o run

main.o: main.c
	$(CC) $(CFLAGS) main.c

matrisoperations.o: islemler.c islemler.h
	$(CC) $(CFLAGS) islemler.c
	
clean:
	 rm -f *~ *.o run
