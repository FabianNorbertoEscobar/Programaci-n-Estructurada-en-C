#include "header.h"
void mostrar(int a,int b)
    {
    printf("\n Primer n�mero: %d \n Segundo n�mero: %d \n",a,b);
    }
void intercambiar(int *a,int *b)
    {
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    }
