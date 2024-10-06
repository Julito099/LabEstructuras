#include "Pila.hpp"

Persona::Persona(int edad) {
	this->edad = edad;
	this->genero = rand() % 2;
	generarDni();
}

Pila::Pila()
{
	ultimo = NULL;
	longitud = 0;
}
void Pila::insertar(persona v)
{
	pnodoPila nuevo;
	nuevo = new NodoPila(v, ultimo);
	ultimo = nuevo;
	longitud++;
}
Persona Pila::extraer()
{
	pnodoPila nodo;
	Persona v;
	if(!ultimo)
		return 0;
	nodo = ultimo;
	ultimo = nodo->siguiente;
	v = nodo->valor;
	longitud--;
	delete nodo;
	return v;
}
Persona Pila::cima()
{
	if(!ultimo)
		return 0;
	return ultimo->valor;
}
void Pila::mostrar()
{
	pnodoPila aux = ultimo;
	cout << "\tEl contenido de la pila es: ";
	while(aux) {
		cout << "-> " << aux->valor;
		aux = aux->siguiente;
	}
	cout << endl;
}
Persona Pila::getLongitud()
{
	return this->longitud;
}
Pila::~Pila()
{
	pnodoPila aux;
	while(ultimo) {
		aux = ultimo;
		ultimo = ultimo->siguiente;
		delete aux;
	}
}