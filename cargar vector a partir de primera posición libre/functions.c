#include "header.h"
int valida_dato(int x,int li,int ls)
    {
    return (x>=li&&x<=ls)?1:0;
    }
int menu(void)
    {
    int i,op,band=0;
    printf("\n\n\t\t --->>> MEN� \n");
    printf("\n\t 1- Cargar vector");
    printf("\n\t 2- Mostrar vector");
    printf("\n\t 3- Salir");
    printf("\n\t\t\t Opci�n: \t");
    do
        {
        if(band==1)
            printf("\n\n La opci�n ingresada no es v�lida. Elija una de las opciones enumeradas: \n\n Opci�n: \t\t\t\t");
        scanf("%d",&op);
        band=1;
        }
    while(!valida_dato(op,1,3));
    return op;
    }
int cargar_vector(int *v,int tam,int ce)
    {
    int i,op,band=0;
    v+=ce;
    printf("\n Proceda a la carga del vector");
    printf("\n Usted cuenta con %d posiciones en total\n",tam);
    for(i=ce;i<tam;i++)
        {
        band=0;
        printf("\n Ingrese v[%d]=\t",i);
        scanf("%d",v);
        ce++;
        v++;
        printf("\n �Desea seguir agregando elementos al vector?");
        printf("\n\n 1-SI \t 2-NO \n\n\t\t\t Opci�n: \t");
        do
            {
            if(band==1)
                printf("\n La opci�n ingresada es incorrecta. Ingrese un opci�n: \t");
            scanf("%d",&op);
            band=1;
            }
        while(!valida_dato(op,1,2));
        if(op==2)
            break;
        }
    printf("\n\n Cantidad de posiciones llenas: \t %d",ce);
    printf("\n Cantidad de posiciones vac�as: \t %d",tam-ce);
    return ce;
    }
void mostrar_vector(int *v,int tam,int ce)
    {
    int i;
    if(ce==0)
        {
        printf("\n El vector est� vac�o \n");
        return;
        }
    printf("\n POSICI�N \t CONTENIDO \n");
    for(i=0;i<ce;i++)
        {
        printf("\n %d \t\t %d",i+1,*v);
        v++;
        }
    printf("\n\n Cantidad de posiciones llenas: \t %d",ce);
    printf("\n Cantidad de posiciones vac�as: \t %d",tam-ce);
    }
