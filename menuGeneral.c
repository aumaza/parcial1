#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

#define TAM 4
#define TAMANIO 10


void menuGeneral()
{

Propietarios prop[TAM];
Ingresos ing[TAMANIO];
Egresos egr[TAMANIO];
Marca marc[4];

int ch;
int ok;
int opc;

//initRegPer(per,TAM);

do
{
printf("\nCARGA DE DATOS");
printf("\n===============================");
printf("\n1. Cargar Propietario");
printf("\n2. Cargar Ingreso");
printf("\n3. Cargar Egreso");
printf("\n4. Cargar Marca");
printf("\n===============================");
printf("\nLISTAR DATOS");
printf("\n===============================");
printf("\n5. Listar Propietarios");
printf("\n6. Listar Ingresos");
printf("\n7. Listar Marcas");
printf("\n===============================");
printf("\nADMINISTRACION DE DATOS");
printf("\n===============================");
printf("\n8. Baja Propietario");
//printf("\n5. Ordenar por Edades");
//printf("\n6. Rango de Edades");
printf("\n9. Salir");
printf("\n===============================\n");
//printf("\nOpcion: ");
//scanf("%d", &opc);

   do{
      printf("\nOpcion: ");
      fflush(stdout);
      if ((ok = scanf("%d", &opc)) == EOF)
         return EXIT_FAILURE;


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
   }while (!ok);
printf("\n===============================\n");



switch (opc)
{
case 1: initRegProp(prop,TAM);
        altaPropietario(prop,TAM); break;
case 2: cargaIngreso(ing,TAMANIO); break;
case 3: cargaEgresos(egr,TAMANIO); break;
case 4: cargaAutomovil(marc); break;
case 5: mostrarPropietarios(prop,TAM); break;
case 6: mostrarIngresos(ing,TAMANIO); break;
case 7: mostrarMarcas(marc); break;
case 8: borrarPropietario(prop,TAM); break;
}
}while(opc!=9);

printf("\nHA DECIDIDO SALIR.\nHASTA LUEGO.\n");
printf("\n===============================\n");
}
