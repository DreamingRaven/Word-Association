#include "Persona.h"
#include "Concept.h"
#include "File.h"
#include <cstdlib>
#include <ctime>
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
	std::string gender = "empty";
	Persona::generatePersona(name, age, job, &gender);
}

Persona::Persona(std::string* name, std::string* age, std::string* job, std::string* gender)
{
	//Constructor
	// Initiate File Class
	// File* fileObject = new File("..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt");
	Persona::generatePersona(name, age, job, gender);
}

Persona::~Persona()
{
	//Deconstructor
}

std::string Persona::getBestWord(std::string word)
{
	// Make sure input word is in full caps
	std::locale loc;
	bestWord = "";
	for (std::string::size_type i = 0; i < word.length(); ++i)
	{
		word[i] = std::toupper(word[i], loc);
	}
	usedWords.push_back(word);
	// Initiate Concept class; pass File class and input word
	File fileObject("..\\..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt"); // "..\\..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt"
	Concept coChoice(word, fileObject);
	int temp;
	std::string fillerWord;
	float fillerFSG;
	float sum = 0;
	// Call Concept classes to get related words
	for (int index = 1; index < coChoice.wordCount; ++index)
	{
		temp = coChoice.getWordData(index, &fillerWord, &fillerFSG);
		relatedWords.push_back(fillerWord);
		relatedFSG.push_back(fillerFSG);
	}
	// Call concept again to get words related to Persona
	// Make sure word is Uppercase to prevent errors
	std::string jobUpper;
	jobUpper = personaJob;
	for (std::string::size_type i = 0; i < personaJob.length(); ++i)
	{
		jobUpper[i] = std::toupper(personaJob[i], loc);
	}
	// Create new concept object
	Concept personaRelations(jobUpper, fileObject);
	for (int index = 1; index < personaRelations.wordCount; ++index)
	{
		temp = personaRelations.getWordData(index, &fillerWord, &fillerFSG);
		personaWords.push_back(fillerWord);
		personaFSG.push_back(fillerFSG);
	}
	Persona::getOutputWord();
	usedWords.push_back(bestWord);
	// Make output word have the first letter capitalised and rest lower case
	for (std::string::size_type i = 0; i < bestWord.length(); ++i)
	{
		if (i == 0)
		{
			bestWord[i] = std::toupper(bestWord[i], loc);
		}
		else
		{
			bestWord[i] = std::tolower(bestWord[i], loc);
		}
	}
	if (bestWord == "")
	{
		Persona::unknownWord();
	}
	relatedWords.clear();
	relatedFSG.clear();
	personaWords.clear();
	personaFSG.clear();
	return bestWord;
}

void Persona::getOutputWord()
{
	// Will be completed after Concept update
	std::srand(std::time(0)); // use current time as seed for random generator
	//Compare results from input word and persona words for relation
	float random = ((rand() % 1001) / 1000.);
	bool repeatWord = true;
	if (relatedWords.size() > 0)
	{
		while (repeatWord == true)
		{
			if (repeatWord == true)
			{
				random = ((rand() % 1001) / 1000.);
				repeatWord = false;
				float count = 0;
				for (int index = 0; count < random; ++index)
				{
					count = count + relatedFSG[index];
					if (count > random)
					{
						bestWord = relatedWords[index];
					}
				}
				for (int test = 0; test < usedWords.size(); ++test)
				{
					if (bestWord == usedWords[test])
					{
						repeatWord = true;
					}
				}
			}
		}
	}
}

void Persona::generatePersona(std::string* name, std::string* age, std::string* job, std::string* gender)
{
	//Randomly select a Persona
	int random = rand() % 1 + 1;
	std::ostringstream convert;
	convert << random;
	personaUsing = convert.str();
	//Get file path for selected persona
	std::string personaFilePath = "..\\..\\..\\..\\ProgramResources\\Personas\\" + personaUsing + ".txt"; // "..\\..\\..\\..\\ProgramResources\\Personas\\1.txt"
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
	*gender = personaFactors[3];
	personaJob = personaFactors[2];
}

void Persona::unknownWord()
{
	bestWord = "what";
}