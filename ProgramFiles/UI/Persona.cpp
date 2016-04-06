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
	// Initiate File Class
	// File* fileObject = new File("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt");
	Persona::generatePersona(name, age, job);
}

Persona::~Persona()
{
	//Deconstructor
}

std::string Persona::getBestWord(std::string word)
{
	// Make sure input word is in full caps
	std::locale loc;
	for (std::string::size_type i = 0; i < word.length(); i++)
	{
		word[i] = std::toupper(word[i], loc);
	}
	// Initiate Concept class; pass File class and input word
	File fileObject("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt");
	Concept coChoice(word, fileObject);
	int temp;
	std::string fillerWord;
	float fillerFSG;
	float sum = 0;
	// Call Concept classes to get related words
	for (int index = 1; index < coChoice.wordCount; index++)
	{
		temp = coChoice.getWordData(index, &fillerWord, &fillerFSG);
		relatedWords.push_back(fillerWord);
		relatedFSG.push_back(fillerFSG);
	}
	// Call concept again to get words related to Persona
	// Make sure word is Uppercase to prevent errors
	std::string jobUpper;
	jobUpper = personaJob;
	for (std::string::size_type i = 0; i < personaJob.length(); i++)
	{
		jobUpper[i] = std::toupper(personaJob[i], loc);
	}
	// Create new concept object
	Concept personaRelations(jobUpper, fileObject);
	for (int index = 1; index < personaRelations.wordCount; index++)
	{
		temp = personaRelations.getWordData(index, &fillerWord, &fillerFSG);
		relatedWords.push_back(fillerWord);
		relatedFSG.push_back(fillerFSG);
	}
	Persona::getOutputWord();
	return bestWord;
}

void Persona::getOutputWord()
{
	// Will be completed after Concept update
	//Compare results from input word and persona words for relation
	float random = ((rand() % 1001) / 1000.);
	float count = 0;
	int size = relatedWords.size();
	for (int index = 1; count < random; index++)
	{
		count = count + relatedFSG[index];
		if (count > random)
		{
			bestWord = relatedWords[index];
		}
	}
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
	personaJob = personaFactors[2];
}
