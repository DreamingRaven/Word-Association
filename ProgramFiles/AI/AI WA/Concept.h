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
	int getFreq(std::string data);
protected:
	int wordCount;
public:
	Concept(std::string word, File fileObject);
	~Concept();
	int Concept::getWordData(int index, std::string* word, float* fsg);
};

