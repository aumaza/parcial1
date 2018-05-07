#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10

void cargaAutomovil (Marca marc[])
{
    int i;
    int cant;

    printf("\nIngrese cantidad de Marcas: ");
    scanf("%d", &cant);
    getchar();

    for(i=0; i<cant; i++)
    {
        printf("\nId: ");
        scanf("%d", &marc[i].id);
        getchar();

        printf("\nMarca: ");
        fgets(marc[i].marca, 20, stdin);
    }
system("clear");
}
