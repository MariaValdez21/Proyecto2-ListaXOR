CFAGS = -Wall -g

all: list.o proy2.o list.h
	gcc $(CFLAGS) proy2.o matriz.o -o proy2

proy1.o: proy2.c
	gcc $(CFLAGS) proy2.c -o proy2.o -c

matriz.o: list.c list.h
	gcc $(CFLAGS) list.c -o list.o -c

clear:
	rm -f *.oL
