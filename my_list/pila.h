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
	nodo<T>* find(T dato)
	{	nodo*out =NULL;
		out=start;
		while(out && out-> dato!=dato)
		{
			out =out->sig;
		}		
		return out;
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
	pila<T> operator+(pila b) {
	pila<T> tmp ;
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

	pila<T> operator-(pila b) {
	pila<T> tmp ;
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
