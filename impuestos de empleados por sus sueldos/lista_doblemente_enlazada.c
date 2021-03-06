#include "lista_doblemente_enlazada.h"

void crear_lista(t_lista *l)
{
    *l=NULL;
}

int lista_vacia(const t_lista *l)
{
    return *l==NULL;
}

int insertar_en_lista_ordenada_con_duplicados(t_lista *l,const t_dato_lista *d,t_cmp comparar)
{
    t_nodo_lista *act=*l;
    t_nodo_lista *ant=NULL;
    t_nodo_lista *sig=NULL;

    if(act)
    {
        while(act->sig&&comparar((void*)&act->sig,(void*)d)<0)
            act=act->sig;
        while(act->ant&&comparar((void*)&act->sig,(void*)d)>0)
            act=act->ant;

        if(comparar((void*)&act->sig,(void*)d)>0)
        {
            sig=act;
            ant=act->ant;
        }
        else
        {
            ant=act;
            sig=act->sig;
        }
    }

    act=(t_nodo_lista*)malloc(sizeof(t_nodo_lista));
    if(!act)
        return MEMORIA_LLENA;

    act->dato=*d;
    act->ant=ant;
    act->sig=sig;

    if(ant)
        ant->sig=act;
    if(sig)
        sig->ant=act;

    *l=act;
    return VERDADERO;
}

int sacar_primero_de_lista(t_lista *l,t_dato_lista *d)
{
    t_nodo_lista *aux;

    if(!*l)
        return FALSO;

    while((*l)->ant)
        *l=(*l)->ant;

    aux=*l;
    *l=(*l)->sig;
    if(*l)
        (*l)->ant=NULL;

    *d=aux->dato;
    free(aux);

    return VERDADERO;
}

int ver_primero_de_lista(const t_lista *l,t_dato_lista *d)
{
    if(!*l)
        return FALSO;

    while((*l)->ant)
        l=&(*l)->ant;

    *d=(*l)->dato;

    return VERDADERO;
}
