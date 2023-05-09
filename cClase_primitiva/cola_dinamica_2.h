#pragma once
#include "cola_dinamica.h"
#include <iostream>
using namespace std;

cCola_di::~cCola_di()
{
	cola.vaciar();
}

bool cCola_di::isempy()
{
	return cola.isempty();
}

bool cCola_di::isfull()
{
	return cola.isfun();
}

void cCola_di::push(float dato)
{

	cola.insertar_final(dato);

}

float cCola_di::pop()
{

	return cola.eliminar_inicio();
}

void cCola_di::vaciar()
{
	cola.vaciar();
}


void cCola_di::imprimir()
{
	cola.imprimir();
}

int cCola_di::size()
{
	return cola.size();
}