#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10


void altaPropietario (Propietarios prop[], int cant)
{
int i;


for(i=0; i<cant; i++)
{
printf("\nIngrese Id: ");
scanf("%d", &prop[i].id);
getchar();


printf("Nombre Propietario: ");
fflush(stdin);
fgets(prop[i].nombre, 20, stdin);


printf("Ingrese Tarjeta: ");
fflush(stdin);
fgets(prop[i].tarjeta, 20, stdin);

printf("Ingrese Direccion: ");
fflush(stdin);
fgets(prop[i].direccion, 20, stdin);
}
system("clear");
}
