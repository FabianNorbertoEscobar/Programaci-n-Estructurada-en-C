#include "header.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    t_fecha f1;
    printf("\n Ingrese una fecha en formato dd/mm/aaaa: \n\t");
    scanf("%d/%d/%d",&f1.d,&f1.m,&f1.a);
    mostrar_fecha(f1);
        // para comentar autom�ticamente: ctrl+shift+c
        //para revertirlo:    ctrl+shift+x
//    if(fecha_valida(f1))
//        puts("\n La fecha es v�lida \n");
//    else
//        {
//        puts("\n La fecha no es v�lida \n");
//        exit(0);//evac�o por lo que debe seguir asi�ndose en este programa
//        }
    printf("\n La fecha %s v�lida \n",fecha_valida(f1)?"es":"no es");//ternario y concatenaci�n es la forna m�s �ptima
    fecha_valida(f1)?:exit(0);
    t_fecha f2=incrementar_un_dia(f1);
    printf("\n La fecha siguiente a la ingresada es: %d/%d/%d \n",f2.d,f2.m,f2.a);
    printf("\n Ingrese una cantidad de d�as para sumarlos a la fecha ingresada: \t");
    int dias;
    do
        {
        scanf("%d",&dias);
        }
    while(dias<0);
    printf("\n La nueva fecha es: \n");
    mostrar_fecha(sumar_dias_a_fecha(f1,dias));
    getch();
    return 0;
    }
