#include "NodoPila.hpp"

class Pila
{
public:
	Pila();
	~Pila();
	void insertar(Persona persona);
	int extraer();
	int cima();
	void mostrar();
	int getLongitud();
private:
	pnodoPila ultimo;
	int longitud;
};