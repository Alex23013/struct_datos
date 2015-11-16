class nodo
{
public:
	int dato;
	nodo *sig;
	nodo *ant;

nodo(int dato=0)
	{this->dato=dato;
	sig=NULL;ant=NULL;}

void add_dato(int dato){this->dato=dato;}
};
