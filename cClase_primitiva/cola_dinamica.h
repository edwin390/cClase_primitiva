#pragma once
#include "contenedor.h"
#include "lista_dinamica.h"

class cCola_di:public contenedor
{
public:
	~cCola_di();
	bool isempy();
	bool isfull();
	void push(float dato);
	float pop();
	void vaciar();
	void imprimir();
	int size();
private:
	cLista cola;

};
