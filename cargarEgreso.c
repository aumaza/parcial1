#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10

void cargaEgresos (Egresos egr[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        printf("\nID: ");
        scanf("%d", &egr[i].id);
        getchar();

        printf("\nId Marca: ");
        scanf("%d", &egr[i].id);
        getchar();

        printf("\nIngrese el Importe: ");
        scanf("%f", &egr[i].importe);
    }
system("clear");
}
