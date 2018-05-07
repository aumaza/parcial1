#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10

void mostrarIngresos (Ingresos ing[], int cantidad)
{
    int i;

    for(i=0; i<cantidad; i++)
    {

        printf("\n%i.ID: %d", i+1, ing[i].id);
        printf("\n%i.PATENTE: %s", i+1, ing[i].patente);
        printf("\n%i.MARCA: %d", i+1, ing[i].marca);
        printf("\n%i.PROPIETARIO: %d", i+1, ing[i].propietario);
        printf("\n==================================\n");

    }

}
