#include "Concept.h"



Concept::Concept(char* a1)
{
	int* a2;	// The Value of the #G in the source file; Amount of participants given a specific cue.
	int* a3;	// The Value of the #P in the source file; Amount of participants that gave the specific response to the specific cue.
	
	// Call File::getConcept(a1, a2, a3)
	
	conceptWord = a1;
	gArray = a2;
	pArray = a3;
}

void getWordData(char* word, int* fsg)
{
	fsg = generateFSG();
	word = conceptWord;
}

int* generateFSG()
{
	// Divide each p in pArray by the corresponding g in gArray
	// Return the results
}

Concept::~Concept()
{
}
