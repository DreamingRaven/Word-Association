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
	// temporary building appendix G should be in diff class
	int initFile();
	// modulation of utility functions
	std::vector<std::string> lineToVector(std::string t_line);
	int fillConceptData(std::vector<std::vector<std::string> > &t_conceptVector, std::string t_cue);
	int searchVector(const std::string& t_cue);
	int sanitInp();
	std::string addHeadSpace();
	std::string removeHeadSpace();

public:
	// constructors / destructors
	File(); // default appendix G
	File(char* fullFilePath); 
		//File(char* fileName, char appendix);
	~File(); 

	// the following are the main functions
	int getConcept(std::vector<std::vector<std::string> >& t_vec);
	std::vector<std::vector<std::string> > getConcept(std::string t_searchTerm);
	int setConcept(std::vector<std::vector<std::string> >& t_vec);


};

