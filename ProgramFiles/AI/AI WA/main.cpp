// main.cpp : Word Associaion
#include <iostream>
#include "file.h"

int main(int argc, char** argv) 
{
	//File A(".\\A Appendix.txt"); // , B("B"), C("C"), D("D"), E("E"), F("F"), G("G");
	std::cout << "\npath = " << argv[0] << "\n" << std::endl;

	//File test("testInput.txt");
	File G("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt"); // example of working relative pathing
	
	std::vector<std::vector<std::string> > testVector;
	G.getConcept(testVector);
	// std::cout << testVector[0][0] << std::endl;
	std::string testString;
	// std::cout << testVector[0][0] << std::endl;
	testVector = G.getConcept(testString);

	return 0;
}