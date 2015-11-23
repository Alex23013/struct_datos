#include "nodo.h"
template<typename T>
using namespace std;
class lista
{
public:
	nodo<T> *start;
	nodo<T> *end;
	nodo<T> *cent;
	
	int size ;

	lista(){start=NULL;end=NULL;cent=NULL;size=0;}

	int ask_size(){return size;}
	bool ask_vacio(){
		if(start == NULL)
		{return true;}
		return false;
		}	
	void add_nodo(T dato)
	{
		cent=new nodo<T>(dato);
		size++;
		if(start == NULL){
			start = cent;
			end =start;}
		else{
		end->sig =cent;
		cent->ant =end;		
		end =cent;		
		}
	}
	nodo<T>* find(T dato)
	{
		cent =start;
		while(cent && cent-> dato!=dato)
		{
			cent =cent->sig;
		}		
		return cent;
	}
	
	void quitar_nodo(T dato)
	{
		cent = find(dato);
		size--;
		if (cent == NULL)
			{cout << "No existe el nodo"<< endl;
			return ;}
		cent->sig->ant=cent->ant;
		cent->ant->sig=cent->sig;
		
		if(cent == start)
		{start =start->sig;}
		if(cent == end)		
		{end =cent->ant;}
		
		delete cent;
		 	
	}
	void print_lista()
	{
	cent=start;
	if (cent == NULL)
			{cout << "La lista esta vacia"<< endl;
			return ;} 
	while(cent->sig)
	{
		cout <<cent->dato << "->"; 
		cent =cent->sig;
	}
	cout << end->dato<<endl;
	}

	lista<T> operator+(lista b) {
	lista<T> tmp ;
	cent=start;
	while(cent->sig)
		{
		
		tmp.add_nodo(cent->dato); 
		cent =cent->sig;
		}
	tmp.add_nodo(cent->dato); 
	cent=b.start;
	while(cent->sig)
		{
		
		tmp.add_nodo(cent->dato); 
		cent =cent->sig;
		}
	tmp.add_nodo(cent->dato);
	return tmp;
	}

	lista<T> operator-(lista b) {
	lista<T> tmp ;
	cent=start;
	while(cent->sig)
		{
		tmp.add_nodo(cent->dato); 
		cent =cent->sig;
		}
	tmp.add_nodo(cent->dato); 
	cent=b.start;
	while(cent)
		{
		if(tmp.find(cent->dato) == NULL)
			{//cout<<"no esta";
			tmp.add_nodo(cent->dato);
			}
		cent =cent->sig;
		}
	return tmp;
	}

};
