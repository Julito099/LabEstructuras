#include "Cola.hpp"

Cola::Cola()
{
	primero = NULL;
	ultimo = NULL;
	longitud = 0;
}
void Cola::insertar(Persona* p)
{
	pnodoCola nuevo;
	nuevo = new NodoCola(p, ultimo);
	if(ultimo)
		ultimo->siguiente = nuevo;
	
	ultimo = nuevo;
	
	if(!primero)
		primero = nuevo;
	longitud++;
	
}
void Cola::mostrar()
{
	pnodoCola aux = primero;
	cout << "\tEl contenido de la cola es: ";
	while(aux) {
		cout << "-> " << aux->persona;
		aux = aux->siguiente;
	}
	cout << endl;
}
Persona* Cola::eliminar()
{
	pnodoCola nodo;
	Persona* p;
	nodo = primero;
	if(!nodo)
		return 0;
	primero = nodo->siguiente;
	p = nodo->persona;
	delete nodo;
	if(!primero)
		ultimo = NULL;
	longitud--;
	return p;
}
Persona* Cola::verPrimero(){
	return primero->persona;
}
Cola::~Cola()
{
	while(primero)
		eliminar();
}