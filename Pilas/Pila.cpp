#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}

void Pila::insertar(Persona* p)
{
    pnodoPila nuevo;
    nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}

Persona* Pila::extraer()
{
    pnodoPila nodo;
    Persona* p;
    if(!ultimo)
        return NULL;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    p = nodo->persona;
    longitud--;
    delete nodo;
    return p;
}

Persona* Pila::cima()
{
    if(!ultimo)
        return NULL;
    return ultimo->persona;
}

void Pila::mostrar()
{
    pnodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: " << endl;
    while(aux) {
        aux->persona->mostrar(); // Llamar al método mostrar de Persona
        aux = aux->siguiente;
    }
    cout << endl;
}

int Pila::getLongitud()
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
