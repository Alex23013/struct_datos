using namespace std;
template<typename T>
class pila
{
public:
	nodo<T> *start;
	nodo<T> *end;
	nodo<T> *cent;
	
	
	int size ;

	pila(){start=NULL;end=NULL;cent=NULL;size=0;}

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
	
	
	void get_dato()
	{
		cent=end;
		if (cent == NULL)
			{cout << "La pila esta vacia"<< endl;
			return ;}
		cout << cent->dato<<endl;
		end =cent->ant;
		delete cent;
	}
	void print_pila()
	{
	cent=end;
	if (cent == NULL)
			{cout << "La pila esta vacia"<< endl;
			return ;} 
	while(cent->ant)
		{
		cout <<" "<<cent->dato <<endl; 
		cent =cent->ant;
		}
	cout <<" "<< start->dato<<endl;
	}
	pila operator+(const pila o,const pila p) {
	pila tmp ;
	nodo<T> *cent;
	cent=o->end;
	for(int i =0;i<o.size;i++)
		{
		while(cent->ant)
			{
			tmp.add_nodo(cent->dato); 
			cent =cent->ant;
			}
		tmp.add_nodo(start->dato);		
		}
	cent=p->end;
	for(int i =0;i<p.size;i++)
		{
		while(cent->ant)
			{
			tmp.add_nodo(cent->dato); 
			cent =cent->ant;
			}
		tmp.add_nodo(start->dato);		
		}
	return tmp;
	}
	lista operator-(const pila o,const pila p) {
	lista tmp ;
	nodo<T> *cent;
	cent=o->end;
	for(int i =0;i<o.size;i++)
		{
		while(cent->ant)
			{
			tmp.add_nodo(cent->dato); 
			cent =cent->ant;
			}
		tmp.add_nodo(start->dato);	
		}
	cent=p->end;
	for(int i =0;i<p.size;i++)
		{
		while(cent)
			{
			cent = find(cent->dato);
			if (cent == NULL)
				{tmp.add_nodo(cent->dato);} 
			cent =cent->ant;
			}
		}
	return tmp;	
	}
	

};
