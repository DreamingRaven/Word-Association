// main.cpp : Word Associaion
#include <iostream>
#include "file.h"

int main(int argc, char** argv) 
{
	std::cout << "\npath = " << argv[0] << "\n" << std::endl;

	// working example!!! of File class manipulation
		// creating file object using relative & full file path constructor
		File G("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt");
		// creating variables to put data into
		std::vector<std::vector<std::string> > testMultiDimensionVector;
		std::string testString = "AARDVARK";
		
		// example of getting data
			testMultiDimensionVector = G.getConcept(testString);
			std::cout << "and the return vector of example says [0][0] = " 
				<< testMultiDimensionVector[0][0] << std::endl;

	return 0;
}