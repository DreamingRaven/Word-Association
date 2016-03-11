#pragma once
#include <vector>
class File
{
private:
	// file/ directory name
	char* m_fN = "";
	// changed vector to be one dimensional File is now
	// more true to ADT and a single file at a time.
	std::vector<char*>* m_fD;

protected:
	// protecting file reader to keep sanitisation
	int fileRead();
	int fileRead(const char* c);
	int fileWrite();
	int sanitInp(); // worry about this later

public:
	// constructor for file or directory 
	// priority = file
	File();
	File(char* c);
	~File(); 
	int initFile();
	int getConcept(std::vector<std::vector<char*> >& t_vec);
	int setConcept(char* a1, int* a2, int* a3);


};

