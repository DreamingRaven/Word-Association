#pragma once
class Concept
{
private:
	char* conceptWord;
	int* gArray;
	int* pArray;
	void getWordData(char* word, int* fsg);
	int* generateFSG();
public:
	Concept(char* a1);
	~Concept();
};

