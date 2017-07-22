#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int x[10];
    int i;
    x[23]=3;//C deja que se guarde el valor pero est� sobreescribiendo en memoria y podr�a llegar a borrar algo importante
    //x[23]={3};//da error ya que no coinciden las dimensiones del tama�o y del vector y la declaraci�n del mismo
    int v1[5]={1,55,3,4,5};//reserva y asigna memoria para las 5 variables
    int v2[]={1,9,3,4,5};//inicializado-->>>el complilador reserva el espacio m�nimo necesario para almacenar esas variables
    //int v3[5]={1,2,,4,5};//error:--->>>si empiezo a dar valores, tengo que hacerlo para todas las posiciones
    int v4[5]={11,12,13,14,15,60,70};// C no hace control de overflow.. el 60 y el 70 no los almacena..
    //en este caso, el compilador de Borland tira error porque no sabe si descartar los valores que no caben...
    //... en esa dimensi�n, o si guardarlos en las posiciones necesarias
    //por eso da error, y que lo decida el programador
    //en cambio el compilador de CodeBlocks no da error ni warning, y te lo acepta.. guarda hasta donde se lo indicaste
    //y el resto lo descarta.. no se hace responsable de los errores del programador
    //*******>>>>> el compilador asigna memoria de manera inversa.. desde lo �ltimo que fue declarado hasta lo primero
    //por eso, cuando nosotros mostramos posiciones de vectores que no son v�lidas nos est� mostrando lo que continu�, que ser�
    //contenido de cualquier otra variable, en este caso vectores
    //por ejemplo, la primera posici�n afuera de v2 es la primera posici�n adentro de v1
    //tambi�n, la primera posici�n afuera de v4 es la primera posici�n adentro de v2
    // adem�s, la primera posici�n antes del vector 2, es la �ltima posici�n adentro del vector 4
    int v5[5]={};//rellena todo con cero
    int v6[5]={1,'b',3,'d'};//en la segunda y la cuarta posici�n guarda los ascii de los caracteres declarados y..
    //.. la quinta posici�n la rellena con cero
    int v7[5]={1,2};//guarda el 1 y el 2 en las dos primeras posiciones, y el resto rellena con cero
    //int v21[];//error!!!--->>> falta el tama�o
    v2[5] = 88;//por prueba nom�s
    printf("\n VECTORES \n");
    printf("\n\n vector x \n");
    for(i=0;i<23;i++)
        {
        printf("%d \t", x[i]);
        }
    printf("\n tama�o del vector x: %d",sizeof(x));
    printf("\n contenido en posici�n no v�lida de x: %d",x[23]);
    printf("\n\n vector v1 \n");
    for(i=0;i<5;i++)
        {
        printf("%d \t", v1[i]);
        }
    printf("\n tama�o del vector v1: %d",sizeof(v1));
    printf("\n\n vector v2 \n");
    for(i=0;i<5;i++)
        {
        printf("%d \t", v2[i]);
        }
    printf("\n tama�o del vector v2: %d",sizeof(v2));
    printf("\n\n vector v4 \n");
    for(i=0;i<7;i++)
        {
        printf("%d \t", v4[i]);
        }
    printf("\n tama�o del vector v4: %d",sizeof(v4));//reserv� 20 bytes, 4 para cada una de las 5 variables
    printf("\n\n vector v5 \n");
    for(i=0;i<5;i++)
        {
        printf("%d \t", v5[i]);
        }
    printf("\n tama�o del vector v5: %d",sizeof(v5));
    printf("\n\n vector v6 \n");
    for(i=0;i<5;i++)
        {
        printf("%d \t", v6[i]);
        }
    printf("\n tama�o del vector v6: %d",sizeof(v6));
    printf("\n\n vector v7 \n");
    for(i=0;i<5;i++)
        {
        printf("%d \t", v7[i]);
        }
    printf("\n tama�o del vector v7: %d \n\n",sizeof(v7));
    //printf("\n %d",v4[5]);
    //printf("\n %d",v4[6]);
    getch();
    return 0;
    }
