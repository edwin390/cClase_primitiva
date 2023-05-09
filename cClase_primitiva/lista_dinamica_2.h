#pragma once
#include "lista_dinamica.h"
#include <iostream>
using namespace std;

void cNodo::insertar_adelante(float nd)
{
	cNodo* pNuevo = new cNodo;
	pNuevo->fDat = nd;
	pSig->pAnt = pNuevo;
	pNuevo->pAnt = this;
	pNuevo->pSig = pSig;
	this->pSig = pNuevo;
}

float cNodo::eliminar_adelante()
{
	float f;
	cNodo* pEli = pSig;
	f = pEli->fDat;
	pSig = pEli->pSig;
	pSig->pAnt = this;
	delete pEli;
	return f;

}

cLista::cLista()
{
	final.pAnt = &inicio;
	inicio.pSig = &final;
}

cLista::~cLista()
{
	vaciar();
}
void cLista::insertar_inicio(float nd)
{
	inicio.insertar_adelante(nd);
}

float cLista::eliminar_inicio()
{
	return inicio.eliminar_adelante();
}
void cLista::insertar_final(float nd)
{
	final.pAnt->insertar_adelante(nd);
}

float cLista::eliminar_final()
{
	return final.pAnt->pAnt->eliminar_adelante();
}

bool cLista::isfun()
{
	return true;

}

bool cLista::isempty()
{
	return(&inicio == final.pAnt);
}

int cLista::size()
{
	int i = 0;
	cNodo* p = inicio.pSig;
	while (&final != p)
	{
		i++;
		p = p->pSig;
	}
	return i;
}

void cLista::vaciar()
{
	while (not isempty())
	{
		eliminar_inicio();
	}
}

void cLista::imprimir()
{
	cNodo* p = inicio.pSig;
	while (&final != p)
	{
		cout << p->fDat << endl;
		p = p->pSig;
	}
}
