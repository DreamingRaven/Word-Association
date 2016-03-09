#pragma once
#include <vector>
class File
{
private:
	// file/ directory name
	char* m_fN;
	// changed vector to be one dimensional File is now
	// more true to ADT and a single file at a time.
	std::vector<char*>* m_fD;

protected:
	// protecting file reader to keep sanitisation
	int fileRead();
	int fileWrite();

public:
	// constructor for file or directory 
	// priority = file
	File(char* t_fN);
	File(int* regenG, int* conf);
	File();
	~File(); 
	int initFile();
	int getConcept(char* a1, int* a2, int* a3);
	int setConcept(char* a1, int* a2, int* a3);


};

