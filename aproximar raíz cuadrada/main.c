#include "encabezados.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    float x,tol,r;
    printf("\n\t\t RA�Z CUADRADA \n");
    do
        {
        printf("\n Ingrese un n�mero positivo para aproximar su ra�z cuadrada: \n\n\t\t");
        scanf("%f",&x);
        }
    while(x<=0);//no se puede calcular ra�ces de negativos a menos que se trabaje con complejos--->>>>>>no es el caso
    do
        {
        printf("\n Ingrese la tolerancia de error permitida: \n\n\t\t");
        scanf("%f",&tol);
        }
    while(tol<=0);//no tiene sentido que sea negativa ni cero porque no habr�a error y estoy aproximando
    r=raiz(x,tol);
    printf("\n La ra�z cuadrada de %f es %f \n\n",x,r);
    getch();
    return 0;
    }
