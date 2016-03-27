#pragma once
class Persona
{
private:
	std::string bestWord;
	std::string conceptWords[9];
	File fileObject;
	float conceptLikely[9];
public:
	Persona();
	~Persona();
	std::string getBestWord(std::string word);
};

