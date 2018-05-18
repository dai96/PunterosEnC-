#include <stdio.h>
#include <stdlib.h>


int cargarArray (int *, int);

void mostrarArray (int *array, int tam);


int main()
{
    int vector [3];




  //  printf("%d\n", vector);//This is the same and s better
  //  printf("%d\n", &vector[0]);
  //  printf("%d\n", &vector);

  if (cargarArray(vector,3))
  {
      printf("carga exitosa!!!");
  }
  else
  {
      printf("error al cargar los datos");
  }


 mostrarArray ( vector, 3);



    return 0;
}



int cargarArray (int *array, int tam)
{
    int i;
    int ret=0;
    if(array!=NULL)
    {
        ret=1;
        for (i=0;i<tam;i++)
        {
            printf("ingrese un numero: ");
            scanf("%d",array+i);
        }
    }

}

void mostrarArray (int *array, int tam)
{
    int i;

    for (i=0;i<tam;i++)
    {
        printf("\n %d",*(array+i));


    }



}
