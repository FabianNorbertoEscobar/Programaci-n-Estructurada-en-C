#include <stdio.h>
#include <conio.h>
#include <locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int i;
    printf("\n\t\t\t   ****************\n");
    printf("  \t\t\t   * C�DIGO ASCII *\n");
    printf("  \t\t\t   ****************\n");
    /* para ver el c�digo ascii muestro los n�meros desde el cero hasta el 255,
    con las m�scaras de enteros y de char para ver el nu�mero y el caracter */
    printf("\n\t\t\t CARACTERES DE CONTROL\n");//desde el cerp hasta el 31
    for(i=0;i<=9;i++)
        printf("\n\t\t C�digo Ascii:\t %d _____ Caracter: %c \n",i,i);
    printf("\n \t\t C�digo Ascii:\t %d _____ Caracter: %c",10,10);//separo el n�mero 10 porque hab�a un error
    for(i=11;i<=31;i++)
        printf("\n\t\t C�digo Ascii:\t %d _____ Caracter: %c \n",i,i);
    printf("\n\t\t\t    CARACTERES IMPRIMIBLES\n");//desde el 32 hasta el 127
    for(i=32;i<=127;i+=2)
        printf("\n C�digo Ascii:\t %d _____ Caracter: %c \t C�digo Ascii:\t %d _____ Caracter: %c \n",i,i,i+1,i+1);
    printf("\n\t\t    CARACTERES IMPRIMIBLES EXTENDIDO\n");//desde el 128 hasta el 255
    for(i=128;i<=255;i+=2)
        printf("\n C�digo Ascii:\t %d _____ Caracter: %c \t C�digo Ascii:\t %d _____ Caracter: %c \n",i,i,i+1,i+1);
    getch();
    }
