CC = gcc
CFLAGS = -Wall

myprogram: main.c header.h functions.c
	$(CC) $(CFLAGS) -o myprogram main.c functions.c

clean:
	rm -f myprogram
