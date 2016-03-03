#pragma once
class File
{
private:
	// file/ directory name
	char* m_fN;
	// file contents

protected:
	// protecting file reader to keep sanitisation
	int fileRead();
	int fileWrite();

public:
	// constructor for file or directory 
	// priority = file
	File(char* t_fN);
	~File();
};

