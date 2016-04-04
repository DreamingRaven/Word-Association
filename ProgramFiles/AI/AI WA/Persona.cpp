#include "Persona.h"
#include "Concept.h"
#include "File.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <locale>


Persona::Persona(std::string* name, std::string* age, std::string* job)
{
	//Constructor
	Persona::generatePersona(name, age, job);
}

Persona::~Persona()
{
	//Deconstructor
}

std::string Persona::getBestWord(std::string word)
{
	// Initiate File Class
	File fileObject("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt");
	// Make sure input word is in full caps
	std::locale loc;
	for (std::string::size_type i = 0; i < word.length(); i++)
	{
		word[i] = std::toupper(word[i], loc);
	}
	// Initiate Concept class; pass File class and input word
	Concept coChoice(word, fileObject);
	int temp;
	float sum = 0;
	// Call Concept classes to get related words
	for (int index = 1; index < coChoice.wordCount; index++)
	{
		temp = coChoice.getWordData(index, &relatedWords[index-1], &relatedFSG[index-1]);
		sum = sum + relatedFSG[index - 1];
		std::cout << sum << std::endl;
	}
	// Call concept again to get words related to Persona
	// Issue with how File class works?
	/*
	std::string jobUpper;
	std::locale loc;
	for (std::string::size_type i = 0; i < personaJob.length(); i++)
	{
	jobUpper[i] = std::toupper(personaJob[i], loc);
	}
	Concept personaRelations(jobUpper, fileObject);
	for (int index = 0; index < 1; index++)
	{
	temp = personaRelations.getWordData(index, &personaWords[index], &personaFSG[index]);
	}
	*/
	Persona::getOutputWord();
	return bestWord;
}

void Persona::getOutputWord()
{
	// Will be completed after Concept update
	//Compare results from input word and persona words for relation
	bestWord = relatedWords[0];
}

void Persona::generatePersona(std::string* name, std::string* age, std::string* job)
{
	//Randomly select a Persona
	int random = rand() % 1 + 1;
	std::ostringstream convert;
	convert << random;
	personaUsing = convert.str();
	//Get file path for selected persona
	std::string personaFilePath = "..\\..\\..\\ProgramResources\\Personas\\" + personaUsing + ".txt";
	std::cout << (personaFilePath) << std::endl;
	//Read in from file
	std::ifstream file;
	file.open(personaFilePath);
	std::string line;
	if (file.is_open())
	{
		int index = 0;
		while (std::getline(file, line))
		{
			personaFactors[index] = line;
			index++;
		}
		file.close();
	}
	//Store data from file in correct variables
	*name = personaFactors[0];
	*age = personaFactors[1];
	*job = personaFactors[2];
}
