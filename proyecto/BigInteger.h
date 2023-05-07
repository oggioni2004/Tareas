#ifndef __BigInteger_H
#define __BigInteger_H

#include "lista.h"
#include <iostream>
#include <string>

using namespace std;
typedef int elemento;

class BigInteger{
public:
			
	BigInteger(string numero);
	BigInteger(BigInteger copia);

	void add(BigInteger numero);
	void product(BigInteger numero);
	void substract(BigInteger numero);
	void quotient(BigInteger numero);
	void remainder(BigInteger numero);
	void pow(BigInteger numero);
	string toString();

	BigInteger operator + (BigInteger a);
	BigInteger operator - (BigInteger a);
	BigInteger operator * (BigInteger a);
	BigInteger operator / (BigInteger a);
	BigInteger operator % (BigInteger a);

	bool operator == (BigInteger a);
	bool operator < (BigInteger a);
	bool operator <= (BigInteger a);

/*
	string sumarListaValores(lista b); 
	string MultiplicarListaValores(lista b);
	*/
};

#endif