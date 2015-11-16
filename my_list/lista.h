using namespace std;
class lista
{
public:
	nodo *start;
	nodo *end;
	nodo *cent;
	
	int size ;

	lista(){start=NULL;end=NULL;cent=NULL;size=0;}

	int ask_size(){return size;}
	bool ask_vacio(){
		if(start == NULL)
		{return true;}
		return false;
		}	
	void add_nodo(int dato)
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
	nodo* find(int dato)
	{
		cent =start;
		while(cent && cent-> dato!=dato)
		{
			cent =cent->sig;
		}		
		return cent;
	}
	
	void quitar_nodo(int dato)
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

};
