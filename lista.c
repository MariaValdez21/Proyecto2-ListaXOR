#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct nodo{
	int elemento;
	struct nodo *ant_sig;
} node;

// Retornar el valor XOR de las direcciones de los nodos
node *XOR(node *a, node *b){
	return (node *)((uintptr_t)(a) ^ (uintptr_t)(b));
}

// add_front: añade newp al frente de listp
void add_front(node **head, int valor){
	node *newp = (node *)malloc(sizeof(node)), *sig = NULL;
	
	newp->elemento = valor;
	newp->ant_sig = XOR(*head, NULL);
	if (*head){
		sig = XOR((*head)->ant_sig, NULL);
		(*head)->ant_sig = XOR(newp, sig);
	}
	*head = newp;
}

// add_end añade newp al final de la listp
void add_end(node *listp, int valor){
	node *newp = (node *)malloc(sizeof(node));
	node *act = listp, *ant = NULL, *sig = NULL;

	newp->elemento = valor;
	while (act){
		sig = XOR(ant, act->ant_sig);
		ant = act;
		act = sig;
	}
	act = XOR(ant, act->ant_sig);
	newp->ant_sig = XOR(listp, ant);
	act = newp;
}


// insert: inserta nuevo valor ordenado en listp
node *insert(node *listp, int valor){
	node *newp = (node *)malloc(sizeof(node));
	node *act = listp, *ant = NULL, *sig = NULL;

	while (act && act->elemento < valor){
		sig = XOR(ant, act->ant_sig);
		ant = act;
		act = sig;
	}
	while (act){
                sig = XOR(ant, act->ant_sig);
                act->elemento = sig->elemento;
                act->ant_sig = sig->ant_sig;
                ant = act;
                act = sig;
        }
	newp->ant_sig = XOR(listp, ant);
	newp->elemento = ant->elemento;
	ant = newp;
}

// lookup: busca un numero en la lista
node *lookup(node *listp, int valor){
	node *act = listp, *ant = NULL, node *sig = NULL;

	while (listp){
		sig = XOR(ant, act->ant_sig);
		ant = act;
		act = sig;
		if (act->elemento == valor)
			return act;
	}
	return NULL;
}

// in_counter: cuenta los elementos en la lista
int in_counter(node *listp){
	node *sig = listp, *ant = NULL, node *sig = NULL;
	int i = 0;

	while (act){
		sig = XOR(ant, act->ant_sig);
		ant = act;
		act = sig;
		i++;
	}
	return i; 
}

// print: muestra los elementos en listp
void print(node *listp){
	node *act = listp, *ant = NULL, *sig = NULL;

	printf("-->");
	while (act){
		printf("%d-->",act->elemento);
		sig = XOR(ant, act->ant_sig);
		ant = act;
		act = sig;
	}
	printf("NULL\n");
}

// free_all: libera todos los elementos de listp
node *free_all(node *listp){
	node *act = *listp, *ant = NULL, *sig = NULL;

	while (act){
		sig = XOR(ant, act->ant_sig);
		ant = act;
		act = sig;
		free(ant);
	}
}

// del_item: elimina la primera ocurrencia de valor
void del_item(node *listp, int valor){
	int i = 0;
	node *act = *listp, *ant = NULL, *sig = NULL;

	while (act && act->elemento != valor){
		sig = XOR(ant, act->ant_sig);
		ant = act;
		act = sig;
        }
	while (act){
		sig = XOR(ant, act->ant_sig);
		act->elemento = sig->elemento;
		act->ant_sig = sig->ant_sig;
		ant = act;
		act = sig;
	}
	free(ant);
}

// is_empty: retorna 1 si esta vacia 0 en caso contrario
int is_empty(node *listp){
	if (!listp)
		return 1;
	return 0;
}
