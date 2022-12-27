#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include "lista.h"

// Programa de testeo
int main(void){
    lista_t lista1, lista2;

    crearLista(&lista1);
    crearLista(&lista2);

    if (esVacia(&lista1))
        printf("La lista esta vacia\n");
    else 
        printf("La lista NO esta vacia\n");

    if (esVacia(&lista2))
        printf("La lista esta vacia\n");
    else 
        printf("La lista NO esta vacia\n");

    insertarFinal(&lista1, 5);
    insertarFinal(&lista2, 3);
    insertarPrincipio(&lista1, 15);
    insertarFinal(&lista2, 9);
    insertarPrincipio(&lista1, 10);
    insertarPrincipio(&lista2, 12);
    insertarPrincipio(&lista1, 50);
    insertarPrincipio(&lista2, 6);
    insertarFinal(&lista1, 25);
    insertarPrincipio(&lista2, 15);


    if (esVacia(&lista1))
        printf("La lista esta vacia\n");
    else 
        printf("La lista NO esta vacia\n");

    if (esVacia(&lista2))
        printf("La lista esta vacia\n");
    else 
        printf("La lista NO esta vacia\n");

    listarInicioAFinal(lista1);
    printf("\n");
    listarInicioAFinal(lista2);
    printf("\n");
    listarFinalAInicio(lista1);
    printf("\n");
    listarFinalAInicio(lista2);

    buscar(lista1, 25);
    buscar(lista2, 9);
    buscar(lista1, 3);
    buscar(lista1, 50);
   
    return 0;
}