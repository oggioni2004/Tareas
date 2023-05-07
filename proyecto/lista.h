#ifndef __lista_H
#define __lista_H

#include <iostream>
#include <string>

using namespace std;
typedef int elemento;

class Nodo{
public:
	elemento dato;
	Nodo* sig;
	Nodo* ant;
	Nodo();
	~Nodo();
};

class Lista{
private:

	Nodo* act;

public:

	Lista();
	~Lista();
	void anexarLista(elemento numero);
	void insertarLista(elemento numero, elemento posicion);
	void eliminarLista(elemento posicion);
	elemento infoLista(elemento posicion);
	elemento longLista();
	bool vaciarLista();

};

#endif