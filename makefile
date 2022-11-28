CFAGS = -Wall -g

all: lista.o proy2.o lista.h
	gcc $(CFLAGS) proy2.o matriz.o -o proy2

proy1.o: proy2.c
	gcc $(CFLAGS) proy2.c -o proy2.o -c

matriz.o: lista.c lista.h
	gcc $(CFLAGS) lista.c -o lista.o -c

clear:
	rm -f *.oL
