#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1

void borrarPropietario(Propietarios prop[],int cant)
{
   int i;
   int x;
   int ch;
   int ok;
   //int LIBRE=0;


   do{
      printf("\nIngrese el ID del Propietario a borrar: ");
      fflush(stdout);
      if ((ok = scanf("%d", &x)) == EOF)
         return EXIT_FAILURE;


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
   }while (!ok);
printf("\n===============================\n");


   if(prop!=NULL)
        {
        prop[cant].est=ON;
        }
}
