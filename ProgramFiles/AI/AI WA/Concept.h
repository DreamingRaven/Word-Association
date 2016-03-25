#pragma once
class Concept
{
private:
	char* conceptWord;
	int* gArray;
	int* pArray;
	// hey (its G) you may want to check get/setConcept
	// as its changed types, to make it easier.
	void getWordData(char* word, int* fsg);
	int* generateFSG();
public:
	Concept(char* a1);
	~Concept();
};

