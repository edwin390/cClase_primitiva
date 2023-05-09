#pragma once
#include "pila_dinamica.h"
#include <iostream>
using namespace std;

cPila_di::~cPila_di()
{
	mipila.vaciar();
}

bool cPila_di::isempy()
{
	return mipila.isempty();
}

bool cPila_di::isfull()
{
	return mipila.isfun();
}

void cPila_di::push(float dato)
{

	mipila.insertar_inicio(dato);

}

float cPila_di::pop()
{

	return mipila.eliminar_inicio();
}

float cPila_di::top()
{
	float i;
	i = mipila.eliminar_inicio();
	mipila.insertar_inicio(i);
	return i;
}

void cPila_di::vaciar()
{
	mipila.vaciar();
}


void cPila_di::imprimir()
{
	mipila.imprimir();
}

int cPila_di::size()
{
	return mipila.size();
}
