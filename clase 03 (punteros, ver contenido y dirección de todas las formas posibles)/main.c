#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    printf("\n PUNTEROS y PUNTERO A PUNTERO \n");
    //un PUNTERO es una variable que guarda una direcci�n de memoria
    //declaraci�n de punteros: tipo_de_dato *nombre_de_la_variable
    //el asterisco acompa�a al nombre de la variable, no al tipo de dato

    int *px,x,*py,y;//ac� tenemos dos variables y dos punteros
    //float *pz,z;//variable flotante y puntero a variable puntero

    int **paux;//puntero a puntero
    //un PUNTERO A PUNTERO es una variable que guarda la direcci�n de una variable que guarda la direcci�n de otra variable

    x = 3;
    y = 8;
    py = &y;//apunto el puntero
    px = &x;//apunto el puntero
    y = *px;//asigno el contenido del puntero a la variable
    py = px;//hago que ambos punteros aounten a la misma direcci�n de memoria
    paux = &px;//guardo la direcci�n de un puntero en otro

    //ver 3 desde todos los lugares posibles y ver la direcci�n de x desde todos los lugares posibles..
    //adem�s, definir una variable que me guarde la direcci�n del puntero px
    printf("\n Contenido de la variable x visto desde todas los lugares posibles \n");
    printf("\n Variable x: \t %d",x);
    printf("\n Contenido de puntero a x: \t %d",*px);
    printf("\n Variable y: \t %d ",y);
    printf("\n Contenido de puntero a y: \t %d",*py);
    printf("\n Contenido del contenido del puntero al puntero de x: \t %d\n",**paux);

    printf("\n Direcci�n de la variable x desde todos los lugares posibles \n");
    printf("\n Direcci�n de variable x: \t %p",&x);
    printf("\n Puntero a x: \t %p",px);
    printf("\n Puntero a y: \t %p",py);
    printf("\n Contenido del puntero al puntero de x: \t %p\n",*paux);
    //la m�scara para las direcciones de memoria de los punteros es %p
    //la m�scara %x para hexadecimal tira warning

    getch();
    return 0;
    }
