#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int x=5,y=2,r;
    float z;
    //la divisi�n entre dos n�meros enteros siempre da un n�mero entero
    //realizando esta divisi�n queda
    r=x/y;//2
    z=x/y;//2.00
    printf("\n divisi�n de enteros: r=%d \t z=%.2f \n",r,z);
    z=(float)x/y;//realizando este casteo s� va a quedar almacenado 2.5 porque se est� convirtiendo el tipo
    printf("\n con casteo: \t z=%.2f \n",z);
    //------------------------------------------------------------------------------------------------------
    x=2.5;
    printf("\n conversi�n autom�tica de tipo:\t x=%d",x);// conversi�n autom�tica de tipo-------->>>>>2
    printf("\n visualizaci�n con m�scara: \t x=%f",x);//------->>>>2.5     esto quiere decir que en alg�n lado en memoria quedaron almacenados los decimales
    //------------------------------------------------------------------------------------------------------
    x=5;
    y=5;
    int r1,r2;
    r1=++x;//preincremento: primero incrementa, luego asigna
    r2=y++;//posincremento: primero asigna y luego incrementa
    printf("\n\n preincremento y posincremento");
    printf("\n esto queda almacenado: x=%d \t y=%d \t r1=%d \t r2=%d \n",x,y,r1,r2);;
    //-------------------------------------------------------------------------------------------------------
    x=5;
    y=3;
    printf("\n operador ternario");//puede meterse dentro de cualquier instrucci�n
    //x>y?printf("\n x>y"):printf("\n x<y"); puedo usarlo de esta manera
    //oero es m�s �ptimo escribir la siguiente sentencia:
    printf("\n x=5, y=3, mayor: %d \n",x>y?x:y);//me ahorro una impresi�n en oantalla
    getch();
    return 0;
    }
