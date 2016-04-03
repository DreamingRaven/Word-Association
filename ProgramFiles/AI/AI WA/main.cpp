// main.cpp : Word Associaion
#include <iostream>
#include "file.h"
#include "concept.h"
#include "Persona.h"

int main(int argc, char** argv) 
{
	// the testing zone.
	std::vector<std::vector<std::string> > testMultiDimensionVector;
	std::cout << "\npath = " << argv[0] << "\n" << std::endl;
	std::string testString = "STREETTT";


	// Test of calling Persona
	//Persona A;
	//std::cout << (A.getBestWord(testString)) << std::endl;
	//A.~Persona();

	// Nigh error proof File calls
	//File G("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt");
	//testMultiDimensionVector = G.getConcept(testString);
	
	// Concept calls (needs work in getWordData)
	//Concept J(testString, G);
	//J.getWordData();
			
	return 0;
}
