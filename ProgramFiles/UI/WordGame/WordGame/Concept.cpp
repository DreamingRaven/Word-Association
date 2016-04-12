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
	wordCount = 0;
	

	

	// Find the cue frequency
	if (concept.size() > 0) { // I insetred these if statements for you as 
							  // you are directly calling an element which 
							  // may not exist. G
		if (concept[0].size() > 0)
		{
			// Store the number of related words
			wordCount = concept[0].size();
			// Save the cue frequency
			cueFrequency = getFreq(concept[1][0]);
			totalAnswers = 0;
			for (int Count = 1; Count < wordCount; Count++)
			{
				totalAnswers = totalAnswers + getFreq(concept[1][Count]);
				std::cout << "tempInt = " << getFreq(concept[1][Count]) << " totalAnswers = " << totalAnswers << std::endl;
			}
		}
	}


	 // changed this to 1
	// as remember concept[0] = {"AARDVARK", "ANIMAL" .. etc}
	//			   concept[1] = {"152","49" .. etc}
	// so what you are looking for is concept[1][0] which is "152" 
	// G
	// its ok that solved the problem
	// uncomment the below and see
	// std::cout << "******** This is the working result! -> " << cueFrequency << std::endl;

}

// getFreq
// this function bundles string to int and a try/catch in case of error
// string data : a single frequency in string format
float Concept::getFreq(std::string data)
{
	try
	{
		return(std::stoi(data.c_str())); 
	}
	catch (int e)
	{
		std::cout << "Error converting response frequency to int:" << e << std::endl;
	}
	return(-1);
}


int Concept::getWordData(int index, std::string* word, float* fsg)
{
	if (concept.size() > 0) 
	{
		//Write in the word
		if (0 < index && concept[0].size() >= index)
		{
			*word = concept[0][index];
		}
		//Write in the FSG
		if (0 < index && concept[1].size() >= index)
		{
			*fsg = Concept::getFreq(concept[1][index]) / totalAnswers;
			std::cout << *fsg << std::endl;
		}
	}
	
	

	return(0);
}

Concept::~Concept()
{
}
