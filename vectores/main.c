#include <stdio.h>
#include <stdlib.h>

void mostrar(int *puntero, int cantidad);

int main()
{
    int numeros [3];
    int *puntero;
    int aux=333;
    puntero=numeros;
    numeros[0]=9;
    numeros[1]=99;
    numeros [2]=999;
    printf("\nPuntero : %p %d",puntero,puntero);
    printf("\nPuntero : %p %d",puntero,*puntero-2);
    printf("\nPuntero : %p %d",puntero,*(puntero-2));
    printf("\nPuntero : %p %d",puntero,*puntero+1);//muestra 9+1
    printf("\nPuntero : %p %d",puntero,*(puntero+2));//muestra 999
    printf("\nPuntero : %p %d",puntero,puntero+3);
    printf("\nPuntero : %p %d",puntero,*(puntero+4));//medioaux D:
    printf("\npunterodenumer: %d  %p ",numeros,numeros);

    mostrar(numeros, 3);
    return 0;
}

void mostrar(int *puntero, int cantidad)
{
    int i;
    for (i=0;i<cantidad;i++)
    {
        //printf("\nNumero uno: %d",puntero[i]);// si era *puntero[i]NO PORQUE LA DIRECCION DE MEMORIA NO TIENE DIVISIONES DE ARRAY
        printf("\nNumero uno: %d",*(puntero+ i));//sin * va con si va probrar, es un re lio ,puntero+ i para ver direccion
    }
}
