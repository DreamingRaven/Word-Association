#include "Persona.h"
#include "Concept.h"


Persona::Persona(char* wrd)
{
	Concept::Concept(wrd);
}

Persona::~Persona()
{
	//Deconstructor
}

char* Persona::getBestWord()
{
	return bestWrd;
}
