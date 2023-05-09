#include <iostream>
#include "cola_dinamica_2.h"
#include "cola_estatica_2.h"
#include "pila_dinamica_2.h"
#include "pila_estatica_2.h"
using namespace std;

int main()
{
    contenedor *p;
	int iO = 0, iO2 = 0;
	float dat;
	bool band, band2 = true, is;
	while (band2 == true)
	{
		band = true;
		cout << endl << "desea usar un:" << endl << "1) pila estatica" << endl << "2) pila dinamica" << endl << "3) cola estatica" << endl << "4) cola dinamica" << endl << "5) salir" << endl;
		cin >> iO;
		switch (iO)
		{
		case 1:
			p = new cPila_es;
			while (band == true)
			{
				cout << endl << "pila estatica:" << endl;
				cout << endl << "que desea hacer:" << endl << "1) push" << endl << "2) pop" << endl << "3) is full" << endl << "4) is empty" << endl << "5) vaciar" << endl << "6) imprimir" << endl;
				cin >> iO2;
				switch (iO2)
				{
				case 1:
					cout << "dime un dato" << endl;
					cin >> dat;
					p->push(dat);
					break;
				case 2:
					dat=p->pop();
					cout << "dato: " << dat << endl;
					break;
				case 3:
					is = p->isfull();
					if (is == true)
						cout << "llena" << endl;
					else
						cout << "no esta llena" << endl;
					break;
				case 4:
					is = p->isempy();
					if (is == true)
						cout << "vacia" << endl;
					else
						cout << "no esta vacia" << endl;
					break;
				case 5:
					p->vaciar();
					cout << "anulada" << endl;
					break;
				case 6:
					cout << endl << "pila estatica:" << endl;
					p->imprimir();
					break;
				default:
					cout << "opcion no validad" << endl;
					break;
				}
			}
			break;
		case 2:
			p = new cPila_di;
			while (band == true)
			{	
				cout << endl << "pila dinamica:" << endl;
				cout << endl << "que desea hacer:" << endl << "1) push" << endl << "2) pop" << endl << "3) is full" << endl << "4) is empty" << endl << "5) vaciar" << endl << "6) imprimir" << endl;
				cin >> iO2;
				switch (iO2)
				{
				case 1:
					cout << "dime un dato" << endl;
					cin >> dat;
					p->push(dat);
					break;
				case 2:
					dat = p->pop();
					cout << "dato: " << dat << endl;
					break;
				case 3:
					is = p->isfull();
					if (is == true)
						cout << "llena" << endl;
					else
						cout << "no esta llena" << endl;
					break;
				case 4:
					is = p->isempy();
					if (is == true)
						cout << "vacia" << endl;
					else
						cout << "no esta vacia" << endl;
					break;
				case 5:
					p->vaciar();
					cout << "anulada" << endl;
					break;
				case 6:
					cout << endl << "pila dinamica:" << endl;
					p->imprimir();
					break;
				default:
					cout << "opcion no validad" << endl;
					break;
				}
			}
			break;
		case 3:
			p = new cCola_es;
			while (band == true)
			{
				cout << endl << "cola estatica:" << endl;
				cout << endl << "que desea hacer:" << endl << "1) push" << endl << "2) pop" << endl << "3) is full" << endl << "4) is empty" << endl << "5) vaciar" << endl << "6) imprimir" << endl;
				cin >> iO2;
				switch (iO2)
				{
				case 1:
					cout << "dime un dato" << endl;
					cin >> dat;
					p->push(dat);
					break;
				case 2:
					dat = p->pop();
					cout << "dato: " << dat << endl;
					break;
				case 3:
					is = p->isfull();
					if (is == true)
						cout << "llena" << endl;
					else
						cout << "no esta llena" << endl;
					break;
				case 4:
					is = p->isempy();
					if (is == true)
						cout << "vacia" << endl;
					else
						cout << "no esta vacia" << endl;
					break;
				case 5:
					p->vaciar();
					cout << "anulada" << endl;
					break;
				case 6:
					cout << endl << "cola estatica:" << endl;
					p->imprimir();
					break;
				default:
					cout << "opcion no validad" << endl;
					break;
				}
			}
			break;
		case 4:
			p = new cCola_di;
			while (band == true)
			{
				cout << endl << "cola dinamica:" << endl;
				cout << endl << "que desea hacer:" << endl << "1) push" << endl << "2) pop" << endl << "3) is full" << endl << "4) is empty" << endl << "5) vaciar" << endl << "6) imprimir" << endl;
				cin >> iO2;
				switch (iO2)
				{
				case 1:
					cout << "dime un dato" << endl;
					cin >> dat;
					p->push(dat);
					break;
				case 2:
					dat = p->pop();
					cout << "dato: " << dat << endl;
					break;
				case 3:
					is = p->isfull();
					if (is == true)
						cout << "llena" << endl;
					else
						cout << "no esta llena" << endl;
					break;
				case 4:
					is = p->isempy();
					if (is == true)
						cout << "vacia" << endl;
					else
						cout << "no esta vacia" << endl;
					break;
				case 5:
					p->vaciar();
					cout << "anulada" << endl;
					break;
				case 6:
					cout << endl << "cola dinamica:" << endl;
					p->imprimir();
					break;
				default:
					cout << "opcion no validad" << endl;
					break;
				}
			}
			break;
		case 5:
			band2 = false;
			break;
		default:
			cout << "opcion no validad";
			break;
		}
	}
}
