
 //EjemploPilasestaticas

#include <iostream>
#include <string>
#include "Pila.h"
#include "TipoDato.h"

using namespace std;
int main()
{
	int N, cod;
	string desc;
	Pila pilita;
	TipoDato tipito;
	cout << "Ingresar el numero de elementos" << endl;
	cin >> N;
	for (int i=0 ; i < N; i++)
	{
		cout << "Ingresar el codigo del producto" << endl;
		cin >> tipito.id;
		cout << "Ingresar la descripcion del producto" << endl;
		cin >> tipito.descripcion;
		
		
		pilita.Apilar(tipito);
	}
	
	pilita.VerPila();

	cout << "Hello World!";

}