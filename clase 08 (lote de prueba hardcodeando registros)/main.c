#include "header.h"
int main()
    {
    setlocale(LC_CTYPE,"Spanish");
    FILE*pf;
    t_persona personas[5]={ {39210915,"Fabi�n Escobar",21,{3,8,1995}},
                            {38798544,"Dami�n Fern�ndez",31,{4,7,1987}},
                            {40546112,"Florencia Urban",18,{17,03,1998}},
                            {38168964,"Jacinto Loma",22,{16,12,1997}},
                            {40985546,"Luc�a Bota",17,{5,12,1999}} };
    pf=fopen("personas_hardcodeado.dat","wb");
    if(!pf)
        {
        printf("\n\n No se pudo crear el archivo \n\n\a\a");
        exit(1);
        }
    fwrite(personas,sizeof(t_persona),5,pf);
    fclose(pf);
    printf("\n\n El archivo \"personas_hardcodeado.dat\" fue grabado exitosamente \n");
    printf("\n\n \t\t\t\t\t Fin del programa.. \n\n");
    getch();
    return 0;
    }
