#pragma once
#include <iostream> // you must have this to call std::
#include "File.h"
class Persona
{
private:
	std::string bestWord;
	void getOutputWord();
	std::string relatedWords[6];
	float relatedFSG[6];
	std::string personaWords[6];
	float personaFSG[6];
	void generatePersona();
	std::string personaUsing;
	std::string personaFactors[2];
	std::string personaName;
	std::string personaAge;
	std::string personaJob;
public:
	Persona();
	~Persona();
	std::string getBestWord(std::string word);
};

