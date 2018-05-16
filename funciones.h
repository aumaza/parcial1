#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int id;
    int est;
    char nombre[20];
    char tarjeta[20];
    char direccion[20];
}Propietarios;

typedef struct
{
    int id;
    int est;
    char patente[20];
    int marca;
    int propietario;
}Ingresos;

typedef struct
{
    int id;
    char marca[20];
}Marca;

typedef struct
{
    int id;
    int est;
    int marca;
    float importe;

}Egresos;

int  devolverHorasEstadia();
void menuGeneral();
void altaPropietario (Propietarios prop[], int cant);
void cargaIngreso (Ingresos ing[], int cantidad);
void cargaEgresos (Egresos egr[], int cant);
void cargaAutomovil (Marca marc[]);
void mostrarPropietarios (Propietarios prop[], int cant);
void mostrarIngresos (Ingresos ing[], int cantidad);
void mostrarEgresos (Egresos egr[], int cantidad);
void mostrarMarcas (Marca marc[]);
int  initRegProp(Propietarios prop[],int cant);
void borrarPropietario(Propietarios prop[],int cant);
void ModificarUnaPersona(Propietarios prop[],int cantidad);
int  busquedaId (Propietarios prop[], int cant);
void harcodeo (Propietarios prop[]);
void harcodeoIngreso (Ingresos ing[]);
void harcodeoEgreso (Egresos egr[]);
int pideDato ();

#endif // FUNCIONES_H_INCLUDED
