#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTROS 4


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
