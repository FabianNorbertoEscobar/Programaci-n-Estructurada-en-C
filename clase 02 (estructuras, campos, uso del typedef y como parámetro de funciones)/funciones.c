#include "header.h" //las comillas dobles lo que hacen es buscar el archivo en la ruta del proyecto que se est� codificando
void mostrarAl(t_alumno alum)//las estructuras pueden mandarse como parametros de funciones
    {
    printf("\n Dni: %d \t Promedio: %.2f \n",alum.dni,alum.prom);
    }
/*
bien podr�a haber hecho �sta funci�n para el tipo s_alumno

void mostrarAl(s_alumno alum)
    {
    printf("\n Dni: %d \t Promedio: %.2f \n",alum.dni,alum.prom);
    }
*/
