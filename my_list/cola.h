using namespace std;
template<typename T>
class cola
{
public:
	nodo<T> *start;
	nodo<T> *end;
	nodo<T> *cent;
	
	
	int size ;

	cola(){start=NULL;end=NULL;cent=NULL;size=0;}

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
		cent=start;
		if (cent == NULL)
			{cout << "La cola esta vacia"<< endl;
			return ;}
		cout << cent->dato<<endl;
		start =cent->sig;
		delete cent;
	}
	void print_cola()
	{
	cent=start;
	if (cent == NULL)
			{cout << "La cola esta vacia"<< endl;
			return ;} 
	while(cent->sig)
		{
		cout <<" "<<cent->dato << " -> " ; 
		cent =cent->sig;
		}
	cout <<" "<< end->dato<<endl;
	}
	cola operator+(const cola o,const cola p) {
	cola tmp ;
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
