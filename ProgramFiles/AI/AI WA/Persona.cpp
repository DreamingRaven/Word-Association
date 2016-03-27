#include "Persona.h"
#include "Concept.h"
#include "File.h"
#include <iostream>
#include <string>
#include <vector>


Persona::Persona()
{
	//Constructor
}

Persona::~Persona()
{
	//Deconstructor
}

std::string Persona::getBestWord(std::string word)
{
	Concept coChoice(word, fileObject);
	int temp;
	for (int index = 0; index <= 10; index++)
	{
		temp = coChoice.getWordData(index, &conceptWords[index], &conceptLikely[index]);
	}
	bestWord = conceptWords[0];
	return bestWord;
}
