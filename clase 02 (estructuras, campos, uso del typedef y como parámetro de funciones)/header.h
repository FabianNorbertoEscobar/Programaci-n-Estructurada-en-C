#include<stdio.h>
#include<conio.h>
#include<locale.h>//las comillas angulares o corchetes triangulares lo que hacen es buscar esa biblioteca
                    // en la ruta donde est� instalado el compilador
struct s_alumno//nombre con s y gui�n bajo por convenci�n
    {
    int dni;
    //char nomb[20];
    float prom;
    };// ac� no estoy reservando memoria
        //-------->>>>> solo defino un conjunto de variables que se almacenan de forma contigua en la memoria
typedef struct
    {
    int dni;
    //char nomb[20];
    float prom;
    }t_alumno;// el typedef redefine una estructura como un tipo--------> tampoco reservo memoria
            // nombre con t y gui�n bajo por convenci�n
void mostrarAl(t_alumno al1);
