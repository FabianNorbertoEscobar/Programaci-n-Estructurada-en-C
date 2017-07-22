#include "encabezados.h"
float raiz(float x,float tol)
    {
    float t_ant,t_act;
    t_act=1;//primer t�rmino de la serie
    do
        {
        t_ant=t_act;
        t_act=(t_ant+x/t_ant)/2;
        }
    while(fabs(t_act-t_ant)>=tol);//dejo de ciclar cuando el m�dulo de la diferencia entre dos t�rminos sucesivos sea menor que la tolerancia
    return t_act;
    }
