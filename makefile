all: PROJET CLEAR EXEC

character.o: character.c character.h liste.h
	gcc -Wall -c character.c

liste.o: liste.c liste.h character.h
	gcc -Wall -c liste.c

main.o: main.c liste.h character.h
	gcc -Wall -c main.c

PROJET: main.o liste.o character.o
	gcc -Wall -o PROJET main.o liste.o character.o

CLEAR:
	rm *.o

EXEC:
	./PROJET
