#include "NodoPila.hpp"
using namespace std;


NodoPila::NodoPila(Persona persona, NodoPila* sig)
{
	valor = persona;
	siguiente = sig;
}

NodoPila::~NodoPila(){
}