#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre [11]="Minombre";
    char *apellido="Miapellido";//es casi lo mismo
    char *puntero;

    puntero=nombre;



    printf("%s",nombre);
    printf("\n%s",apellido);

    printf("\n%s",puntero);//silepibngoasteriscoexplota

    int i;

    for (i=0;*(apellido+i)!='\0';i++)//;i<200; es basura//Es para recorrer el punterillo
     {
        if (*(apellido+i)!='\0')
        {
            printf("\n%c",*(apellido+i));
        }
    }


    /**for (i=0;i<11;i++)
    {
        if (*(apellido+i)!='\0')
        {
            printf("\n%c",*(apellido+i));
        }
    }*/


    return 0;
}
