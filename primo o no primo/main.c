#include "encabezados.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int n;
    printf("\n PRIMO O NO PRIMO \n");
    do
        {
        printf("\n\n Ingrese un n�mero natural:\n\n\t\t");
        scanf("%d",&n);
        }
    while(n<1);
    if(primo_o_no_primo(n))
        printf("\n\n El n�mero es primo \n\n");
    else
        printf("\n\n El n�mero no es primo \n\n");
    getch();
    return 0;
    }
