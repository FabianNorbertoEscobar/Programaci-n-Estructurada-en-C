#include "header.h"
void menu(int *v,int tam,int *prim_libre)
    {
    int op,op2,band;
    do
        {
        system("cls");
        printf("\n\t\t\t ************");
        printf("\n\t\t\t * VECTORES *");
        printf("\n\t\t\t ************\n\a\a");
        printf("\n\t 1- Cargar vector");
        printf("\n\t 2- Vaciar vector");
        printf("\n\t 3- Mostrar vector");
        printf("\n\t 4- Ordenar el vector");
        printf("\n\t 5- Mostrar informe del vector");
        printf("\n\t 6- Insertar elementos en el vector");
        printf("\n\t 7- Eliminar elementos del vector");
        printf("\n\t 8- Salir");
        printf("\n\t\t\t\t\t Opci�n: \t");
        band=0;
        do
            {
            if(band==1)
                printf("\n La opci�n ingresada es incorrecta. Ingrese una opci�n: \t\a\a");
            scanf("%d",&op);
            band=1;
            }
        while(!DATO_VALIDO(op,1,8));
        system("cls");
        switch(op)
            {
            case 1:
                if(*prim_libre!=1)
                    {
                    printf("\n El vector ya ha sido cargado. Usted puede elegir entre las siguientes opciones: \n\a\a");
                    printf("\n\t 1- Cargar el vector desde cero \n\t 2- Seguir cargando elementos \n");
                    printf("\n\t\t Opci�n: \t");
                    do
                        {
                        if(band==1)
                            printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                        scanf("%d",&op);
                        band=1;
                        }
                    while(!DATO_VALIDO(op,1,2));
                    system("cls");
                    if(op==1)
                        {
                        printf("\n Se borrar�n todos los elementos del vector \n �Desea continuar? \a\a");
                        printf("\n\t 1- SI \t 2- NO \t\t Opci�n: \t");
                        band=0;
                        do
                            {
                            if(band==1)
                                printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                            scanf("%d",&op);
                            band=1;
                            }
                        while(!DATO_VALIDO(op,1,2));
                        system("cls");
                        if(op==1)
                            {
                            vaciar_vector(v,tam,prim_libre);
                            printf("\n El vector fue vaciado correctamente \n\a\a");
                            }
                        else
                            break;
                        }
                    }
                if(cargar_vector(v,tam,prim_libre))
                    printf("\n Se han cargado elementos en el vector \n\a\a");
                else
                    printf("\n No se han cargado elementos en el vector \n\a\a");
                break;
            case 2:
                if(*prim_libre==1)
                    printf("\n No se puede vaciar el vector ya que est� vac�o \n\a\a");
                else
                    {
                    vaciar_vector(v,tam,prim_libre);
                    printf("\n El vector fue vaciado correctamente \n\a\a");
                    }
                break;
            case 3:
                if(!mostrar_vector(v,tam,*prim_libre))
                    printf("\n El vector que desea mostrar est� vac�o \n\a\a");
                break;
            case 4:
                if(*prim_libre==1)
                    {
                    printf("\n No se puede ordenar el vector ya que est� vac�o \n\a\a");
                    break;
                    }
                printf("\n Seleccione una de �stas t�cnicas de ordenamiento: \n\a\a");
                printf("\n\t 1- Burbujeo \t 2- Selecci�n \t\t Opci�n: \t");
                band=0;
                do
                    {
                    if(band==1)
                        printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                    scanf("%d",&op);
                    band=1;
                    }
                while(!DATO_VALIDO(op,1,2));
                system("cls");
                if(op==1)
                    {
                    printf("\n �De qu� forma desea ordenarlo? \n\a\a");
                    printf("\n\t 1- Orden Ascendente \t 2- Orden Descendente \t Opci�n: \t");
                    band=0;
                    do
                        {
                        if(band==1)
                            printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                        scanf("%d",&op);
                        band=1;
                        }
                    while(!DATO_VALIDO(op,1,2));
                    system("cls");
                    if(op==1)
                        {
                        burbujeo_orden_ascendente(v,*prim_libre-1);
                        printf("\n El vector fue ordenado ascendentemente mediante la t�cnica de burbujeo \n\n\a\a");
                        }
                    else
                        {
                        burbujeo_orden_descendente(v,*prim_libre-1);
                        printf("\n El vector fue ordenado descendentemente mediante la t�cnica de burbujeo \n\n\a\a");
                        }
                    }
                else
                    {
                    printf("\n �De qu� forma desea ordenarlo? \n\a\a");
                    printf("\n\t 1- Orden Ascendente \t 2- Orden Descendente \t Opci�n: \t");
                    band=0;
                    do
                        {
                        if(band==1)
                            printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                        scanf("%d",&op);
                        band=1;
                        }
                    while(!DATO_VALIDO(op,1,2));
                    system("cls");
                    if(op==1)
                        {
                        seleccion_orden_ascendente(v,*prim_libre-1);
                        printf("\n El vector fue ordenado ascendentemente mediante la t�cnica de selecci�n \n\n\a\a");
                        }
                    else
                        {
                        seleccion_orden_descendente(v,*prim_libre-1);
                        printf("\n El vector fue ordenado descendentemente mediante la t�cnica de selecci�n \n\n\a\a");
                        }
                    }
                break;
            case 5:
                printf("\n Informe del vector \n\a\a");
                mostrar_informe_del_vector(v,tam,*prim_libre);
                break;
            case 6:
                printf("\n Elija una de las siguientes opciones:\n\a\a");
                printf("\n\t 1- Insertar elemento en posici�n con desplazamiento a la derecha");
                printf("\n\t 2- Insertar elemento en posici�n con desplazamiento a la izquierda");
                printf("\n\t 3- Insertar elemento sin alterar el orden ascendente \n\t\t\t con desplazamiento a la derecha");
                printf("\n\t 4- Insertar elemento sin alterar el orden ascendente \n\t\t\t con desplazamiento a la izquierda");
                printf("\n\n\t\t\t\t\t Opci�n: \t");
                band=0;
                do
                    {
                    if(band==1)
                        printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                    scanf("%d",&op);
                    band=1;
                    }
                while(!DATO_VALIDO(op,1,3));
                system("cls");
                switch(op)
                    {
                    case 1:
                        printf("\n Ingrese la posici�n en la que desea insertar un elemento: \t");
                        band=0;
                        do
                            {
                            if(band==1)
                                printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                            scanf("%d",&op);
                            band=1;
                            }
                        while(!DATO_VALIDO(op,1,*prim_libre));
                        system("cls");
                        printf("\n Ingrese el n�mero que desea insertar en esa posici�n: \t");
                        scanf("%d",&op2);
                        system("cls");
                        if(insertar_en_posicion(v,prim_libre,tam,op2,op))
                            printf("\n Se insert� el elemento exitosamente \n\a\a");
                        else
                            printf("\n No se insert� el elemento ya que la posici�n es inv�lida \n\a\a");
                        break;
                    case 2:
                        printf("\n Ingrese la posici�n en la que desea insertar un elemento: \t");
                        band=0;
                        do
                            {
                            if(band==1)
                                printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                            scanf("%d",&op);
                            band=1;
                            }
                        while(!DATO_VALIDO(op,1,*prim_libre));
                        system("cls");
                        printf("\n Ingrese el n�mero que desea insertar en esa posici�n: \t");
                        scanf("%d",&op2);
                        system("cls");
                        if(insertar_en_posicion_hacia_izquierda(v,prim_libre,tam,op2,op))
                            printf("\n Se insert� el elemento exitosamente \n\a\a");
                        else
                            printf("\n No se insert� el elemento ya que la posici�n es inv�lida \n\a\a");
                        break;
                    case 3:
                        printf("\n El vector debe estar ordenado ascendentemente\a\a");
                        if(*prim_libre==1)
                            {
                            printf("\n No se puede ordenar el vector ya que est� vac�o \n\a\a");
                            break;
                            }
                        printf("\n Si no lo est� ser� ordenado. �Desea continuar? \n\a\a");
                        printf("\n\t 1- SI \t 2- NO \t\t Opci�n: \t");
                        band=0;
                        do
                            {
                            if(band==1)
                                printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                            scanf("%d",&op);
                            band=1;
                            }
                        while(!DATO_VALIDO(op,1,2));
                        system("cls");
                        if(op==1)
                            {
                            burbujeo_orden_ascendente(v,*prim_libre-1);
                            printf("\n El vector fue ordenado exitosamente \n\a\a");
                            getch();
                            }
                        else
                            break;
                        system("cls");
                        printf("\n Ingrese el n�mero que desea insertar en orden: \t");
                        scanf("%d",&op);
                        system("cls");
                        if(insertar_en_orden(v,prim_libre,tam,op))
                            printf("\n Se insert� el elemento exitosamente \n\a\a");
                        else
                            printf("\n No se insert� el elemento \n\a\a");
                        break;
                    case 4:
                        if(*prim_libre==1)
                            {
                            printf("\n No se puede ordenar el vector ya que est� vac�o \n\a\a");
                            break;
                            }
                        printf("\n El vector debe estar ordenado ascendentemente\a\a");
                        printf("\n Si no lo est� ser� ordenado. �Desea continuar? \n\a\a");
                        printf("\n\t 1- SI \t 2- NO \t\t Opci�n: \t");
                        band=0;
                        do
                            {
                            if(band==1)
                                printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                            scanf("%d",&op);
                            band=1;
                            }
                        while(!DATO_VALIDO(op,1,2));
                        system("cls");
                        if(op==1)
                            {
                            burbujeo_orden_ascendente(v,*prim_libre-1);
                            printf("\n El vector fue ordenado exitosamente \n\a\a");
                            getch();
                            }
                        else
                            break;
                        system("cls");
                        printf("\n Ingrese el n�mero que desea insertar en orden: \t");
                        scanf("%d",&op);
                        system("cls");
                        if(insertar_en_orden_hacia_izquierda(v,prim_libre,tam,op))
                            printf("\n Se insert� el elemento exitosamente \n\a\a");
                        else
                            printf("\n No se insert� el elemento \n\a\a");
                        break;
                    }
                break;
            case 7:
                if(*prim_libre==1)
                    {
                    printf("\n No se pueden eliminar elementos del vector ya que est� vac�o \n\a\a");
                    break;
                    }
                printf("\n Elija una de las siguientes opciones:\n\a\a");
                printf("\n\t 1- Eliminar elemento de una posici�n del vector");
                printf("\n\t 2- Eliminar primera aparici�n de un elemento del vector");
                printf("\n\t 3- Eliminar todas las apariciones de un elemento del vector");
                printf("\n\n\t\t\t\t\t Opci�n: \t");
                band=0;
                do
                    {
                    if(band==1)
                        printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                    scanf("%d",&op);
                    band=1;
                    }
                while(!DATO_VALIDO(op,1,3));
                system("cls");
                switch(op)
                    {
                    case 1:
                        printf("\n Ingrese la posici�n de la que desea eliminar un elemento: \t");
                        band=0;
                        do
                            {
                            if(band==1)
                                printf("\n La opci�n ingresada no es correcta. Ingrese opci�n:\t\a\a");
                            scanf("%d",&op);
                            band=1;
                            }
                        while(!DATO_VALIDO(op,1,*prim_libre));
                        system("cls");
                        if(eliminar_de_posicion(v,prim_libre,tam,op))
                            printf("\n Se elimin� el elemento de esa posici�n exitosamente \n\a\a");
                        else
                            printf("\n No se elimin� el elemento ya que la posici�n es inv�lida \n\a\a");
                        break;
                    case 2:
                        printf("\n Ingrese el n�mero del que desea eliminar su primera aparici�n: \t");
                        scanf("%d",&op);
                        system("cls");
                        if(eliminar_primera_aparicion(v,prim_libre,tam,op))
                            printf("\n Se elimin� la primera aparici�n del elemento exitosamente \n\a\a");
                        else
                            printf("\n No se elimin� el elemento ya que no se encuentra en el vector \n\a\a");
                        break;
                    case 3:
                        printf("\n Ingrese el n�mero del que desea eliminar todas sus apariciones: \t");
                        scanf("%d",&op);
                        system("cls");
                        if(eliminar_todas_las_apariciones(v,prim_libre,tam,op))
                            printf("\n Se eliminaron todas las apariciones del elemento exitosamente \n\a\a");
                        else
                            printf("\n No se elimin� el elemento ya que no se encuentra en el vector \n\a\a");
                        break;
                    }
                break;
            }
        if(op!=8)
            {
            printf("\n\n Presione cualquier tecla para retornar al men� principal \n\n");
            getch();
            }
        }
    while(op!=8);
    }
