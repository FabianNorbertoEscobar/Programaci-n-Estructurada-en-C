#include "encabezados.h"
int factorial(int n)
    {
    int f,i;
    f=1;
    for(i=1;i<=n;i++)
        f*=i;//multiplico a 1 por los sucesivos n�meros hasta el del que busco el factorial x la expansi�n del factorial
    return f;
    }
