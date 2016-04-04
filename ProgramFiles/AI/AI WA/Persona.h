#pragma once
#include <iostream> // you must have this to call std::
#include "File.h"
class Persona
{
private:
	std::string bestWord;
	void getOutputWord();
	std::string relatedWords[30];
	float relatedFSG[30];
	std::string personaWords[30];
	float personaFSG[30];
	void generatePersona(std::string* name, std::string* age, std::string* job);
	std::string personaUsing;
	std::string personaFactors[2];
	std::string personaName;
	std::string personaAge;
	std::string personaJob;
public:
	Persona(std::string* name, std::string* age, std::string* job);
	~Persona();
	std::string getBestWord(std::string word);
};

