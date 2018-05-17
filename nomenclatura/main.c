#include <stdio.h>
#include <stdlib.h>

int main()
{

  //punteros
    //valor y direccion de memoria ram
    int *punteroNumero;
    int numero;
    int numeroDos;
    numero=66;
    //&numeroDos=&numero;LOLNO
    numeroDos=&numero;
    punteroNumero=&numero;///////ASIGNACION DE DIRECCION DE MEMORIA DE VARIABLE A PUNTERO
    //punteroNumero=&numeroDos;??
    numeroDos=*punteroNumero;//PARA QUE MUESTRE EL 66 en ?
    printf("\n a- %d",numeroDos);//asignacion de memoria

    punteroNumero=*punteroNumero;//asignacion de valor
    printf("\n b- %d",numeroDos);//??????

    //*punteroNumero=&numero;NOLOL
    //*punteroNumero=55;NOLOL
    punteroNumero=&numero;
    printf("%d", numero);
    printf("\n\t%d", numeroDos);
    //printf("%d",*punteroNumero);
    printf("\n%d",&numero);//IGUAL A ABAJO ---------EL %p es la direccion de puntero expresado en hexa.
    printf("\nd- %p",punteroNumero);//direcion de memprioa de variableIGUAL A ARRIBA ---osea el tamañano ya lo dice, lo que necestia es donde empieza
    printf("\ne- %p",&punteroNumero);//direcion de memoria del punteroEl & es para direccion de memoria
    printf("\n\tf- %d",*punteroNumero);//valor que tiene adentro66------- sin * da direccion creo"""



}
