#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int x,y,z,tope,i;
    x=1;//primer t�rmino
    y=1;//segundo t�rmino
    printf("\n\t\t SERIE DE FIBONACCI \n\n");
    do
        {
        printf("\n Ingrese la cantidad de t�rminos que desea calcular \n de la serie de Fibonacci (m�nimo 2): \n\n\t\t");
        scanf("%d",&tope);
        }
    while(tope<2);
    printf("\n Los primeros %d t�rminos de la serie de Fibonacci son: \n",tope);
    printf("\n\t 1 \n\t 1");
    tope-=2;//para comenzar el for desde cero
    for(i=0;i<tope;i++)
        {
        z=x+y;//calculo el pr�ximo t�rmino
        printf("\n\t %d",z);
        x=y;//actualizo los dos t�rminos anteriores al actual
        y=z;
        }
    printf("\n\n");
    getch();
    return 0;
    }
