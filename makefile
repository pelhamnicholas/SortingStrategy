CC=g++
CFLAGS=-Wall -Werror -ansi -pedantic
SDIR=src
ODIR=build
BDIR=bin

all: lab07

lab07: main.o list.o bubblesort.o selectionsort.o
	mkdir -p $(BDIR)
	$(CC) $(CFLAGS) $(ODIR)/*.o -o $(BDIR)/lab07

main.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/main.cpp -o $(ODIR)/main.o

list.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/list.cpp -o $(ODIR)/list.o

bubblesort.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/bubblesort.cpp -o $(ODIR)/bubblesort.o

selectionsort.o:
	mkdir -p $(ODIR)
	$(CC) $(CFLAGS) -c $(SDIR)/selectionsort.cpp -o $(ODIR)/selectionsort.o

clean:
	rm -r $(ODIR) $(BDIR)
