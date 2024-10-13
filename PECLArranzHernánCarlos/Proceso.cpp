#include "Proceso.hpp"
#include <iostream>
#include <cstdlib>
using namespace std;

int Proceso::pid_counter = 300;
Proceso::Proceso()
{
	pid = pid_counter++;
	nombre_usuario = "user" + to_string(rand() % 100 + 1);
	estado = false;
	tipo_proceso = rand() % 2;
	generar_prioridad()
}

Proceso::~Proceso()
{
}

void Proceso::generar_prioridad(){
	if(tipo_proceso) {
		prioridad = rand() % 100;
	} else {
		prioridad = 120 + (rand() % 39 - 19);
	}
}

void Proceso::mostrar_proceso() const {
	string tipo = tipo_proceso ? "Tiempo Real" : "Normal";
	string estado_str = estado ? "Ejecución" : "Parado";
	cout << "PID: " << pid << ", Usuario: " << nombre_usuario << ", tipo: " << tipo << ", estado: " << estado_str << ", prioridad: " << prioridad << endl;
}