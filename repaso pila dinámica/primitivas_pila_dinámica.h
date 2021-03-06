#include "dato.h"
#include<stdio.h>
#include<stdlib.h>

#define     PILA_VACIA          0
#define     MEMORIA_LLENA       0
#define     OK                  1

typedef struct s_nodo
{
    t_dato dato;
    struct s_nodo *sig;
}t_nodo;

typedef t_nodo* t_pila;

void crear_pila(t_pila*);
int pila_vacia(const t_pila*);
int pila_llena(const t_pila*);
int apilar(t_pila*,const t_dato*);
int desapilar(t_pila*,t_dato*);
int ver_tope(const t_pila*,t_dato*);
void vaciar_pila(t_pila*);

