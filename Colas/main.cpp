#include <Cola.hpp>
#include "Persona.hpp"
int main(int argc, char **argv)
{
	Cola colaPersonas;
	
	// Crear algunas personas
    Persona* p1 = new Persona(25);
    Persona* p2 = new Persona(30);
    Persona* p3 = new Persona(12);
	Persona* p4 = new Persona(34);
	Persona* p5 = new Persona(80);
	colaPersonas.insertar(p1);
	colaPersonas.insertar(p2);
	colaPersonas.insertar(p3);
	colaPersonas.insertar(p4);
	colaPersonas.mostrar();
	
	Persona* primero = colaPersonas.verPrimero();
	colaPersonas.eliminar();
	cout << "\tDespues de extraer el primero (" << primero << ")..." << endl;
	colaPersonas.mostrar();
	
	colaPersonas.eliminar();
	colaPersonas.mostrar();
	colaPersonas.insertar(p5);
	colaPersonas.mostrar();
	colaPersonas.eliminar();
	colaPersonas.mostrar();
	colaPersonas.eliminar();
	colaPersonas.mostrar();
	colaPersonas.eliminar();
	colaPersonas.mostrar();
	colaPersonas.eliminar();
	colaPersonas.mostrar();
	
	return 0;
}
