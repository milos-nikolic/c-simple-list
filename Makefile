all: clean main

main: liblist.a
	 gcc --static -L./bin -o main src/main.c -llist

liblist.a: bin/listlib.o
	 ar rs bin/liblist.a bin/listlib.o

bin/listlib.o: src/listlib.c
	 gcc -c src/listlib.c -o bin/listlib.o

clean:
	 rm bin/listlib.o bin/liblist.a main
