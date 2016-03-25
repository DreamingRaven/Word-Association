#include "Concept.h"
#include "File.h"
// you may want the following (G)
//#include <string>
//#include <vector>

// vector<type>&name

Concept::Concept(char* a1)
{
	int* a2 = 0;	// The Value of the #G in the source file; Amount of participants given a specific cue.
	int* a3 = 0;	// The Value of the #P in the source file; Amount of participants that gave the specific response to the specific cue.
	
	// Call File::getConcept(vector<vector<char*>*>& vec);
	File* f;
	//f->getConcept( vector<vector<char*>*>& vec);
	
	conceptWord = a1;
	gArray = a2;
	pArray = a3;
}

void Concept::getWordData(char* word, int* fsg)
{
	fsg = generateFSG();
	word = conceptWord;
}

int* Concept::generateFSG()
{
	int* fsg = 0;
	// Divide each p in pArray by the corresponding g in gArray
	// Return the results
	return (fsg);
}

Concept::~Concept()
{
}
