#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;


typedef struct
 {
     char nombre[20];
     int legajo;
     float sueldo;
     char sexo;
     eFecha fechaIngreso;
     int isEmpty;
 }eEmpleado;

int menu();
void inicializarEmpleados(eEmpleado vec[],int tam);
int buscarLibre(eEmpleado vec[],int tam);
int buscarEmpleado(eEmpleado vec[],int tam, int legajo);

#endif // FUNCIONES_H_INCLUDED
