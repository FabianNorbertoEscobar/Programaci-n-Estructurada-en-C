#include "header.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    tFecha f;
    int band;
    band=0;
    printf("\n ***** D�AS GREGORIANOS ***** \n");
    printf("\n Ingrese una fecha en formato dd/mm/aaaa: \n\t");
    do
        {
        if(band==1)
            printf("\n La fecha ingresada no existe. Reingr�sela: \n\t");
        scanf("%d/%d/%d",&f.dia,&f.mes,&f.anio);
        band=1;
        }
    while(!fecha_valida(f));
    printf("\n\t %c D�as gregorianos: %d \n\n",16,gregorianos(f));
    getch();
    return 0;
    }

