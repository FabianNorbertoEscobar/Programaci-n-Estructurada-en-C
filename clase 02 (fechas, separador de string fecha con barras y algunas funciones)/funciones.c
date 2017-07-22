#include "header.h"
void mostrar_fecha(t_fecha f)
    {
    printf("\n Fecha: %d/%d/%d \n",f.d,f.m,f.a);
    }
int fecha_valida(t_fecha f)
    {
    if(f.a>=1600&&f.m>=1&&f.m<=12&&f.d>=1&&f.d<=cant_dias_mes(f.m,f.a))
        return 1;
    else
        return 0;
    }
//el a�o debe ser mayor a 1600 por ser el inicio del calendario gregoriano
int cant_dias_mes(int m,int a)
    {
    if(m==4||m==6||m==9||m==11)
        return 30;
    else
        if(m==2)
                return 28+bisiesto(a);
        else
            return 31;
    }
/*
otras opciones..
usando un vector:

int cant_dias_mes(int m,int a)
    {
    int dias[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(m==2&&bisiesto(a))
        return 29;
    return dias[m-1];
    }

optimizando con operadores ternarios:

int cant_dias_mes(int m,int a)
    {
    int dias[]={31,28,31,30,31,30,31,31,30,31,30,31};
    return (m==2)?28+bisiesto(a):dias[m-1];
    //o bien: return (m==2)?28+(bisiesto(a)?1:0):dias[m-1];
    }
*/
int bisiesto(int a)
    {
    if((a%4==0&&a%100!=0)||a%400==0)
        return 1;
    else
        return 0;
    }
//un a�o es bisiesto si es m�ltiplo de 4 pero no de 100, o m�ltiplo de 400
/*
otra opci�n.....
int bisiesto(int a)
    {
    return (a%4==0&&a%100!=0)||a%400==0);
    }
*/
//--------------------------------------------------------------m�s funciones----------------------------------
t_fecha incrementar_un_dia(t_fecha f)
    {
    if(f.d==cant_dias_mes(f.m,f.a))
        {
        f.d=1;
        if(f.m==12)
            {
            f.m=1;
            f.a++;
            }
        else
            f.m++;
        }
    else
        f.d++;
    return f;
    }
/*
 es pr�cticamente lo mismo:

t_fecha incrementar_un_dia(t_fecha f)
    {
    if(f.d==cant_dias_mes(f.m,f.a))
        f.d=1;
        f.m++;
        if(f.m>12)
            {
            f.m==1;
            f.a++;
            }
    return f;
    }
*/
t_fecha sumar_dias_a_fecha(t_fecha f,int cant)
{
    f.d+=cant;
    while(f.d>cant_dias_mes(f.m,f.a))
        {
        f.d-=cant_dias_mes(f.m,f.a);
        f.m++;
        if(f.m>12)
            {
            f.m==1;
            f.a++;
            }
        }
    return f;
}
//esa es la mejor alternativa, pero ver la siguiente:
/*
id�ntica a la anterior solo que en esta estoy guardando el retorno de la funci�n cant_dias_mes en una variable

t_fecha sumar_dias_a_fecha(t_fecha f,int cant)
    {
    int diasM;
    f.d+=cant;
    while(f.d>(diasM=cant_dias_mes(f.m,f.a)))
        {
        f.m++;
        f.d-=diasM;
        if(f.m>12)
            {
            f.m=1;
            f.a++;
            }
        }
    return f;
    }

otra opci�n es ir restando los d�as que quiero sumar si exceden los que me quedan en el mes e ir aumentando el mes, controlando si se pasa o no del a�o

t_fecha sumar_dias_a_fecha(t_fecha f,int cant)
    {
    while(f.d+cant>cant_dias_mes(f.m,f.a))
        {
        cant-=(cantDiaMes(f.m,f.a)-f.d+1);
        f.d=1;
        if(f.m==12)
            {
            f.m=1;
            f.a++;
            }
        else
            f.m++;
        }
    f.d+=cant;
    return f;
    }
*/
//agregar luego a este proyecto las funciones de restar dias a una fecha y de scar la diferencia entre dos fechas
