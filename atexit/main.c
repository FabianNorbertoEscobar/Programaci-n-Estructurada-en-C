#include "header.h"

int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    printf("\n\n FUNCI�N ATEXIT \n");
    printf("\n Esta funci�n de stdlib.h sirve para ejecutar una funci�n void sin par�metros \n que se le manda por par�metro, antes de cerrar la ejecuci�n del programa.. \n\n");
    atexit(antes_de_salir);
    getch();
    return 0;
    }
