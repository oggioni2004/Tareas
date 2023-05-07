#include "lista.h"
 
Nodo::~Nodo(){
  sig = NULL;
  ant = NULL;
  delete sig;
  delete ant;
}

Lista::Lista(){
  act = NULL;
}

void Lista::anexarLista(Elemento numero){
  Nodo *tmp, *primero;
  Nodo* nuevo = new Nodo;
  nuevo->dato = numero;
  nuevo->sig = nuevo;
  nuevo->ant = nuevo;

  if(act == NULL)
    act = nuevo;
  else{
    tmp = act->ant;
    tmp->sig = nuevo;
    nuevo->ant = tmp;
    nuevo->sig = act;
    act->ant = nuevo;
  }
}

void Lista::insertarLista(Elemento numero, int posicion){
  Nodo *nuevo, *tmp;
  nuevo = new Nodo;
  nuevo->dato = numero;
  nuevo->sig = NULL;
  nuevo->ant = NULL;

  if(posicion >= 1 && posicion <= longLista()){
    if(posicion == 1){
      tmp = act->ant;
      tmp->sig = nuevo;
      nuevo->ant = tmp;
      nuevo->sig = act;
      act->ant = nuevo;
      act = nuevo;
    }
    else{
      tmp = act;
      for(int i = 0; i < posicion - 2; i++)
        tmp = tmp->sig;
      nuevo->sig = tmp->sig;
      nuevo->ant = tmp;
      tmp->sig->ant = nuevo;
      tmp->sig = nuevo;
    }
  }
}
 
void Lista::eliminarLista(int posicion){
  Nodo *tmp, *borrar;
  if(posicion >= 1 && posicion <= longLista()){
    if(posicion == 1){
      if(act != act->sig){
        tmp = act->ant;
        borrar = tmp->sig;
        act = act->sig;
        act->ant = tmp;
        tmp->sig = act;
      }
      else{
        borrar = act;
        act = NULL;
      }
    }
    else{
      tmp = act;
      for(int i = 0; i < posicion-2; i++)
          tmp = tmp->sig;
      borrar = tmp->sig;
      Nodo* sig = tmp->sig->sig;
      tmp->sig = sig;
      sig->ant = tmp;
    }

    delete borrar;
  }
}

Elemento Lista::infoLista(int posicion){
   Nodo* tmp = act;
   
   for(int i = 1; i < posicion; i++)
      tmp = tmp->sig;
      
   return tmp->dato;
}

int Lista::longLista(){
  int ans;
  if(vaciaLista())
    ans = 0;
  else{
    Nodo* tmp, *primero;
    int cont = 1;
    tmp = act;
    primero = act;

    while(tmp->sig != primero){
      tmp = tmp->sig;
      cont++;
    }

    ans = cont;
  }

  return ans;
}

bool Lista::vaciarLista(){
   return act == NULL;
}