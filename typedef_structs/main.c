#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void mostrarEmpleado(eEmpleado);

typedef struct
 {
     char nombre[20];
     int legajo;
     float sueldo;
     char sexo;
 }eEmpleado;


int main()
{
    eEmpleado unEmpleado;

    //eEmpleado otroEmpleado;

    //otroEmpleado = unEmpleado;


/*
    unEmpleado.legajo = 1234;
    strcpy (unEmpleado.nombre, "Juan" );
    unEmpleado.sueldo = 5000.50;
    unEmpleado.sexo = 'M';
*/
    printf("Ingrese Nombre: ");
    gets(unEmpleado.nombre);
    printf("Ingrese Legajo: ");
    scanf("%d", &unEmpleado.legajo);
    printf("Ingrese Sueldo: ");
    scanf("%f", &unEmpleado.sueldo);
    printf("Ingrese Sexo: ");
    fflush (stdin);
    scanf("%c", &unEmpleado.sexo);

    mostrarEmpleado(unEmpleado);

/*
    printf("Nombre: %s \n", unEmpleado.nombre);
    printf("Legajo: %d \n", unEmpleado.legajo);
    printf("Sueldo: %.2f \n", unEmpleado.sueldo);
    printf("Sexo: %c \n", unEmpleado.sexo);
*/
    return 0;
}

void mostrarEmpleado(eEmpleado emp)
{
    printf("Nombre: %s \n", emp.nombre);
    printf("Legajo: %d \n", emp.legajo);
    printf("Sueldo: %.2f \n", emp.sueldo);
    printf("Sexo: %c \n", emp.sexo);
}










