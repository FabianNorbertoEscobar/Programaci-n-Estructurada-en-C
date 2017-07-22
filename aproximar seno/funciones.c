#include "encabezados.h"
float seno(float x,float tol)
    {
    int i,signo;
    float sen,ult;//ult=(�ltimo t�rmino)
    i=2;
    sen=ult=x;//primer t�rmino
    signo=-1;//comienzo con signo negativo porque el segundo t�rmino es negativo
    while(fabs(ult)>tol)//deja de ciclar cuando el m�dulo del �ltimo t�rmino no sea mayor que la tolerancia
        {//fabs calcula el m�dulo de un flotante
        ult=ult*x*x/i/(i+1);//calculo un nuevo t�rmino
        sen+=(signo*ult);
        signo*=-1;//cambio de signo;
        i+=2;//los exponentes se incrementan de a dos
        }
    return(sen);
    }
