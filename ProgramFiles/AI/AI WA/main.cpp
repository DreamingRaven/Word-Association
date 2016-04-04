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
	std::string testString = "AARDVARK";

	Persona A;
	std::cout << A.getBestWord(testString) << std::endl;	

	return 0;
}
