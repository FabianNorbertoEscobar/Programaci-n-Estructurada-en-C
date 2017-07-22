#include "header.h"

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    printf("\n\n RECURSIVIDAD \n\a\a");

    //-----------------------------------------------------------------------------------------------------------------------

    char cadena[]="hola";
    printf("\n\n CADENA: \t *%s*",cadena);

    printf("\n\n CADENA ENCOLUMNADA \n");
    printf("\n\t *");
    cadena_encolumnada(cadena);
    printf("\n\t *");

    printf("\n\n CADENA ENCOLUMNADA AL REV�S \n");
    printf("\n\t *");
    cadena_encolumnada_al_reves(cadena);
    printf("\n\t *");

    printf("\n\n CADENA ENCOLUMNADA DOBLE CON REPETICI�N \n");
    printf("\n\t *");
    cadena_encolumnada_doble_con_repeticion(cadena);
    printf("\n\t *");

    printf("\n\n CADENA ENCOLUMNADA DOBLE SIN REPETICI�N \n");
    printf("\n\t *");
    cadena_encolumnada_doble_sin_repeticion(cadena);
    printf("\n\t *");

    printf("\n\n CADENA EN TRI�NGULO 1 \n");
    printf("\n\t *");
    cadena_en_triangulo_1(cadena);
    printf("\n\t *");

    printf("\n\n CADENA EN TRI�NGULO 2 \n");
    printf("\n\t *");
    cadena_en_triangulo_2(cadena);
    printf("\n\t *");

    printf("\n\n CADENA EN TRI�NGULO 3 \n");
    printf("\n\t *");
    cadena_en_triangulo_3(cadena);
    printf("\n\t *");

    printf("\n\n CADENA EN TRI�NGULO 4 \n");
    printf("\n\t *");
    cadena_en_triangulo_4(cadena);
    printf("\n\t *");

    //------------------------------------------------------------------------------------------------------------------------

    int numero=1234;
    printf("\n\n N�MERO: \t *%d*",numero);

    printf("\n\n N�MERO ENCOLUMNADO \n");
    printf("\n\t *");
    numero_encolumnado(numero);
    printf("\n\t *");

    printf("\n\n N�MERO ENCOLUMNADO AL REV�S \n");
    printf("\n\t *");
    numero_encolumnado_al_reves(numero);
    printf("\n\t *");

    printf("\n\n N�MERO ENCOLUMNADO DOBLE CON REPETICI�N \n");
    printf("\n\t *");
    numero_encolumnado_doble_con_repeticion(numero);
    printf("\n\t *");

    printf("\n\n N�MERO ENCOLUMNADO DOBLE SIN REPETICI�N \n");
    printf("\n\t *");
    numero_encolumnado_doble_sin_repeticion(numero);
    printf("\n\t *");

    printf("\n\n N�MERO EN TRI�NGULO 1 \n");
    printf("\n\t *");
    numero_en_triangulo_1(numero);
    printf("\n\t *");

    printf("\n\n N�MERO EN TRI�NGULO 2 \n");
    printf("\n\t *");
    numero_en_triangulo_2(numero);
    printf("\n\t *");

    //-----------------------------------------------------------------------------------------------------------------------

    printf("\n\n CAMBIO DE BASE \n");
    printf("\n\t %d \t ---a base %d---> \t",4,2);
    cambio_de_base(2,4);

    printf("\n\n CAMBIO DE BASE \n");
    printf("\n\t %d \t ---a base %d---> \t",9,2);
    cambio_de_base(2,9);

    printf("\n\n CAMBIO DE BASE \n");
    printf("\n\t %d \t ---a base %d---> \t",13,2);
    cambio_de_base(2,13);

    //-----------------------------------------------------------------------------------------------------------------------

    printf("\n\n CARACTER EN TRI�NGULO \n");
    printf("\n Caracter: %c \t Lado: %d \n",'*',3);
    caracter_en_triangulo('*',3);

    printf("\n\n CARACTER EN TRI�NGULO INVERSO \n");
    printf("\n Caracter: %c \t Lado: %d \n",'*',3);
    caracter_en_triangulo_inverso('*',3);

    printf("\n\n CARACTER EN DOBLE TRI�NGULO CON REPETICI�N \n");
    printf("\n Caracter: %c \t Lado: %d \n",'*',3);
    caracter_en_doble_triangulo_con_repeticion('*',3);

    printf("\n\n CARACTER EN DOBLE TRI�NGULO SIN REPETICI�N \n");
    printf("\n Caracter: %c \t Lado: %d \n",'*',3);
    caracter_en_doble_triangulo_sin_repeticion('*',3);

    //--------------------------------------------------------------------------------------------------------------------------

    t_lista lista;
    crear_lista(&lista);

    t_dato dato;
    dato.numero=5;
    poner_en_lista_primero(&lista,&dato);
    dato.numero=4;
    poner_en_lista_primero(&lista,&dato);
    dato.numero=3;
    poner_en_lista_primero(&lista,&dato);
    dato.numero=2;
    poner_en_lista_primero(&lista,&dato);
    dato.numero=1;
    poner_en_lista_primero(&lista,&dato);

    printf("\n\n LISTA SIMPLEMENTE ENLAZADA \n");
    printf("\n Lista en orden original \n\n");
    mostrar_lista_ordenada(&lista);
    printf("\n\n Lista en orden inverso \n\n");
    mostrar_en_reversa_lista_ordenada(&lista);

    printf("\n\n \t\t\t\t\t Fin del programa... \n\n\a\a");
    getch();
    return 0;
}
