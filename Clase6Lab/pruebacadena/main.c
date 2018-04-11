#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
int main()
{
   char cadena[50];

    printf("ingrese nombre: ");
    scanf("%[^\n]", cadena);
    printf("el nombre ingresado es: %s \n", cadena);

    return 0;
}
