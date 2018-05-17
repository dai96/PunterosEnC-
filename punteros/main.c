#include <stdio.h>
#include <stdlib.h>

//void intercambiar(int num1, int num2);
void intercambiarP(int *num1, int *num2);
void ponerEnCero(int *num);



int main()
{
    int edadUno;
    int edadDos;

    edadUno=22;
    edadDos=99;

    ponerEnCero////LLLAMAR A LA FUNCIOOOON

    //intercambiar (edadUno, edadDos);
    intercambiarP (&edadUno, &edadDos);

    printf("\n edad 1: %d ", edadUno);
    printf("\n edad 2: %d ", edadDos);




    return 0;
}



/**void intercambiar(int num1, int num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}
*/

void intercambiarP (int *num1, int *num2)
{
    int aux;
    aux=*num1;
    *num1=*num2;
    *num2=aux;
}


void ponerEnCero(int *num)
{
    *num=0;
}
