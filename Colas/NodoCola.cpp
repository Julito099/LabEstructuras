#include "NodoCola.hpp"

NodoCola::NodoCola(Persona* p, NodoCola* sig)
{
	Persona* persona = p;
	siguiente = sig;
}

NodoCola::~NodoCola()
{
}