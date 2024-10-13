#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>

using namespace std;

class Persona {
public:
    Persona(int edad);
    ~Persona();
    
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
private: 
    bool genero;
    int edad;
    char dni[10];
	
	void generarDni(); // Método privado para generar el DNI automáticamente
};

#endif // PERSONA_HPP