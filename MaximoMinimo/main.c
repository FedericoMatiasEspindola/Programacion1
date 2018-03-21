#include <stdio.h>
#include <stdlib.h>
//#include <limits.h>

    void main(void)
{
    int i;
    int suma = 0;
    int max; //= INT_MIN; // constante definida en limits.h
    int min; //= INT_MAX; // constante definida en limits.h
    float prom;


    for(i=0; i<10;i++)
    {
    int aux;
    scanf("%d",&aux);
    suma=suma+aux;

    if(i==0)
    {
        max=aux;
        min=aux;
    }
    if(aux>max)
    {
        max = aux;
    }
    if(aux<min)
    {
        min = aux;
    }
    }
    prom=(float)suma/i;
    //casteo float
    printf("La suma es:%d\n",suma);
    printf("El maximo es:%d\n",max);
    printf("El minimo es:%d\n",min);
    printf("El promedio es:%.2f", prom);



}

