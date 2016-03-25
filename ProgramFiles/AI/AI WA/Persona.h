#pragma once
class Persona
{
	char* bestWrd;
public:
	Persona(char* wrd);
	~Persona();
	char* getBestWord(char* wrd);
};

