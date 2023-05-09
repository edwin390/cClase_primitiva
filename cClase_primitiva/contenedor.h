#pragma once
class contenedor
{
public:
	virtual bool isempy()=0;
	virtual bool isfull()=0;
	virtual void push(float dato)=0;
	virtual float pop()=0;
	virtual void vaciar()=0;
	virtual void imprimir()=0;
};

