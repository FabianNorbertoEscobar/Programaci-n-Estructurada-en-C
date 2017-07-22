#include "encabezados.h"
int es_de_fibonacci(int n)
    {
    if(n==1)
        return 1;
    int x,y,z;
    x=y=1;//primeros dos t�rminos
    do
        {
        z=x+y;//genero un nuevo t�rmino y luego actualizo los �ltimos dos t�rminos
        x=y;
        y=z;
        }
    while(z<n);
    return (n==z)?1:0;
    }
