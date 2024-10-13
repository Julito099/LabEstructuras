#include <iostream>
#include "Persona.hpp"
using namespace std;

class NodoPila
{
public:
	NodoPila(Persona* p, NodoPila* sig = NULL);
	~NodoPila();

private:
	Persona* persona;
	NodoPila* siguiente;
	friend class Pila;
};

typedef NodoPila* pnodoPila;