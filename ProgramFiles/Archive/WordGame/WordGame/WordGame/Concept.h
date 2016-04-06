#pragma once
#include "File.h"
#include <string>
#include <vector>
class Concept
{
private:
	std::string conceptWord;
	std::vector<std::vector<std::string>> concept;
	int cueFrequency;
	float getFreq(std::string data);
	
public:
	int wordCount;
	Concept(std::string word, File fileObject);
	~Concept();
	int Concept::getWordData(int index, std::string* word, float* fsg);
};

