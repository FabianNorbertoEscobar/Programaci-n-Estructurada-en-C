#include "encabezados.h"
char menu()
    {
    char op;
    int band;
    band=0;//bandera para saber si se ingresa un dato err�neo
    printf("\n\n\t MEN� \n\n");
    printf("\n %c Seleccione una de las siguientes opciones: \n",16);
    printf("\n\t s: sumar");
    printf("\n\t r: restar");
    printf("\n\t m: multiplicar");
    printf("\n\t d: dividir");
    printf("\n\t q: salir");
    do
        {
        if(band==1)//enciendo bandera si ya se ha ingresado una opci�n
            printf("\n La opci�n ingresada es inv�lida. \n\t\t Ingrese una nueva opci�n:");
        printf("\n\t\t\t Opci�n: \t\t");
        fflush(stdin);
        scanf("%c",&op);
        op=tolower(op);//para no tener problemas con las may�sculas
        band=1;//ya hubo ingreso
        }
    while(!validaopcion(op));
    return op;
    }
int validaopcion(char op)
    {
    if(op=='s'||op=='r'||op=='m'||op=='d'||op=='q')
        return 1;
    else
        return 0;
    }
float ingresa_flotante()
    {
    float x;
    printf("\n Ingrese n�mero flotante: \t\t");
    scanf("%f",&x);
    return x;
    }
void sumar()
    {
    float num1,num2,y;
    num1=ingresa_flotante();
    num2=ingresa_flotante();
    y=num1+num2;
    printf("\n\n La suma es: \t %.2f \n",y);
    }
void restar()
    {
    float num1,num2,y;
    num1=ingresa_flotante();
    num2=ingresa_flotante();
    y=num1-num2;
    printf("\n\n La resta es: \t %.2f \n",y);
    }
void multiplicar()
    {
    float num1,num2,y;
    num1=ingresa_flotante();
    num2=ingresa_flotante();
    y=num1*num2;
    printf("\n\n La multiplicaci�n es: \t %.2f \n",y);
    }
void dividir()
    {
    float num1,num2,y;
    int band;
    band=0;
    num1=ingresa_flotante();
    do
        {
        if(band==1)
            printf("\n No se puede dividir por cero. Reelija una opci�n: \t");
        num2=ingresa_flotante();
        band=1;
        }
    while(num2==0);
    y=num1/num2;
    printf("\n\n La divisi�n es: \t %.2f \n",y);
    }
