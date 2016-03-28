#include "Concept.h"
#include "File.h"
#include <iostream>
#include <string>
#include <vector>

// Constructor
// string word : The source word
// File fileObject : The created object of type File - used to retrieve data
Concept::Concept(std::string word, File fileObject)
{
	// Store the source word
	conceptWord = word;

	// Retrieve related words
	fileObject.getConcept(concept); 
	// *** hey just a quick note ***
	// item concept[0][0] should be 
	// an std::string that you want it
	// to search for
	// so you can
	//	std::vector<std::String> subVec;
	//	subVec.push_back(word);
	//	concept.push_back(subVec);
	//	fileObject.getConcept(concept)
	// or you can call directly
	//	concept = fileObject.getConcept(word);
	//	From G

	// Find the cue frequency
	cueFrequency = getFreq(concept[0]);

}

// get cueFrequency
// vector<string> data : a single word/frequency pair
int Concept::getFreq(std::vector<std::string> data)
{
	try
	{
		return(std::stoi(data[1].c_str()));
	}
	catch (int e)
	{
		std::cout << "Error converting response frequency to int:" << e << std::endl;
	}
	return(-1);
}

// get FSG
// vector<string> data: One matching word and frequency pair
float Concept::getFSG(std::vector<std::string> data, int cueFrequency)
{
	// Find the response frequency
	int responseFrequency = Concept::getFreq(data);

	// Times this word was given as a response / Times the source word was given as a cue
	return(responseFrequency / cueFrequency);
}

// getWord
// vector<string> data : One matching word and frequency pair
std::string Concept::getWord(std::vector<std::string> data)
{
	// Return the first entry - the response word
	return(data[0]);
}

int Concept::getWordData(int index, std::string* word, float* fsg)
{
	*word = Concept::getWord(concept[index]);
	*fsg = Concept::getFSG(concept[index], cueFrequency);
	return(0);
}

Concept::~Concept()
{
}
