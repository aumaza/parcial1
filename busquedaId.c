#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4

int busquedaId (Propietarios prop[], int cant)

{
int i;
int dato;
char flag='F';

printf("\nIngrese el ID a Buscar: ");
scanf("%d", &dato);
getchar();

i=0;

while ((flag=='F') && (prop[i].id<cant))
{
if(prop[i].id == dato)
{
    flag = 'V';
}
i++;
}

if(flag=='F')
{

printf("\nEl ID no existe");
printf("\n=========================================\n");

}

else if(flag=='V')
{
printf("\nEl ID existe y pertenece a: %s", prop[i].nombre);
printf("\n=========================================\n");
}
    return dato;
}
