#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"

int menu()
{
    int opcion;

    printf("1-Alta\n");
    printf("2-Baja \n");
    printf("3-Modificacion \n");
    printf("4-Listar \n");
    printf("5-Ordenar \n");
    printf("6-Esc Salir \n");
    printf("\nIngrese opcion\n");
    scanf("%d", &opcion);

    return opcion;
}

void inicializarEmpleados(eEmpleado vec[],int tam)
{
    int i;
    for(i=0;i < tam; i++)
    {
        vec[i].isEmpty=1;
    }

}


int buscarLibre(eEmpleado vec[],int tam)
{
    int indice=-1;
    int i;
    for(i=0;i < tam; i++)
    {
        if(vec[i].isEmpty==1)
        {
            indice=1;
            break;
        }
    }
    return indice;

}


int buscarEmpleado(eEmpleado vec[],int tam, int legajo)
{





}






