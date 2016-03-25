#pragma once
#include <vector>
#include <string>

class File
{
private:
	// file/ directory name
	char* m_fN = "";
	// file data vector to allow dynamic changing
	// and for reusability on all appendixes
	std::vector< std::vector<std::string> > m_fD;

protected:
	// protecting file read/write to keep sanitisation
	int fileRead();
	int fileRead(const char* c);
	int fileWrite();
	// building appendix G
	int initFile();
	// modulation of utility functions
	std::vector<std::string> lineToVector(std::string t_line);
	std::vector<std::vector<std::string> > getCueVector();
	int sanitInp();
	std::string addHeadSpace();
	std::string removeHeadSpace();

public:
	// constructors / destructors
	File(); // default appendix G
	File(char* fullFilePath); 
	File(char* fileName, char appendix);
	~File(); 

	// the following are the main functions
	int getConcept(std::vector<std::vector<std::string> >& t_vec);
	std::vector<std::vector<std::string> > getConcept(std::string t_searchTerm);
	int setConcept(std::vector<std::vector<std::string> >& t_vec);


};

