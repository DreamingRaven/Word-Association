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
	concept = fileObject.getConcept(word);

	// Find the cue frequency
	if (concept.size() > 0) { // I insetred these if statements for you as 
							  // you are directly calling an element which 
							  // may not exist. G
		if (concept[0].size() > 0)
		{
			cueFrequency = getFreq(concept[1]);
		}
	}
	 // changed this to 1
	// as remember concept[0] = {"AARDVARK", "ANIMAL" .. etc}
	//			   concept[1] = {"152","49" .. etc}
	// so what you are looking for is concept[1][0] which is "152" 
	// G
	// its ok that solved the problem
	// uncomment the below and see
	 std::cout << "******** This is the working result! -> " << cueFrequency << std::endl;

}

// get cueFrequency
// vector<string> data : a single word/frequency pair
int Concept::getFreq(std::vector<std::string> data)
{
	try
	{
		return(std::stoi(data[0].c_str())); // I believe the problem was here, but I fixed it
		// by fixing this functions input.
		// G
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
