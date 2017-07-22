#include "encabezados.h"
float coseno(float x,float tol)
    {
    int i,signo;
    float cos,ult;//ult=�ltimo t�rmino
    i=1;
    cos=ult=1;//primer t�rmino
    signo=-1;//comienzo con signo negativo porque el segundo t�rmino es negativo
    while(fabs(ult)>tol)//deja de ciclar cuando el m�dulo del �ltimo t�rmino no sea mayor que la tolerancia
        {//fabs calcula el m�dulo de un flotante
        ult=ult*x*x/i/(i+1);//calculo un nuevo t�rmino
        cos+=(signo*ult);
        signo*=-1;//cambio de signo
        i+=2;//los exponentes se incrementan de a dos
        }
    return cos;
    }
