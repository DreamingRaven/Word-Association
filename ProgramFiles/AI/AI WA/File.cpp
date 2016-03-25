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

// Constructor that is blank and used to generate initial G
File::File()
{
	std::cout << "\nFile::File(), Succesfully called, initiating. Now." << std::endl;
	m_fN = "testInput.txt";
	fileRead();
}

// Constructor that reads a file from an input char* full file path 
File::File(char* t_filePath)
{
	std::cout << "\nFile::File(char* c), - Sucessfully called, initiating. Now." << std::endl;
	std::cout << "c = " << t_filePath << " - Non-sanitized." << std::endl;
	m_fN = t_filePath;
	fileRead();
}

File::File(char* t_file, char t_appendix)
{

}

File::~File()
{

}

int File::fileRead()
{
	fileRead(m_fN);
	return 0;
		
}

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
			std::string line;
			std::cout << "\nfile opened successfully\ncontents:\n" << std::endl;

			for (int i = 0; std::getline(file, line) && !(file.fail()); i++)
			{
				m_fD.push_back(lineToVector(line));
				//std::cout << *(m_fD[0][i]) << std::endl;
			}

			file.close();

			//for (auto i = m_fD.begin(); i != m_fD.end(); ++i)
			//{
			//	//for (auto c = m_fD[i].begin(); c != m_fD[i].end(); ++c)
			//	//{
			//	//	//std::cout << *i[c] << ' ' << std::endl;
			//	//}
			//}
			//return 0;
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

std::vector<char*> File::lineToVector(std::string t_line)
{
	std::vector<char*> tempVector;
	std::istringstream ISS(t_line);
	for (std::string token; std::getline(ISS, token, ',');)
	{
		std::cout << token << std::endl;

		//std::vector<char> writable(token.begin(), token.end());
		//tempVector.push_back(&writable[0]);

		//writable.push_back('\0');
		//tempVector.push_back(token.c_str());
		//tempVector.push_back(token.begin, token.end);
	}
	return tempVector; // vectors default passed by value not ref
}

//returns 0 if success, wipes vector in the process
int File::getConcept(std::vector<std::vector<char*> >& t_vec) 
{

	return 0; // no need for ErrCheck as will do nothing if not found
}
//returns 0 if success, vector is unchanged
int File::setConcept(std::vector<std::vector<char*> >& t_vec) {
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