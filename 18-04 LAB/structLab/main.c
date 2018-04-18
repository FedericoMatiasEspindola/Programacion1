#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia,mes,anio;
}eFecha;

typedef struct
{
    char nombre[21];
    int legajo;
    float sueldo;
    char sexo;
    eFecha fechaNac;
}eEmpleado;

// %[^\n]
int main()
{
    eEmpleado emp;
    emp.nombre;
    emp.legajo;
    emp.fechaNac.dia;

    return 0;
}


//define CANT
// eEmpleado emp[CANT], aux;
//ordenamiento descendiente - ordenamiento de 2 criterios
for(i=0;i<CANT-1;i++)
{
    for(j=i+1;j<CANT;j++)
    {
        if(emp[i].sueldo<emp[j].sueldo)
        {
            aux=emp[i];
            emp[i]=emp[j];
            emp[j]=aux;
        }
        else
        {
            if(emp[i].sueldo==emp[j].sueldo)
            {
                if(strcmp(emp[i].nombre,emp[j].nombre)>0)
                {
                    aux=emp[i];
                    emp[i]=emp[j];
                    emp[j]=aux;
                }
            }
        }
    }
}









