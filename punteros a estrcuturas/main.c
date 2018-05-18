#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
}dato;




int main()
{
    dato d;

    d.a=5;
    d.b='<';


    dato* pDato;
    pDato= &d;



    //printf("%d\n", &d);direccion de memoria

    printf("%d-----%c",(*pDato).a, (*pDato).b);//&pdato memoria del puntero pdato memorioa que apunta el puntero *pdato=d

    //printf("%d\n %c",d.a,d.b);


    dato l [2]={{1,'a'},{1, 'b'}};
    dato* Plista;

    Plista=1;

    int i;

   /* for (i=0;i<2;i++)

    {
        printf("%d----%c\n", (*(Plista+i)).a);//->   (pLista+i)->a

    }
    */

    printf("%d-----%c", pDato->a, pDato->b);



    return 0;
}
