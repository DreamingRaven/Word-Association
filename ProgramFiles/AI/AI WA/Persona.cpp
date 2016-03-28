#include "Persona.h"
#include "Concept.h"
#include "File.h"
#include <iostream>
#include <string>
#include <vector>


Persona::Persona()
{
	//Constructor

	// allocate new heap memory for object
	fileObject = new File("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt"); // From G

}

Persona::~Persona()
{
	//Deconstructor

	// delete the heap memory for object
	delete fileObject; // From G
}

std::string Persona::getBestWord(std::string word)
{
	//Concept coChoice(word, fileObject);
	//int temp;
	//for (int index = 0; index <= 10; index++)
	//{
	//	temp = coChoice.getWordData(index, &conceptWords[index], &conceptLikely[index]);
	//}
	//bestWord = conceptWords[0];
	//return bestWord;
	//		
	//		// I had to comment it out as it was just broken and stopping compile From G
	//		// if I had to do it I would do it something like:
	//
	//		Concept cue(word, *fileObject);				// an object for the word
	//		Concept persona("BUILDER", *fileObject);	// an object for the persona
	//
	//		// then compare them and see if there is any match,
	//		// if not then just use most likeley from first object.
	//		// From G

	return std::string();
}
