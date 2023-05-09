#pragma once
#include "contenedor.h"

class cCola_es:public contenedor
{
public:
	cCola_es();
	~cCola_es();
	bool isempy();
	bool isfull();
	void push(float dato);
	float pop();
	void vaciar();
	void imprimir();
	int size();
private:
	float datos[6];
	int frente;
	int final;
	int contador;

};
