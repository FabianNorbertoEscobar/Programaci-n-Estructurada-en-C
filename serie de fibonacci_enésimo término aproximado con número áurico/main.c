#include "encabezados.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n;
    float fn;
    printf("\n EN�SIMO T�RMINO APROXIMADO DE LA SERIE DE FIBONACCI \n");
    do
        {
        printf("\n Ingrese el n�mero del t�rmino de la serie de Fibonacci que desea aproximar: \n\n\t\t");
        scanf("%d",&n);
        }
    while(n<1);
    fn=enesimo_termino_aprox_serie_fibonacci(n);
    printf("\n El t�rmino %d de la serie de Fibonacci es aproximadamente %f \n\n",n,fn);
    getch();
    return 0;
    }

