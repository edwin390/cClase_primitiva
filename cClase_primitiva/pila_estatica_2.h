#pragma once
#include "pila_estatica.h"
#include <iostream>
using namespace std;

cPila_es::cPila_es()
{
	tope = 0;
}

cPila_es::~cPila_es()
{
	vaciar();
}

bool cPila_es::isempy()
{
	return tope == -1;
}

bool cPila_es::isfull()
{
	return tope == 6;
}

void cPila_es::push(float dato)
{

	if (not isfull())
	{
		datos[tope] = dato;
		tope++;
	}

}

float cPila_es::pop()
{
	if (isempy())
		cout << "la pila esta vacía";
	else
		tope--;
	return datos[tope];
}

float cPila_es::top()
{

	return datos[tope - 1];
}

void cPila_es::vaciar()
{
	if (not isempy())
	{
		while (tope >= 0)
		{
			pop();
		}
	}
}

void cPila_es::imprimir()
{
	int i = 0;
	while (i < tope)
	{
		cout << datos[i] << endl;
		i++;
	}
}

int cPila_es::size()
{
	int i = 0;
	while (i < tope)
	{
		i++;
	}
	return i;
}
