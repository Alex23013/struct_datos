#include <iostream>

#include "lista.h"
using namespace std;

void caratula()
{
	cout << "Ingrese una opcion: "<<endl;
	cout << "1: añadir nodo"<<endl;
	cout << "2: quitar nodo"<<endl;
	
}
int main()
{
	lista<int> mylista;
	int opcion;
	int salida =5;
	while(salida != 0)
	{
	caratula();
	cin >> opcion;
	if(opcion ==1)	
		{
		int datos;
		cout << "cuantos datos quiere añadir" <<endl;
		cin>>datos;	
		for(int i =0;i< datos;i++)
			{cout << "Ingrese el dato "<< i+1 <<endl;
			int n;
			cin>>n;		
			mylista.add_nodo(n);
			}
		cout << "la nueva lista es " <<endl;
		mylista.print_lista();
		}
	if(opcion ==2)	
		{cout << "que dato desea quitar ? "<< endl;
		int n;
		cin>>n;		
		mylista.quitar_nodo(n);
		cout << "la lista ahora es " <<endl;
		mylista.print_lista();
		}
	
	cout << "Que desea hacer ahora? "<<endl;
	cout << "1: volver al menu    0: salir"<<endl;
	cin >> salida;
	}
	lista<int> b;
	cout << "una lista de prueba"<<endl;
	for(int i =0;i< 4;i++)
		{b.add_nodo(i);}
	b.print_lista();
	
	lista<int> c;
	cout <<"La suma: "<<endl;
	c=mylista+b;
	c.print_lista();
	cout <<"La resta: "<<endl;
	c=mylista-b;
	c.print_lista();

	
}
