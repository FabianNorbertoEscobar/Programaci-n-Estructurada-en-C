#include "header.h"

void cargar_dato(t_dato *dato)
{
    printf("\n\n Ingrese dato (n�mero): \t");
    scanf("%d",&dato->numero);
}

void mostrar_dato(t_dato *dato)
{
    printf("\n DATO: \t %d",dato->numero);
}
