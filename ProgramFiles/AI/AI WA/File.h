#pragma once
#include <vector>
#include <string>

class File
{
private:
	// file/ directory name
	char* m_fN = "";
	// tried making it one dimensional but
	// more easily communicated (ironicaly)
	// as two dimensional vector with strings
	std::vector< std::vector<char*> > m_fD;

protected:
	// protecting file reader to keep sanitisation
	int fileRead();
	int fileRead(const char* c);
	int fileWrite();
	std::vector<char*> lineToVector(std::string t_line);
	int sanitInp(); // worry about this later

public:
	// constructor for file or directory 
	// priority = file
	File();
	File(char* c);
	~File(); 
	int initFile();
	// the following are the main functions
	int getConcept(std::vector<std::vector<char*> >& t_vec);
	int setConcept(std::vector<std::vector<char*> >& t_vec);


};

