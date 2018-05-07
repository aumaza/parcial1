#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10

void mostrarMarcas (Marca marc[])
{
    int i;

    for(i=0; i<5; i++)
    {

        printf("\n%i.ID: %d", i+1, marc[i].id);
        printf("\n%i.MARCA: %s", i+1, marc[i].marca);
        printf("\n==================================\n");

    }

}
