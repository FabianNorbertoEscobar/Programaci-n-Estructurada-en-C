#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n,suma,i;
    suma=0;
    printf("\n SUMA DE N PRIMEROS N�MEROS PARES \n");
    do
        {
        printf("\n Ingrese un n�mero mayor o igual a cero:\t");
        scanf("%d",&n);
        }
    while(n<0);
    for(i=1;i<=n;i++)//el contador genera la cantidad de n�meros pares
        suma+=2*i;//sumo esa cantidad de pares
    printf("\n La suma de los %d primeros n�meros pares es %d \n\n",n,suma);
    getch();
    return 0;
    }
