#include "encabezados.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int m,n,comb;
    printf("\n \t\t C�LCULO DEL N�MERO COMBINATORIO C ( m ; n )\n");
    printf("\n m debe ser mayor o igual a n por definici�n del n�mero combinatorio \n");
    printf("\n (si los n�meros m y n ingresados no cumplen �sta condici�n, \n deber�n volver a ser ingresados) \n\n");
    do
        {
        do
            {
            printf("\n\n Ingrese el n�mero m entero no negativo:\n\n\t\t");
            scanf("%d",&m);
            }
        while(m<0);
        do
            {
            printf("\n\n Ingrese el n�mero n entero no negativo:\n\n\t\t");
            scanf("%d",&n);
            }
        while(n<0);
        if(m<n)
            printf("\n No se cumple la definici�n del n�mero combinatorio \n");
        }
    while(m<n);
    comb=combinatorio(m,n);
    printf("\n\n El n�mero combinatorio C ( %d ; %d ) es %d \n\n",m,n,comb);
    getch();
    return 0;
    }
