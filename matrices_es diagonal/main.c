#include "header.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    int mat[FIL][COL];
    printf("\a\a\a");
    printf("\n\t *******************");
    printf("\n\t * MATRIZ DIAGONAL *");
    printf("\n\t *******************");
    cargar_matriz(mat,FIL,COL);
    printf("\n\n Matriz \n");
    mostrar_matriz(mat,FIL,COL);
    printf("\n\n La matriz %s diagonal \n",es_matriz_diagonal(mat,FIL,COL)?"es":"no es");
    printf("\n\n\t\t\t\t Fin del programa....... \n\n\a\a\a");
    getch();
    return 0;
    }
