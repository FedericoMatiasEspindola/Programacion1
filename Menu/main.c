#include <stdio.h>
#include <stdlib.h>
#include "Funcion.h"


int main()
{
    int opcion;
    int seguir=0;

    do
    {
        eEmpleado gente[50];

        inicializarEmpleados(gente, 50);

        switch(menu())
        {
        case 1:
            printf("1-Alta\n");
            system("pause");

            break;
        case 2:
            printf("2-Baja\n");
            system("pause");
            break;
        case 3:
            printf("3-Modificacion\n");
            system("pause");
            break;
        case 4:
            printf("4-Listar\n");
            system("pause");
            break;
        case 5:
            printf("5-Ordenar\n");
            system("pause");
            break;
        case 6:
           seguir=1;

            break;
        default:
            printf("Opcion Incorrecta\n");
            system("pause");
            break;
        }

    system("cls");

    }while(seguir!=1);
}







/*
Limpiar pantalla
Muestro un menu


Menu:
1-alta
2-baja
3-modificacion
4-listar
5-ordenar
6-salir

*/
