#include "encabezados.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int factor1,factor2,prod;
    printf("\n MULTIPLICACI�N RUSA \n");
    printf("\n Ingrese dos n�meros enteros positivos para calcular su producto \n mediante el m�todo de multiplicaci�n rusa \n");
    do
        {
        printf("\n Factor 1: \t\t");
        scanf("%d",&factor1);
        }
    while(factor1<0);
    do
        {
        printf("\n Factor 2: \t\t");
        scanf("%d",&factor2);
        }
    while(factor2<0);
    prod=multiplicacion_rusa(factor1,factor2);
    printf("\n El producto es %d \n\n",prod);
    getch();
    return 0;
    }
