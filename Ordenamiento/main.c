#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.c"


int main()
{
    int x[]={34,14,23,12,7};

    ordenar(x, 5);
    mostrarVector(x,5);

    return 0;


}


