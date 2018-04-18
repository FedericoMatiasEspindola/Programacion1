#include <stdio.h>
#include <stdlib.h>

    int main()
    {
        int flag=0,nro;
        char dato[15];

        printf("ingrese numero: ");
        fflush(stdin);
        scanf("%s",dato);
        return 0;
    }

    /* convierte una cadena
    atoi a int
    atol a long int
    atof a float
    */

    for(i=o;i<strlen(dato);i++)
    {
        if(!isdigit(dato[i]))
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        nro=atoi(dato);
    }


//convertir a cadena

char cadena[128];

sprintf(cadena,"%d %f",nro,prom);








