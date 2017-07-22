#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    int i;
    setlocale(LC_CTYPE,"Spanish");

    printf("\n\n RANDOMIZACI�N Y ESCALAMIENTO \n\n");

    srand(time(NULL));
    //la funci�n srand randomiza la funci�n rand usando como semilla los segundos relativos indicados por el reloj del sistema

    //la funci�n rand genera n�meros pseudoaleatorios de acuerdo a una semilla

    for(i=0;i<50;i++)
        printf("%d \t",2+rand()%6);
    //el escalamiento es la modificaci�n de la generaci�n de los n�meros pseudoaleatorios
    //su ecuaci�n es a+rand()%b siendo a el valor de cambio que indica el primer valor del rango de n�meros pseudoaleatorios
    //y siendo b el factor de escalamiento que indica la longitud del rango de n�meros generados

    return 0;
}
