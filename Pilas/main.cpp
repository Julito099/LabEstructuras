#include "Pila.hpp"
#include "Persona.hpp"

int main(int argc, char **argv)
{
    Pila pilaPersonas;

    // Crear algunas personas
    Persona* p1 = new Persona(25);
    Persona* p2 = new Persona(30);
    Persona* p3 = new Persona(22);

    // Insertarlas en la pila
    pilaPersonas.insertar(p1);
    pilaPersonas.insertar(p2);
    pilaPersonas.insertar(p3);

    pilaPersonas.mostrar();
    
    Persona* cima = pilaPersonas.cima();
    pilaPersonas.extraer();
    cout << "\tDespués de extraer la cima:" << endl;
    cima->mostrar(); // Mostrar la cima extraída
    pilaPersonas.mostrar();
    
    pilaPersonas.extraer();
    pilaPersonas.mostrar();
    pilaPersonas.extraer();
    pilaPersonas.mostrar();

    
    return 0;
}
