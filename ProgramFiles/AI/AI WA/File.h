#pragma once
#include <vector>
#include <string>

class File
{
private:
	// file/ directory name
	char* m_fN = "";
	// file data
	std::vector< std::vector<char*> > m_fD;

protected:
	// protecting file reader to keep sanitisation
	int fileRead();
	int fileRead(const char* c);
	int fileWrite();
	std::vector<char*> lineToVector(std::string t_line);
	int sanitInp();

public:
	File();
	File(char* fullFilePath);
	File(char* fileName, char appendix);
	~File(); 

	int initFile();

	// the following are the main functions
	int getConcept(std::vector<std::vector<char*> >& t_vec);
	int setConcept(std::vector<std::vector<char*> >& t_vec);


};

