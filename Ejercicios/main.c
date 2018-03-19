#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int altura;
    int perimetro;
    float superficie;
    printf("ingrese la base del triangulo equilatero: ");
    scanf("%d", &base);
    printf("ingrese altura del triagulo equilatero: ");
    fflush(stdin);
    scanf("%d", &altura);
    perimetro=base*3;
    superficie=(float)base*altura/2;
    printf("el perimetro del triangulo equilatero es: %d y la superficie es: %.1f",perimetro,superficie);


    return 0;
}
