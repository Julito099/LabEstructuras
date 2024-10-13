#ifndef PROCESO_HPP
#define PROCESO_HPP

#include <string>

using namespace std;

class Proceso {
public:
	int pid;
	string usuario;
	bool estado; 
	int prioridad;
	bool tipo_proceso; 
	
	Proceso();
	~Proceso();
	void generar_prioridad();
	void mostrar_proceso() const;
};

#endif
