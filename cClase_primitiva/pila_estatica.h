#pragma once
#include "contenedor.h"

class cPila_es:public contenedor
{
public:
	cPila_es();
	~cPila_es();
	bool isempy();
	bool isfull();
	void push(float dato);
	float pop();
	float top();
	void vaciar();
	void imprimir();
	int size();
private:
	float datos[6];
	int tope;
};