#pragma once
#include <iostream> // you must have this to call std::
#include "File.h"
class Persona
{
private:
	std::string bestWord;
	std::string conceptWords[9];

	// File fileObject; <- this is not a valid File call,
	// and was preventing compilation.
	// please look at File.h, to create an object like this
	// you will need to create it in your constructor and
	// point to it, but it must be in heap memeory or it will
	// go out of scope:
	File* fileObject; // creating a pointer that you can use
					  // now see constructor
					  // now see destructor
	//
	// brief description of what I added:
	//	- created a pointer that points to a file object in 
	//		global space of your class.
	//  - in constructor I allocated this pointer to a heap
	//		memory location which is dealocated later.
	//	- in destructor I deallocated the memory that the
	//		pointer is pointing to, stopping mem leaks.
	//
	// If you need any help, just ask me, but please,
	// do try not to commit uncompilable code, as it forces
	// me to fix it to get on with my own work.
	// Also quick question why 9? as in [9]items I didnt,
	// understand why thats there.
	// From G

	float conceptLikely[9];
public:
	Persona();
	~Persona();
	std::string getBestWord(std::string word);
};

