#include "header.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    tFecha f;
    int band,n;
    band=0;
    printf("\n ***** SUMAR N D�AS A UNA FECHA ***** \n");
    printf("\n Ingrese una fecha en formato dd/mm/aaaa: \n\t");
    do
        {
        if(band==1)
            printf("\n La fecha ingresada no existe. Reingr�sela: \n\t");
        scanf("%d/%d/%d",&f.dia,&f.mes,&f.anio);
        band=1;
        }
    while(!fecha_valida(f));
    do
        {
        printf("\n Ingrese la cantidad de d�as que desea sumar: \t\t");
        scanf("%d",&n);
        }
    while(n<0);
    f=sumar_n_dias(f,n);
    printf("\n %c La fecha resultante es %d/%d/%d \n\n",16,f.dia,f.mes,f.anio);
    getch();
    return 0;
    }

