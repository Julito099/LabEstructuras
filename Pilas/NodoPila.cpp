#include "NodoPila.hpp"
using namespace std;


NodoPila::NodoPila(Persona* p, NodoPila* sig)
{
	persona = p;
	siguiente = sig;
}

NodoPila::~NodoPila(){
}