#pragma once
#include <iostream> // you must have this to call std::
#include "File.h"
class Persona
{
private:
	File* fileObject;
	std::string bestWord;
	void getOutputWord();
	void unknownWord();
	// Vectors to hold words related to words input by users
	std::vector<std::string> relatedWords;
	std::vector<float> relatedFSG;
	// Vectors to hold words related to persona
	std::vector<std::string> personaWords;
	std::vector<float> personaFSG;
	// Vector to hold words already used by player and persona
	std::vector<std::string> usedWords;
	void generatePersona(std::string* name, std::string* age, std::string* job, std::string* gender);
	std::string personaUsing;
	std::string personaFactors[3];
	std::string personaName;
	std::string personaAge;
	std::string personaJob;
public:
	Persona(std::string* name, std::string* age, std::string* job);
	Persona::Persona(std::string* name, std::string* age, std::string* job, std::string* gender);
	~Persona();
	std::string getBestWord(std::string word);
};

