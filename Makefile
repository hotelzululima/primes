CC=gcc
CFLAGS=-I.

all: primesearch mersenne


primesearch: primesearch.c primecheck.c
	$(CC) -o primesearch primesearch.c primecheck.c $(CFLAGS)

mersenne: mersenne.c primecheck.c
	$(CC) -o mersenne mersenne.c primecheck.c $(CFLAGS)
clean:
	rm -rf primesearch
	rm -rf mersenne
