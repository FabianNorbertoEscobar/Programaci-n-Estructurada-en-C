#include "encabezados.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n;
    printf("\n N�MEROS PERFECTOS, DEFICIENTES Y ABUNDANTES \n");
    do
        {
        printf("\n Ingrese un n�mero natural para conocer su tipo de acuerdo \n a la sumatoria de sus divisores: \n\n\t");
        scanf("%d",&n);
        }
    while(n<=0);
    perfecto_deficiente_abundante(n);
    getch();
    return 0;
    }
