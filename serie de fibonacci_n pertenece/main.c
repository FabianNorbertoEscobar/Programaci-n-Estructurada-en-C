#include "encabezados.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n;
    printf("\n � PERTENECE A LA SERIE DE FIBONACCI ? \n");
    do
        {
        printf("\n Ingrese un n�mero natural para saber si pertenece a la serie de Fibonacci \n (debe ser un n�mero natural): \n\n\t\t");
        scanf("%d",&n);
        }
    while(n<=0);
    if(es_de_fibonacci(n))
        printf("\n El n�mero %d pertenece a la serie de Fibonacci \n\n",n);
    else
        printf("\n El n�mero %d no pertenece a la serie de Fibonacci \n\n",n);
    getch();
    return 0;
    }
