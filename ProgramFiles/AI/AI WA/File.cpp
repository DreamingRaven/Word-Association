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


File::File()
{
	std::cout << "File::File(), Succesfully called, initiating. Now." << std::endl;
}

File::File(char* t_c)
{
	std::cout << "File::File(char* c),    \/\/   Sucessfully called, initiating. Now." << std::endl;
	std::cout << "c[0] = " << t_c << "    \/\/   be aware could be implicitly converted not yet sanitized." << std::endl;
	//std::cout << "" << std::endl;
	if ( !(fileRead()) ) // as true is only not false not neccesarily 1
	{
		std::cout << "int File::fileRead(), reached good end" << std::endl;
	}
	else
	{
		std::cout << "int File::fileRead(), did not reach good end" << std::endl;
	}
}

File::~File()
{
}

int File::fileRead()
{
	std::cout << "size of m_fN = " << sizeof(*m_fN) << std::endl;
	for (int x = 0; x < sizeof(*m_fN); x++)
	{
		std::cout << "int File::fileRead(" << m_fN << ")" << std::endl;
	}
	 //if file exists
	if (m_fN != "")
	{
		// read file / folder excluding README and MIAS, "m_fN" and confirm result

		// test code currentley!!
		std::ifstream file(m_fN, std::ios::in | std::ios::binary | std::ios::ate);

		if (file.is_open())
		{
			file.seekg(0, std::ios::end);
			int size = file.tellg();
			char* contents = new char[size];
			file.seekg(0, std::ios::beg);
			file.read(contents, size);
			file.close();
			// complete need then delete

			// display to check data:
			for (int x = 0; x < size; x++)
			{
				std::cout << contents[x] << std::endl;
			}
			
			delete[] contents;
			return 1;
		}
		return 0;
	}
	else
	{
		 //return failed result
		return -1;
	}
		
}

int File::fileRead(const char* t_c)
{

	return 0;
}

int File::fileWrite()
{
	// if file exists
		// overwrite
	// else
		// create new file
	return 0;
}

int File::getConcept(std::vector<std::vector<char*> >& t_vec) 
{
	try {
		std::cout << "getConcept is A ok" << std::endl;
		return 0;
	}
	catch (char* e)
	{
		std::cout << "getConcept errored" << std::endl;
		return -1;
	}
	std::cout << "How did you even manage to get here T_T ???" << std::endl;
	return -2;
}

int File::setConcept(char* a1, int* a2, int* a3) {
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