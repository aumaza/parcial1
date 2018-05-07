#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10



void mostrarPropietarios (Propietarios prop[], int cant)
{

    int i;

    for(i=0; i<cant; i++)
    {

        printf("\n%i.ID: %d", i+1, prop[i].id);
        printf("\n%i.ESTADO: %d", i+1, prop[i].est);
        printf("\n%i.NOMBRE: %s", i+1, prop[i].nombre);
        printf("\n%i.TARJETA: %s", i+1, prop[i].tarjeta);
        printf("\n%i.DIRECCION: %s", i+1, prop[i].direccion);
        printf("\n==================================\n");

    }

}
