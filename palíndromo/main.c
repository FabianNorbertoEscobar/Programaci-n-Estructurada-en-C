#include "header.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    char cadena[TOPE];
    printf("\n\n PAL�NDROMO \n");
    printf("\n Una palabra o frase es un pal�ndromo si se lee \n de igual manera en ambos sentidos \n");
    printf("\n Ingrese una cadena de caracteres para ver si es pal�ndrome \n\n\t");
    gets(cadena);
    if(es_palindromo(cadena))
        printf("\n \"%s\" es un pal�ndromo",cadena);
    else
        printf("\n \"%s\" no es un pal�ndromo",cadena);
    printf("\n\n");
    getch();
    return 0;
    }
