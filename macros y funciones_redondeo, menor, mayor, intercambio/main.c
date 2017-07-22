#include "header.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");

    printf("\n\n Redondear flotante con 3 macros diferentes \n");
    printf("\n REDONDEO de (%.2f): \t %d",5.25,REDONDEO_1(5.25));
    printf("\n REDONDEO de (%.2f): \t %d",5.5,REDONDEO_2(5.5));
    printf("\n REDONDEO de (%.2f): \t %d",5.75,REDONDEO_3(5.75));

    int x=5,y=3;
    printf("\n\n Menor entre dos n�meros enteros, pas�ndolos como argumento de fn \n");
    printf("\n 1er n�nero: %d \t 2do n�mero: %d \t Menor: %d \n",x,y,menor(&x,&y));
    printf("\n\n Menor entre dos n�meros enteros, usando una macro \n");
    printf("\n 1er n�nero: %d \t 2do n�mero: %d \t Menor: %d \n",x,y,MENOR(&x,&y));

    printf("\n\n Intercambiar dos enteros con una funci�n que los recibe como punteros \n");
    printf("\n Antes del intercambio: \t 1er n�nero: %d \t 2do n�mero: %d \n",x,y);
    intercambio(&x,&y);
    printf("\n Despu�s del intercambio: \t 1er n�nero: %d \t 2do n�mero: %d \n",x,y);

    printf("\n\n Intercambiar dos enteros con una macro que los recibe como punteros \n");
    printf("\n Antes del intercambio: \t 1er n�nero: %d \t 2do n�mero: %d \n",x,y);
    INTERCAMBIO(&x,&y);
    printf("\n Despu�s del intercambio: \t 1er n�nero: %d \t 2do n�mero: %d \n",x,y);

    getch();
    return 0;
    }
