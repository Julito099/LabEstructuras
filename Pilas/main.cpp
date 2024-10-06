#include <Pila.hpp>

int main(int argc, char **argv)
{
	personas[i] = new Persona(edad);
	julio = new Persona(20);
	carlos = new Persona(23);
	pepe = new Persona(40);
	juaco = new Persona(83);
	rico = new Persona(999);
	Pila pila;
	pila.insertar(julio);
	pila.insertar(carlos);
	pila.insertar(pepe);
	pila.insertar(juaco);
	pila.mostrar();
	
	int cima = pila.cima();
	pila.extraer();
	cout << "\tDespues de extraer la cima (" << cima << ")..." << endl;
	pila.mostrar();
	
	pila.insertar(rico);
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	pila.extraer();
	pila.mostrar();
	
	return 0;
}
