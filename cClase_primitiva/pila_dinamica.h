#pragma once
#include "contenedor.h"
#include "lista_dinamica.h"

class cPila_di:public contenedor
{
public:
	~cPila_di();
	bool isempy();
	bool isfull();
	void push(float dato);
	float pop();
	float top();
	void vaciar();
	void imprimir();
	int size();
private:
	cLista mipila;
};
