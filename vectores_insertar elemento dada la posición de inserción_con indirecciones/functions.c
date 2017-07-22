#include "header.h"
int validadato(int x,int li,int ls)
    {
    if(x>=li&&x<=ls)
        return 1;
    else
        return 0;
    }
int menu()
    {
    int op,band;
    band=0;
    printf("\n\n\t <<<MEN�>>> \n");
    printf("\n\t 1-Llenar vector");
    printf("\n\t 2-Mostrar vector");
    printf("\n\t 3-Insertar un elemento en el vector dada la posici�n de inserci�n");
    printf("\n\t 4-Salir");
    do
        {
        if(band==1)
            printf("\n La opci�n ingresada no existe. Preste atenci�n a lo que hace. \n\a\a");
        printf("\n\t\t\t Opci�n: \t\t");
        scanf("%d",&op);
        band=1;
        }
    while(!validadato(op,1,4));
    return op;
    }
void llenar_vector(int *v,int *prim_lib)
    {
    int i,op,band=0;
    if(*prim_lib!=0)
        {
        printf("\n El vector ya ha sido llenado. Si contin�a se borrar�n \n los datos del vector. �Desea continuar? \n\a\a");
        printf("\n\t 1-SI \n\t 2-NO \n");
        do
            {
            if(band==1)
                printf("\n La opci�n ingresada no existe. Preste atenci�n a lo que hace. \n\a\a");
            printf("\n\t\t Opci�n: \t\t");
            scanf("%d",&op);
            band=1;
            }
        while(!validadato(op,1,2));
        if(op==2)
            return;
        *prim_lib=0;
        printf("\n Se han borrado todos los datos del vector \n\n\a\a");
        }
    printf("\n Proceda a la carga del vector \n (cuenta con %d posiciones para almacenar n�meros enteros)\n",TAM);
    for(i=0;i<TAM;i++)
        {
        printf("\n Ingrese el elemento de la posici�n %d: \n\n\t\t",i+1);
        scanf("%d",v+i);
        *prim_lib+=1;
        if(i!=TAM-1)
            {
            printf("\n �Desea seguir ingresando elementos? \n");
            printf("\n\t 1-SI \n\t 2-NO \n");
            band=0;
            do
                {
                if(band==1)
                    printf("\n La opci�n ingresada no existe. Preste atenci�n a lo que hace. \n\a\a");
                printf("\n\t\t Opci�n: \t\t");
                scanf("%d",&op);
                band=1;
                }
            while(!validadato(op,1,2));
            if(op==2)
                break;
            }
        }
    printf("\n El vector ha sido cargado exitosamente \n");
    printf("\n Cantidad de posiciones llenas: %d \n ",*prim_lib);
    printf("\n Cantidad de posiciones vac�as: %d \n ",TAM-*prim_lib);
    }
void mostrar_vector(int *v,int prim_lib)
    {
    int i;
    if(prim_lib!=0)
        {
        printf("\n POSICI�N \t CONTENIDO \n");
        for(i=0;i<prim_lib;i++)
            printf("\n %d \t\t %d",i+1,*(v+i));
        printf("\n\n Cantidad de posiciones llenas: %d \n ",prim_lib);
        printf("\n Cantidad de posiciones vac�as: %d \n ",TAM-prim_lib);
        }
    else
        printf("\n El vector que quiere mostrar est� vac�o \n");
    }
void insertar_elemento(int *v,int *prim_lib)
    {
    int op,band=0;
    if(*prim_lib==TAM)
        {
        printf("\n El vector est� lleno. Si contin�a perder� alg�n dato.");
        printf("\n �Desea continuar? \n");
        printf("\n\t 1-SI \n\t 2-NO \n");
        do
            {
            if(band==1)
                printf("\n La opci�n ingresada no existe. Preste atenci�n a lo que hace. \n\a\a");
            printf("\n\t\t Opci�n: \t\t");
            scanf("%d",&op);
            band=1;
            }
        while(!validadato(op,1,2));
        if(op==1)
            {
            printf("\n Al insertar, desplazar datos a la: \n");
            printf("\n\t 1-izquierda \n\t 2-derecha \n");
            band=0;
            do
                {
                if(band==1)
                    printf("\n La opci�n ingresada no existe. Preste atenci�n a lo que hace. \n\a\a");
                printf("\n\t\t Opci�n: \t\t");
                scanf("%d",&op);
                band=1;
                }
            while(!validadato(op,1,2));
            if(op==1)
                {
                printf("\n Se perder� el primer elemento: \n");
                insertar_y_desplazar_a_izquierda(v,*prim_lib);
                }
            else
                {
                printf("\n Se perder� el �ltimo elemento: \n");
                insertar_y_desplazar_a_derecha(v,*prim_lib);
                }
            }
        else
            return;
        }
    else
        {
        printf("\n El vector no est� lleno.");
        if(*prim_lib==0)
            {
            printf("\n\t De hecho, el vector est� vac�o \n");
            printf("\n Usted puede cargar su primer elemento: \n");
            *prim_lib+=1;
            insertar_y_desplazar_a_derecha(v,*prim_lib);
            return;
            }
        printf("\n Al insertar, desplazar datos a la: \n");
        printf("\n\t 1-izquierda \n\t 2-derecha \n");
        band=0;
        do
            {
            if(band==1)
                printf("\n La opci�n ingresada no existe. Preste atenci�n a lo que hace. \n\a\a");
            printf("\n\t\t Opci�n: \t\t");
            scanf("%d",&op);
            band=1;
            }
        while(!validadato(op,1,2));
        band=0;
        if(op==1)
            {
            printf("\n Si contin�a perder� el primer elemento. �Desea continuar? \n\a\a");
            printf("\n\t 1-SI \n\t 2-NO \n");
            do
                {
                if(band==1)
                    printf("\n La opci�n ingresada no existe. Preste atenci�n a lo que hace. \n\a\a");
                printf("\n\t\t Opci�n: \t\t");
                scanf("%d",&op);
                band=1;
                }
            while(!validadato(op,1,2));
            if(op==1)
                {
                printf("\n Se perder� el primer elemento: \n");
                insertar_y_desplazar_a_izquierda(v,*prim_lib);
                }
            else
                return;
            }
        else
            {
            *prim_lib+=1;
            insertar_y_desplazar_a_derecha(v,*prim_lib);
            }
        }
    }
void insertar_y_desplazar_a_izquierda(int *v,int prim_lib)
    {
    int band,pos,nuevo,aux,aux2,i;
    printf("\n Ingrese la posici�n de inserci�n \n (1 a %d)",TAM);
    printf("\n (La posici�n de inserci�n debe ser menor o igual a %d): \n\n\t\t",prim_lib);
    band=0;
    do
        {
        if(band==1)
            printf("\n La posici�n ingresada no es correcta. Reingr�sela: \n\n\t\t\a\a");
        scanf("%d",&pos);
        band=1;
        }
    while(!validadato(pos,1,TAM)||pos>prim_lib);
    printf("\n Ingrese el elemento a insertar en la posici�n %d: \n\n\t\t",pos);
    scanf("%d",&nuevo);
    aux=*(v+(pos-1));
    *(v+(pos-1))=nuevo;
    for(i=pos-2;i>=0;i--)
        {
        aux2=*(v+i);
        *(v+i)=aux;
        aux=aux2;
        }
    printf("\n\n El elemento ha sido insertado exitosamente \n\n");
    }
void insertar_y_desplazar_a_derecha(int *v,int prim_lib)
    {
    int band,pos,nuevo,aux,aux2,i;
    printf("\n Ingrese la posici�n de inserci�n \n (1 a %d)",TAM);
    printf("\n (La posici�n de inserci�n debe ser menor o igual a %d): \n\n\t\t",prim_lib);
    band=0;
    do
        {
        if(band==1)
            printf("\n La posici�n ingresada no es correcta. Reingr�sela: \n\n\t\t\a\a");
        scanf("%d",&pos);
        band=1;
        }
    while(!validadato(pos,1,TAM)||pos>prim_lib);
    printf("\n Ingrese el elemento a insertar en la posici�n %d: \n\n\t\t",pos);
    scanf("%d",&nuevo);
    aux=*(v+(pos-1));
    *(v+(pos-1))=nuevo;
    for(i=pos;i<prim_lib+1;i++)
        {
        aux2=*(v+i);
        *(v+i)=aux;
        aux=aux2;
        }
    printf("\n\n El elemento ha sido insertado exitosamente \n\n");
    }

