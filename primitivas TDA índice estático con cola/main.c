#include "header.h"

int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    printf("\n\n PRIMITIVAS DE TDA �NDICE EST�TICO \n\n\a\a");

    t_indice indice;
    t_reg_indice registro;
    char ruta[50];

    ind_crear(&indice);
    printf("\n\n Se ha creado un �ndice \n");

    int i;
    for(i=0;i<5;i++)
        {
        printf("\n\n Ingrese registro a insertar: \n");
        cargar_registro(&registro);
        if(ind_insertar(&indice,&registro))
            printf("\n\n Registro insertado en orden \n");
        else
            printf("\n\n No se ha podido insertar el registro en orden \n");
        }

    printf("\n\n Ingrese registro a eliminar: \n");
    cargar_registro(&registro);
    if(ind_eliminar(&indice,&registro))
        printf("\n\n Registro eliminado exitosamente \n");
    else
        printf("\n\n No se ha podido eliminar el registro \n");

    printf("\n\n Ingrese registro a buscar: \n");
    cargar_registro(&registro);
    if(ind_buscar(&indice,&registro))
        {
        printf("\n\n Se ha encontrado el registro \n");
        mostrar_registro(&registro);
        }
    else
        printf("\n\n No se ha encontrado el registro \n");

    printf("\n\n Cargar �ndice desde archivo ordenado \n");
    printf("\n\n Ingrese la ruta del archivo: \n\n\t");
    fflush(stdin);
    gets(ruta);
    if(ind_cargar(&indice,ruta))
        printf("\n\n Se ha cargado el �ndice desde el archivo exitosamente \n");
    else
        printf("\n\n No se ha podido cargar el �ndice desde el archivo \n");

    printf("\n\n Grabar registro en archivo binario \n");
    printf("\n\n Ingrese la ruta del archivo: \n\n\t");
    fflush(stdin);
    gets(ruta);
    if(ind_grabar(&indice,ruta))
        printf("\n\n Se ha grabado el �ndice desde el archivo exitosamente \n");
    else
        printf("\n\n No se ha podido grabar el �ndice desde el archivo \n");

    printf("\n\n Cargar �ndice desde archivo ordenado \n");
    printf("\n\n Ingrese la ruta del archivo: \n\n\t");
    fflush(stdin);
    gets(ruta);
    if(ind_cargar(&indice,ruta))
        printf("\n\n Se ha cargado el �ndice desde el archivo exitosamente \n");
    else
        printf("\n\n No se ha podido cargar el �ndice desde el archivo \n");

    printf("\n\n Siguiente del �ndice \n");
    if(ind_siguiente(&indice,&registro))
        {
        printf("\n\n Se ha podido acceder al siguiente del �ndice \n");
        mostrar_registro(&registro);
        }
    else
        {
        if(ind_fin(&indice))
            printf("\n\n Se ha llegado al fin del �ndice. \n Para volver a recorrerlo, invoque a la funci�n primero \n");
        else
            printf("\n\n No se ha invocado a la funci�n primero \n");
        }
    getch();

    printf("\n\n Primero del �ndice \n");
    if(ind_primero(&indice,&registro))
        {
        printf("\n\n Se ha podido acceder al primero del �ndice \n");
        mostrar_registro(&registro);
        }
    else
        printf("\n\n El �ndice est� vac�o \n");
    getch();

    for(i=0;i<6;i++)
        {
        printf("\n\n Siguiente del �ndice \n");
        if(ind_siguiente(&indice,&registro))
            {
            printf("\n\n Se ha podido acceder al siguiente del �ndice \n");
            mostrar_registro(&registro);
            }
        else
            {
            if(ind_fin(&indice))
                printf("\n\n Se ha llegado al fin del �ndice. \n Para volver a recorrerlo, invoque a la funci�n primero \n");
            else
                printf("\n\n No se ha invocado a la funci�n primero \n");
            }
        getch();
        }

    ind_vaciar(&indice);
    printf("\n\n Se ha vaciado el indice \n");

    ind_liberar(&indice);
    printf("\n\n Se ha liberado el �ndice \n");

    printf("\n\n \t\t\t\t\t Fin del programa.. \n\n\a\a");
    getch();
    return 0;
    }

