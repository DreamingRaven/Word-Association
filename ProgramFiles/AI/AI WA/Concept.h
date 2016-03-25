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
	float Concept::getFSG(std::vector<std::string> data, int cueFrequency);
	int getFreq(std::vector<std::string> data);
	std::string Concept::getWord(std::vector<std::string> data);
public:
	Concept(std::string word, File fileObject);
	~Concept();
	int Concept::getWordData(int index, std::string* word, float* fsg);
};

