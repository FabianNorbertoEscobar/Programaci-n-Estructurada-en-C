#include "header.h"

int main()
    {
    setlocale(LC_CTYPE,"Spanish");

    printf("\n\n \t AGREGAR L�NEAS DE VARIAS PALABRAS A UN ARCHIVO TXT \a\a");
    printf("\n\n Se agregar� a un archivo de texto, l�neas de entre 1 y 10 \n palabras, cantidad que ir� indicando usted mismo.");

    FILE *pf;
    pf=fopen("palabras.txt","at");
    if(!pf)
        {
        printf("\n\n Error al leer el fichero de texto \n\n Programa evacuado \n\n\a\a");
        exit(EXIT_FAILURE);
        }

    int n,bandera;
    do
        {
        bandera=0;
        do
            {
            printf("\n\n Indique cantidad de palabras para la fila: [1;10] � 0 para finalizar: \t");
            if(bandera==1)
                printf("\n\t El n�mero ingresado no es v�lido. Ingrese uno nuevo: \n\n\a \a\a");
            scanf("%d",&n);
            bandera=1;
            }
        while(!DATO_VALIDO(n,0,10));
        if(n!=0)
            nueva_linea(pf,n);
        }
    while(n!=0);

    printf("\n\n Se ha modificado exitosamente el archivo \"palabras.txt\"");

    fclose(pf);

    printf("\n\n \t\t\t\t\t  Fin del programa.. \n\n");
    getch();
    return 0;
    }

