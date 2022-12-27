#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

/* Estructura de los nodos */
typedef struct nodo{
    int elemento;
    struct nodo *ant_sig; /* XOR del nodo siguiente con el anterior */
}nodo_t;

/* Estructura de la lista */
typedef struct lista{
    nodo_t *cabeza, *cola;
}lista_t;

/* Retorna el valor XOR de las direcciones de los nodos */
nodo_t* XOR(nodo_t *a, nodo_t *b);
// Funcion que guarda memoria y crea un nodo para la lista
nodo_t* crearNodo(nodo_t *Nodo, int e);
// Crea una nueva lista
void crearLista(lista_t *Lista);
// Retorna 1 si la lista esta vacia o 0 si no lo esta
int esVacia(lista_t *Lista);
// Inserta un nodo al inicio de la lista XOR y lo hace la nueva cabeza de la lista
void insertarPrincipio(lista_t *Lista, int e);
// Inserta un elemento al final de la lista
void insertarFinal(lista_t *Lista, int e);
// Muestra la lista de inicio a fin
void listarInicioAFinal(lista_t Lista);
// Muestra la lista desde el final hasta el inicio
void listarFinalAInicio(lista_t Lista);
// Busca la primera instancia de un elemento en la lista
int buscar(lista_t Lista, int e);
