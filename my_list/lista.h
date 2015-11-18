using namespace std;
template<typename T>
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
		cent=new nodo(dato);
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
	nodo* find(T dato)
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
	lista operator+(const lista o,const lista p) {
	lista tmp ;
	nodo<T> *cent;
	cent=o->start;
	for(int i =0;i<o.size;i++)
		{
		while(cent->sig)
			{
			tmp.add_nodo(cent->dato); 
			cent =cent->sig;
			}
		tmp.add_nodo(end->dato);		
		}
	cent=p->start;
	for(int i =0;i<p.size;i++)
		{
		while(cent->sig)
			{
			tmp.add_nodo(cent->dato); 
			cent =cent->sig;
			}
		tmp.add_nodo(end->dato);		
		}
	return tmp;
	}
	lista operator-(const lista o,const lista p) {
	lista tmp ;
	nodo<T> *cent;
	cent=o->start;
	for(int i =0;i<o.size;i++)
		{
		while(cent->sig)
			{
			tmp.add_nodo(cent->dato); 
			cent =cent->sig;
			}
		tmp.add_nodo(end->dato);		
		}
	cent=p->start;
	for(int i =0;i<p.size;i++)
		{
		while(cent)
			{
			cent = find(cent->dato);
			if (cent == NULL)
				{tmp.add_nodo(cent->dato);} 
			cent =cent->sig;
			}
		}
	return tmp;	
	}

};
