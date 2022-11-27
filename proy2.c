#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct nodo{
        int elemento;
        struct nodo *ant_sig;
} node;

/*
// New_item: Crea un nuevo elemento a partir del nombre y un valor
Node *new_item(char *name, int value);
// add_front: añade newp al frente de listp
Node *add_front(Node *listp, Node *newp);
// add_end añade newp al final de la listp
Node *add_end(Node *listp, Node *newp);
// insert: inserta newp ordenado en listp
Node *insert(Node *listp, Node *newp);
//lookup: busca un nombre en listp
Node *lookup(Node *listp, char *name);
// in_counter: cuenta los elementos en listp
int in_counter(Node *listp);
// print: muestra los elementos en listp
void print(Node *listp);
// free_all: libera todos los elementos de listp
Node *free_all(Node *listp);
// del_item: elimina la primera ocurrencia de name
Node *del_item(Node *listp, char *name);
// is_empty: retorna 1 si esta vacia 0 en caso contrario
int is_empty(Node *listp);
*/

void main(){
	node *list = NULL;

	add_front(&list, 1);
	add_front(&list, 2);
	add_front(&list, 3);
	add_end(list, 4);
	add_end(list, 5);
	add_end(list, 6);

	print(list);
}
