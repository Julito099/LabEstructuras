#ifndef PROCESO_HPP
#define PROCESO_HPP

#include <string>

using namespace std;

class Proceso {
private:
    int pid;
    string usuario;
    bool estado; 
    int prioridad;
    bool tiempoReal; 

public:
    Proceso(int pid, string usuario, bool tiempoReal);
    ~Proceso();
    int getPID() const;
    bool mostrar_proceso() const;
    int getPrioridad() const;
    bool esTiempoReal() const;

    void setEjecucion(bool estado);
    void setPrioridad(int nuevaPrioridad);

    void mostrar() const;
};

#endif // PROCESO_HPP
