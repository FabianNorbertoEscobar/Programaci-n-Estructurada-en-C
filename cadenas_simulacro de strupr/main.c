#include "header.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    char cadena1[30];
    printf("\n\n CADENA A MAY�SCULA \n");
    printf("\n Ingrese una cadena de caracteres: \n\n\t");
    fflush(stdin);
    gets(cadena1);
    str_upr(cadena1);
    printf("\n Cadena en may�scula: \t %s \n\n",cadena1);
    getch();
    return 0;
    }
