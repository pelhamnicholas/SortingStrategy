CC=g++
CFLAGS=-Wall -Werror -ansi -pedantic
SDIR=src
ODIR=build
BDIR=bin

all: lab07

lab07: main.o list.o vector.o bubblesort.o selectionsort.o mergesort.o
	mkdir -p $(BDIR)
	$(CC) $(CFLAGS) $(ODIR)/*.o -o $(BDIR)/lab07

main.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/main.cpp -o $(ODIR)/main.o

list.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/list.cpp -o $(ODIR)/list.o

vector.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/vector.cpp -o $(ODIR)/vector.o

bubblesort.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/bubblesort.cpp -o $(ODIR)/bubblesort.o

selectionsort.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/selectionsort.cpp -o $(ODIR)/selectionsort.o

mergesort.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/mergesort.cpp -o $(ODIR)/mergesort.o



clean:
	rm -r $(ODIR) $(BDIR)
