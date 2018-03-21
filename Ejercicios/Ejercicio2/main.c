#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[41];
    char localidad[41];

    printf("nombre");
    scanf("%s", nombre);
    fflush(stdin);
    //setbuf(stdin,NULL); sirve para windows y linux.
    printf("localidad");
    scanf("%s", localidad);

    printf("Usted se llama %s y vive en %s", nombre, localidad);

    return 0;
}
