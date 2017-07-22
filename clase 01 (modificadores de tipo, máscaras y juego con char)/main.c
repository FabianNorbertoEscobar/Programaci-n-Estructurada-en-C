#include<stdio.h>
#include<conio.h>
#include<locale.h>
void main()
    {
    setlocale(LC_CTYPE,"Spanish");

    //el espacio reservado para una variable de un determinado tipo depende de la arquitectura de la computadora
    int x=2;//entero com�n
    short int sx=4;//usa la mitad de espacio en memoria
    long int lx=2;//usa el doble de espacio en memoria
    unsigned int ux=8;//el rango del entero se traslada a partir del cero para que se aproveche para positivos

    printf("\n\n MODIFICADORES DE TIPO Y M�SCARAS \n");
    //las mascaras se anteceden por porcentaje y son las que indican la interpretacion de cada uno de los datos
    printf("\n Entero: %d \t Tama�o: %d \t Octal: %o \t Hexadecimal: %x",x,sizeof(x),x,x);
    printf("\n Short: %d \t Tama�o: %d \t Octal: %o \t Hexadecimal: %x",sx,sizeof(sx),sx,sx);
    printf("\n Long: %d \t Tama�o: %d \t Octal: %o \t Hexadecimal: %x",lx,sizeof(lx),lx,lx);
    printf("\n Unsigned: %d \t Tama�o: %d \t Octal: %o \t Hexadecimal: %x",ux,sizeof(ux),ux,ux);

    char c1,c2,c3,c4;
    //c1="a"; da warning porque no se puede guardar un string en un char---->>>>> reemplazo por la siguiente sentencia
    //las comillas simples indica un caracter, y las dobles un string
    c1='a';//caracter
    c2='A';//caracter
    c3='3';//caracter
    c4=3;//n�mero-------->>>> su ascii es un coraz�n

    printf("\n\n JUEGOS CON CHAR \n");
    //los ca�har guardan n�meros enteros------>>>>>>>>>>> entonces pueden ser manipulados matem�ticamente
    printf("\n N�mero \t\t Valor en Ascii \t\t Hexadecimal \n");
    printf("\n %d \t\t\t %c \t\t\t\t %x",c1,c1,c1);
    printf("\n %d \t\t\t %c \t\t\t\t %x",c2,c2,c2);
    printf("\n %d \t\t\t %c \t\t\t\t %x",c3,c3,c3);
    printf("\n %d \t\t\t %c \t\t\t\t %x",c4,c4,c4);

    int r;
    printf("\n\n Sumando dos char \n");
    r=c3+c4;//sumo dos char
    printf("\n c3=%d \t c4=%d \t Suma: x=c3+c4=%d",c3,c4,r);

    int s;
    printf("\n\n CONVERTIR CARACTER A N�MERO \n");
    //s=c3-48; se debe restar 48 porque en el 48 comienzan a almacenarse los n�meros
    s=c3-'0';// para no recordar el n�mero 48, lo que se hace es restar el n�mero ascii en que se almacena el cero-->>>>> ojo! no es el caracter nulo
    printf("\n c3=%d \t Convertido a: %d",c3,s);

    printf("\n\n");
    getch();
    }
