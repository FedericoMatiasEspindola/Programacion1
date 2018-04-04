#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int vec[CANT];
    int i;

    for(i=0;i<CANT;i++)
    {
        printf("ingrese: ");
        scanf("%d", &vec[i]);
    }

    for(i=0;i<CANT;i++)
    {
        printf("\n%d", vec[i]);
    }
    return 0;
}


