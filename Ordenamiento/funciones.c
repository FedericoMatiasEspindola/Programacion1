void ordenar(int vec[], int tam)
{
    for(int i=0; i<tam-1; i++)
    {
        int aux;
        for(int j=i+1; j<tam; j++)
        {

            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }
    }


}

void mostrarVector (int vec[], int tam)
{
    for (int i=0; i<tam; i++)
    printf("%d ", vec[i]);
    printf("\n\n");
}

