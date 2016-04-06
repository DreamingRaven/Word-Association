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
	std::vector<std::string> relatedWords;
	//std::string relatedWords[30];
	std::vector<float> relatedFSG;
	//float relatedFSG[30];
	std::vector<std::string> personaWords;
	//std::string personaWords[30];
	std::vector<float> personaFSG;
	//float personaFSG[30];
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

