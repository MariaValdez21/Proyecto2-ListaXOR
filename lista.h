#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct nodo{
        int elemento;
        struct nodo *ant_sig;
} node;

// Retornar el valor XOR de las direcciones de los nodos
node *XOR(node *a, node *b);
// add_front: añade newp al frente de listp
void add_front(node **head, int valor);
// add_end añade newp al final de la listp
void add_end(node *listp, int valor);
// insert: inserta newp ordenado en listp
void insert(node *listp, int valor);
// lookup: busca un nombre en listp
node *lookup(node *listp, int valor);
// in_counter: cuenta los elementos en listp
int in_counter(node *listp);
// print: muestra los elementos en listp
void print(node *listp);
// free_all: libera todos los elementos de listp
void free_all(node **head);
// del_item: elimina la primera ocurrencia de valor
void del_item(node *listp, int valor);
// is_empty: retorna 1 si esta vacia 0 en caso contrario
int is_empty(node *listp);
