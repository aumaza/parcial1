#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


#define TAMANIO 10


void mostrarEgresos (Egresos egr[], int cantidad)
{
   int i;

    for(i=0; i<cantidad; i++)
    {

        printf("\n%i.ID: %d", i+1, egr[i].id);
        printf("\n%i.ID Marca: %d", i+1, egr[i].marca);
        printf("\n%i.IMPORTE: %.2f", i+1, egr[i].importe);
        printf("\n==================================\n");

    }

}
