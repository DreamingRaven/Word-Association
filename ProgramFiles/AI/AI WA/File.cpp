#include <iostream>
#include "File.h"
#include <vector>
// vector.push_back(value)							--> adds element to the END of the vector and resizes
// vector.at(index)									--> returns element at index (starting from typichal index of 0)
// vector.size()									--> returns UNSIGNED INT equal to the number of elements in vector
// vector.begin()									--> reads vector from element 0
// vector.insert(vector.begin() + int, new value)	--> adds element BEFORE index
// vector.clear()									--> removes all elements in vector
// vector.empty()									--> returns bool if empty (true = empty)
#include <fstream>
#include <sstream>
#include <string>

// constructor that is blank and used to generate initial G
File::File()
{
	std::cout << "\nFile::File(), Succesfully called, initiating. Now." << std::endl;
	m_fN = "testInput.txt";
	fileRead();
}

// constructor that reads a file from an input char* full file path
File::File(char* t_filePath)
{
	std::cout << "\nFile::File(char* c), - Sucessfully called, initiating. Now." << std::endl;
	std::cout << "c = " << t_filePath << " - Non-sanitized." << std::endl;
	m_fN = t_filePath;
	fileRead();
}

// constructor that can read a file from file name and appendix letter
File::File(char* t_file, char t_appendix)
{

}

// destructor that currentley is unecessary due to vector
File::~File()
{

}

// function that can be used to read file of current name
int File::fileRead()
{
	fileRead(m_fN);
	return 0;
		
}

// function that can be used to read file of set name
int File::fileRead(const char* t_c)
{
	//if file name is not blank
	if (t_c != "")
	{
		std::ifstream file;
		file.open(t_c);

		if (file.fail()) // pre check to immediateley exit
		{
			std::cout << "\ncould not open file" << std::endl;
			file.close();
			return 0;
		}
		else
		{
			// late decleration of scoped variables
			std::string line;
			// declaring success of opening
			std::cout << "\nfile opened successfully\ncontents:\n" << std::endl;
			// begining assigning of content
			for (int i = 0; std::getline(file, line) && !(file.fail()); i++)
			{
				m_fD.push_back(lineToVector(line));
				//std::cout << *(m_fD[0][i]) << std::endl;
			}
			file.close();
			//std::cout << m_fD[0][0] << std::endl;
			//std::cout << m_fD[1][0] << std::endl;
			//std::cout << m_fD[0][1] << std::endl;
			//std::cout << m_fD[1][1] << std::endl;
		}		
	}
	else
	{
		//return failed result
		return -1;
	}
	// just in case return
	return -1;
}

// function that appends or creates new entries for updates
int File::fileWrite()
{
	// if file exists
		// overwrite
	// else
		// create new file

	// old code!
	//int dataSize = (m_w * m_h);
	//unsigned char* fileData = (unsigned char*) new unsigned char[dataSize];

	//std::ofstream myFile;
	//myFile.open(m_fileName, std::ios::out | std::ios::binary | std::ios::trunc);

	//// cleaned up function to gate properly (first + no unecessary "exit(1)") and not assign heap memory if file(open)/ stream is unsuccessfull 
	//if (myFile.is_open() && myFile.good())
	//{
	//	for (int i = 0; i < dataSize; i++)
	//	{
	//		// casting to unsigned char so can be output in file 
	//		fileData[i] = (unsigned char)m_data[i];
	//	}

	//	myFile << "P5" << std::endl;
	//	myFile << m_w << " " << m_h << std::endl;
	//	myFile << oV << std::endl;
	//	myFile.write(reinterpret_cast<char *>(fileData), (dataSize)*sizeof(unsigned char));
	//}
	//else
	//{
	//	std::cout << "Unable to use file" << std::endl;
	//}

	//myFile.close();
	//delete[] fileData;
	//return 0;
	return 0;
}

// function that takes a comma seperated line and converts to vector
std::vector<std::string> File::lineToVector(std::string t_line)
{
	std::vector<std::string> tempStringVector;
	std::istringstream ISS(t_line);

	for (std::string token; std::getline(ISS, token, ',');)
	{
		// if there is a space at the front
		if (token[0] == ' ') 
		{
			// remove it (remove head of sequence)
			token.erase(0, 1);
		}

		// display token
		std::cout << token << std::endl;

		// add it to vector
		tempStringVector.push_back(token);
	}
	return tempStringVector; // vectors default passed by value not ref
}

// function that gets the whole vector and target and formats into concept
int File::fillConceptData(std::vector<std::vector<std::string> >& t_conceptVector, std::string t_cue)
{
	return 0;
}

// returns 0 if success, replaces vector with search results of item vec[0][0]
int File::getConcept(std::vector<std::vector<std::string> >& t_vec) 
{
	
	// find search target

	// get vector of the search target results

	// return target of search target results

	return 0; // no need for ErrCheck as will do nothing if not found
}

// returns data on search term, vector[0] = words, vector[1] = occurance
std::vector<std::vector<std::string> > File::getConcept(std::string t_searchTerm)
{
	// creating temporary vector
	std::vector<std::vector<std::string> > conceptVector;

	// appending concept vector with neccessary data
	fillConceptData(conceptVector, t_searchTerm);

	//// quick test
	//std::vector<std::string> bob;
	//std::cout << conceptVector.push_back(bob) << std::endl;
	//// result is error and void!

	// returning non referance vector, as it will go out of scope otherwise.
	return conceptVector;
}

// returns 0 if success, vector is unchanged
int File::setConcept(std::vector<std::vector<std::string> >& t_vec) {
	try {
		std::cout << "setConcept is A ok" << std::endl;
		return 0;
	}
	catch (char* e)
	{
		std::cout << "setConcept errored" << std::endl;
		return -1;
	}
	std::cout << "How did you even manage to get here Q_Q ???" << std::endl;
	return -2;
}
