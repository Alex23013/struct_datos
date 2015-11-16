using namespace std;
class cola
{
public:
	nodo *start;
	nodo *end;
	nodo *cent;
	
	
	int size ;

	cola(){start=NULL;end=NULL;cent=NULL;size=0;}

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
	

};
