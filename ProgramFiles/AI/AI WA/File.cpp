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

// default constructor for G appendix
File::File()
{
	std::cout 
		<< "\nFile::File(), Succesfully called, initiating. Now." 
		<< std::endl;
	m_fN = "..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt";
	fileRead();
}

// char* constructor for any pathed file
File::File(char* t_filePath)
{
	// declaring for debugging
	std::cout 
		<< "\nFile::File(char* c), - Sucessfully called, initiating. Now." 
		<< std::endl;
	std::cout << "c = " << t_filePath << " - Non-sanitized.\n" << std::endl;

	// quick & temp, initialisation call 
		// initFile(); //dont call this unless you want to rewrite everything
		// from scratch i.e our initial database not G appendix

	// preparing file
	m_fN = t_filePath;
	fileRead();
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

			// clear m_fD just in case
			m_fD.clear();

			// declaring success of opening
			std::cout << "file opened successfully\n" << std::endl;

			// begining assigning of content
			for (int i = 0; std::getline(file, line) && !(file.fail()); i++)
			{
				m_fD.push_back(lineToVector(line));
				//std::cout << *(m_fD[0][i]) << std::endl;
			}
			file.close();
		}		
	}
	else
	{
		//return failed result
		return -1;
	}
	// just in case return failed result
	return -1;
}

// function that writes current data
int File::fileWrite()
{
	fileWrite(m_fN, m_fD);
	return 0;
}

// function that writes specified data
int File::fileWrite(char* t_n, std::vector<std::vector<std::string> >& t_d)
{
	std::ofstream outputFile(t_n);

	if (outputFile.is_open())
	{
		for (int r = 0; r < t_d.size(); r++)
		{
			std::string combinedData = t_d[r][0];

			for (int c = 1; c < t_d[r].size(); c++)
			{
				combinedData = combinedData + ", " + t_d[r][c];
			}
			outputFile << combinedData << "\n";
		}
		outputFile.close();
	}
	return 0;
}

// protected function to initiate G appendix data from A NEEDS BREAKING DOWN INTO SUB FUNC
int File::initFile()
{
	// going through all known files getting relevant data

	// this could have been multithreaded

	// setting array with file paths I dont want to put it here,
	// but for the sake of not making things any more convoluted
	// I know its horrible to do it like this but its temporary.
	char* relativeFile[] = {
		"..\\..\\..\\ProgramResources\\G Appendix\\G A-Z.txt",	// first is destination
		"..\\..\\..\\ProgramResources\\A Appendix\\A-B.txt",		// A-B
		"..\\..\\..\\ProgramResources\\A Appendix\\C.txt",			// C
		"..\\..\\..\\ProgramResources\\A Appendix\\D-F.txt",		// D-F
		"..\\..\\..\\ProgramResources\\A Appendix\\G-K.txt",		// G-K
		"..\\..\\..\\ProgramResources\\A Appendix\\L-O.txt",		// L-O
		"..\\..\\..\\ProgramResources\\A Appendix\\P-R.txt",		// P-R
		"..\\..\\..\\ProgramResources\\A Appendix\\S.txt",			// S
		"..\\..\\..\\ProgramResources\\A Appendix\\T-Z.txt"			// T-Z
	};

	// creating temporary list
	std::vector<std::vector<std::string> > list;

	// for loop that cycles through relativeFile[] by calculating size
	for (int i = 1; i < sizeof(relativeFile)/sizeof(relativeFile[0]); i++)
	{
		// for each file path:
		std::cout << "init, " << relativeFile[i] << ", now." << std::endl;

		// set file name to 
		m_fN = relativeFile[i];

		// read file
		fileRead();

		// creating intermediate containers
		std::string lastWord = "";
		std::vector<std::string> wordList;
		std::vector<std::string> numberList;

		// for each cue:
		for (int c = 0; c < m_fD.size(); c++)
		{
			//std::cout << (m_fD[c][0])[0] << std::endl;
			if ((m_fD[c][0])[0] != '<')
			{
				// if this item exists already
				// by checking the last item
				if (m_fD[c][0] == lastWord)
				{
					//std::cout << m_fD[c][1] << std::endl;
					wordList.push_back(m_fD[c][1]);
					numberList.push_back(m_fD[c][4]);
				}
				else // only happens if a different word so start of a new sequence
				{
					// check to see if previous sequence is not empty
					if (wordList.size() > 0 && numberList.size() > 0)
					{
						// publish last sequence now that we know its finished
						// and checking to get rid of CUE line
						if (wordList[0] != "CUE")
						{
							list.push_back(wordList);
							list.push_back(numberList);
						}

						// clear last sequence
						wordList.clear();
						numberList.clear();
					}

					// start new sequence
					lastWord = m_fD[c][0];
					std::cout << lastWord << std::endl;

					// add current position data into new sequence
					wordList.push_back(lastWord);
					wordList.push_back(m_fD[c][1]);
					numberList.push_back(m_fD[c][3]);
					numberList.push_back(m_fD[c][4]);
				}
			}
		}

		// check to see if last sequence is not empty
		if (wordList.size() > 0 && numberList.size() > 0)
		{
			// publish last sequence now that we know its finished
			list.push_back(wordList);
			list.push_back(numberList);

			// clear last sequence
			wordList.clear();
			numberList.clear();
		}
	}

	// m_fN = destination
	m_fN = relativeFile[0];

	// m_fD = list
	// not gonna do it because its inefficent since its non pointer

	// file write
	fileWrite(m_fN, list);

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
			//std::cout << token << std::endl;

		// add it to vector
		tempStringVector.push_back(token);
	}
	return tempStringVector; // vectors default passed by value not ref
}

// function that gets the whole vector + target and formats into a concept vector
int File::fillConceptData(std::vector<std::vector<std::string> >& t_conceptVector, std::string t_cue)
{
	// cleaning up vector to prevent possible errors and inserting term at head
	t_conceptVector.clear();
	std::cout << "\nSearching for : \"" << t_cue << "\"" << std::endl;

	// checking if better G appendix is being used or legacy data
	if (m_fD[0][0] == "<HTML>")
	{
		// making it clear for debugging
		std::cout << "\nlegacy data detected\nnow using legacy mode\nsorry this is not currentley supported" << std::endl;
		return -1;
	}
	else
	{
		// making it clear for debugging
		std::cout << "\nnon legacy data assumed" << std::endl;
		int line = searchVector(t_cue); // returns -1 if not found

		// checking if cue exists in data
		if (line == -1)
		{
			// flagging -1
			std::cout << "could not find referance" << std::endl;
			return -1;
		}
		else
		{
			std::cout << "referance data :" << std::endl;
			for (int row = line; row < (line+2); row++)
			{
				// declaring
				std::vector<std::string> tempString;
				std::cout << "\nrow: " << row << std::endl;

				// individual row size because data can have anomalies
				for (int col = 0; col < m_fD[row].size(); col++)
				{
					// takes the current [row][collumn] and displays it
					std::cout << "\tcol: "<< col << ", \"" << m_fD[row][col] << "\"" << std::endl;

					// takes the current [row][collumn] and assigns it to the end of an intermediate vector
					tempString.push_back(m_fD[row][col]);
				}
				// takes intermediate vector and adds it to the end of the concept vector
				t_conceptVector.push_back(tempString);
			}
			return 0;
		}
	}
	// unreachable flag just in case
	return -1;
}

// returns the first line that contains cue data
int File::searchVector(const std::string& t_cue)
{
	// skipping every other line as numbers are in between
	for (int line = 0; line+1 < m_fD.size(); line += 2)
	{
		// checking if cue is reached
		if (m_fD[line][0] == t_cue)
		{
			// debugging
			std::cout << "found referance on line :  " << line << " (from 0)" << std::endl;
			// return referance line
			return line;
		}
	}
	// if not found flag -1
	return -1;
}

// returns 0 if success, replaces vector with search results of item vec[0][0]
int File::getConcept(std::vector<std::vector<std::string> >& t_vec) 
{
	//// cannot pass an empty sequence
	//if (t_vec.size() > 0)
	//{
	//	// seperate if statement to prevent out of scope errors
	//	// while checking if a searchable element exists
	//	if (t_vec[0][0] != "")
	//	{
	//		fillConceptData(t_vec, t_vec[0][0]);
	//		return 0;
	//	}
	//	else
	//	{
	//		std::cout << "sorry but the vector you passed does not have a [0][0] element that is valid"
	//			<< "\nplease insert something to search for in position [0][0] or call getConcept(std::string)"
	//			<< std::endl;
	//		return -1;
	//	}
	//}
	//std::cout << "sorry but the vector you passed does not have a [0][0] element that is valid"
	//	<< "\nplease insert something to search for in position [0][0] or call getConcept(std::string)"
	//	<< std::endl;
	return 0;
}

// returns data on search term, vector[0] = words, vector[1] = occurance
std::vector<std::vector<std::string> > File::getConcept(std::string t_searchTerm)
{
	// creating temporary vector
	std::vector<std::vector<std::string> > conceptVector;

	// appending concept vector with neccessary data
	fillConceptData(conceptVector, t_searchTerm);

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
