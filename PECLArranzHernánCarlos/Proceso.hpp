#ifndef PROCESO_HPP
#define PROCESO_HPP

#include <string>

class Proceso {
public:
	int pid;
	std::string usuario;
	bool estado; 
	int prioridad;
	bool tipo_proceso; 
	
	Proceso();
	void generar_prioridad();
	void mostrar_proceso() const;
};

#endif
