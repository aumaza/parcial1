#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define Off 1
#define TAM 4
#define TAMANIO 10


void ModificarUnaPersona(Propietarios prop[],int cantidad)
{
  int i;
  int index;

  i=PedirEntero("Ingrese el id del propietario");
  index = buscarPorId(Propietarios prop,i,cantidad);
  if(index!=-1)
    {
        Propietarios prop[index].id = index+1;
        fflush(stdin);
        printf("\nIngrese Numero de tarjeta: ");
        fgets(prop[index].tarjeta, 20, stdin);
        fflush(stdin);

    }
    else
    {
        printf("Usuario no encontrado!!!");
    }
}
