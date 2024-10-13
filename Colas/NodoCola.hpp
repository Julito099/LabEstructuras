#include <iostream>
#include "Persona.hpp"
using namespace std;

class NodoCola
{
public:
	NodoCola(Persona* p, NodoCola* sig = NULL);
	~NodoCola();

private:
	Persona* persona;
	NodoCola* siguiente;	
	friend class Cola;
};

typedef NodoCola* pnodoCola;