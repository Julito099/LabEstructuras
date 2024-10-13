#include "NodoCola.hpp"

class Cola
{
public:
	Cola();
	~Cola();
	
	void insertar(Persona* p);
	Persona* eliminar();
	void mostrar();
	Persona* verPrimero();

private:
	pnodoCola primero, ultimo;
	int longitud;
};