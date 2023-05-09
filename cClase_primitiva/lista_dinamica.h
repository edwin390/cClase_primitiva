#pragma once

class cNodo
{
private:
	void insertar_adelante(float);
	float eliminar_adelante();
	float fDat;
	cNodo* pSig;
	cNodo* pAnt;
	friend class cLista;
};

class cLista
{
public:
	cLista();
	~cLista();
	void insertar_inicio(float);
	float eliminar_inicio();
	void insertar_final(float);
	float eliminar_final();
	int size();
	bool isfun();
	bool isempty();
	void vaciar();
	void imprimir();

private:
	cNodo inicio;
	cNodo final;

};