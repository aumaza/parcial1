#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define ON 0
#define OFF 1

void borrarPropietario(Propietarios prop[],int cant)
{

int index;



    index = busquedaId(prop,cant);

   if(index !=-1)
    {
        prop[index].est=ON;
        printf("\nEL REGISTRO HA SIDO ELIMINADO.-\n\n\n\n");
    }

    else
    {
      printf("PROPIETARIO NO ENCONTRADO!!!\n");

     }

}
