#include "encabezados.h"
int fibonacci(int n)//recibe el n�mero de t�rmino
    {
    if(n>2)
        return fibonacci(n-1)+fibonacci(n-2);//genero un t�rmino cualquiera
    else
        if(n==2)
            return 1;//segundo t�rmino
        else
            if(n==1)
                return 1;//primer t�rmino
            else
                if(n==0)
                    return 0;
    }
