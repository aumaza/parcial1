#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1

void harcodeo (Propietarios prop[])

{

int i;
    int id[]= {1,2,3,4};
    char nombre[][20]= {"Juan","Luis","Maria","Jose"};
    char tarjeta[][20]= {"111-111","222-222","333-333","444-444"};
    char direccion[][20]= {"mitre","urquiza","belgrano","alsina"};
    int est[]= {OFF,OFF,OFF,OFF};


for(i=0; i<4; i++)
{

    prop[i].id=id[i];
    strcpy(prop[i].nombre,nombre[i]);
    strcpy(prop[i].tarjeta,tarjeta[i]);
    strcpy(prop[i].direccion,direccion[i]);
    prop[i].est = est[i];


}
}
