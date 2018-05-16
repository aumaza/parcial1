#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10

void cargaIngreso (Ingresos ing[], int cantidad)

{
   int i;

    for(i=0; i<cantidad; i++)
{
printf("\nIngrese Id: ");
scanf("%d", &ing[i].id);
getchar();


printf("Patente: ");
fflush(stdin);
fgets(ing[i].patente, 20, stdin);


printf("Marca: ");
scanf("%d", &ing[i].marca);
getchar();

printf("Id del Propietario: ");
scanf("%d", &ing[i].propietario);
getchar();
}
system("clear");
}
