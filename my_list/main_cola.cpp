#include <iostream>
#include "nodo.h"
#include "cola.h"
using namespace std;

void caratula()
{
	cout << "Ingrese una opcion: "<<endl;
	cout << "1: añadir nodo"<<endl;
	cout << "3: atender nodo"<<endl;
	
}
int main()
{
	cola mycola;
	int opcion;
	int salida =5;
	while(salida != 0)
	{
	caratula();
	cin >> opcion;
	if(opcion ==1)	
		{cout << "que dato desea añadir ? "<< endl;
		int n;
		cin>>n;		
		mycola.add_nodo(n);
		cout << "la nueva cola es " <<endl;
		mycola.print_cola();}
	if(opcion ==3)	
		{cout << "el dato es:  ";
		mycola.get_dato();
		cout << "la cola acumulada es:  " <<endl;
		mycola.print_cola();}
	cout << "Que desea hacer ahora? "<<endl;
	cout << "1: volver al menu    0: salir"<<endl;
	cin >> salida;
	}
}
