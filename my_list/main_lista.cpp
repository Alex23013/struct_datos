#include <iostream>
#include "nodo.h"
#include "lista.h"
using namespace std;

void caratula()
{
	cout << "Ingrese una opcion: "<<endl;
	cout << "1: añadir nodo"<<endl;
	cout << "2: quitar nodo"<<endl;
	cout << "3:imprimir lista"<<endl;
	
}
int main()
{
	lista mylista;
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
		mylista.add_nodo(n);}
	if(opcion ==2)	
		{cout << "que dato desea quitar ? "<< endl;
		int n;
		cin>>n;		
		mylista.quitar_nodo(n);}
	if(opcion ==3)	
		{cout << "la lista es: "<< endl;
		mylista.print_lista();}
	cout << "Que desea hacer ahora? "<<endl;
	cout << "1: volver al menu    0: salir"<<endl;
	cin >> salida;
	}
}
