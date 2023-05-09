#pragma once
#include "cola_estatica.h"
#include <iostream>
using namespace std;

cCola_es::cCola_es()
{
	frente = 0;
	final = 0;
	contador = 0;
}

cCola_es::~cCola_es()
{
	vaciar();
}

bool cCola_es::isempy()
{
	return contador == 0;
}

bool cCola_es::isfull()
{
	return contador == 5;
}

void cCola_es::push(float dato)
{

	if (not isfull())
	{
		datos[final] = dato;
		final++;
		final = final % 6;
		contador++;
	}

}

float cCola_es::pop()
{
	float i;
	i = datos[final];
	frente++;
	frente = frente % 6;
	contador--;

	return i;
}

void cCola_es::vaciar()
{
	if (not isempy())
	{
		contador = 0;
		final = 0;
		frente = 0;
	}
}

