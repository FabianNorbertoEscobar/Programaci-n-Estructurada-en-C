#include "encabezados.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int dividendo,divisor,cociente,resto,band1,band2;
    band1=band2=0;//banderas para tirar mensajes de error
    printf("\n\t\t COCIENTE Y RESTO \n");
    printf("\n Ingrese dos n�meros enteros positivos para calcular \n el cociente y el resto entre ellos \n\n");
    do
        {
        if(band1==1)
            printf("\n El n�mero ingresado no es un entero positivo. \n Reingr�selo: \n\a\a");
        printf("\n Dividendo: \t\t");
        scanf("%d",&dividendo);
        band1=1;
        }
    while(dividendo<0);
    do
        {
        if(band2==1)
            {
            if(divisor==0)
                printf("\n La divisi�n por cero es una indeterminaci�n matem�tica. \n Reingrese el n�mero: \n\a\a");
            else
                printf("\n El n�mero ingresado no es un entero positivo. \n Reingr�selo: \n\a\a");
            }
        printf("\n Divisor: \t\t");
        scanf("%d",&divisor);
        band2=1;
        }
    while(divisor<1);
    cociente_y_resto(dividendo,divisor,&cociente,&resto);
    printf("\n\n\n Cociente: \t %d \n\n Resto: \t %d \n\n",cociente,resto);
    getch();
    return 0;
    }
