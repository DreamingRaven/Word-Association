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
<<<<<<< HEAD
	std::string testString = "AARDVARK";

	Persona A;
=======
	std::string testString = "aGenT";
	std::string testName;
	std::string testAge;
	std::string testJob;
	Persona A(&testName, &testAge, &testJob);
>>>>>>> 2cbbc7f34a21acd2a3cef942f533e4925cf53093
	std::cout << A.getBestWord(testString) << std::endl;	

	return 0;
}
