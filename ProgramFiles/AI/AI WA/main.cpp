// main.cpp : Word Associaion
#include <iostream>
#include "file.h"

int main(int argc, char** argv) 
{
	// start prechecks and UI
	// call files
	/*File A(".\\A Appendix.txt"); */// , B("B"), C("C"), D("D"), E("E"), F("F"), G("G");
	std::cout << "\npath = " << argv[0] << "\n" << std::endl;
	File test("testInput.txt");
	File G("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt"); // example of working relative pathing
	//File A("..\\..\\..\\ProgramResources\\A Appendix\\A-B.txt");
	return 0;
}