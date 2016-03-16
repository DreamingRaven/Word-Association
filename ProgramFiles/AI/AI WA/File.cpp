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
#include <string>


File::File()
{
	std::cout << "File::File(), Succesfully called, initiating. Now." << std::endl;
	m_fN = "testInput.txt";
	fileRead();
}

File::File(char* t_c)
{
	std::cout << "File::File(char* c), - Sucessfully called, initiating. Now." << std::endl;
	std::cout << "c = " << t_c << " - be aware, could be implicitly converted, not yet sanitized." << std::endl;
	m_fN = t_c;
	fileRead();
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
		// old code
		//int fileSize = (m_w * m_h);
		//m_data = new double[fileSize];
		//std::ifstream myFile(m_fileName);
		//if (myFile.is_open())
		//{
		//	// Improved (cleaner) file read loop on what was given 
		//	for (int incrementor = 0; myFile.good() && incrementor<(fileSize - 1); incrementor++)
		//	{
		//		myFile >> m_data[incrementor]; // alternative; <<*(m_data + incrementor)>>
		//	}
		//}
		//else
		//{
		//	std::cout << "Unable to open file" << std::endl;
		//}
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
				std::cout << " row: " << i << " data: " << line << std::endl;
			}
			file.close();
			return 0;
		}		
	}
	else
	{
		//return failed result
		return 0;
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
	//for (int start = 0, int end = 0; end < t_line.size(); end++)
	//{
	//	if (t_line[end] == ',')
	//	{

	//	}
	//	//tempVector.push_back();
	//}
	return tempVector;
}

//returns 0 if success, wipes vector
int File::getConcept(std::vector<std::vector<char*> >& t_vec) 
{
	return 0; // no need for error checking as will renew vectors
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