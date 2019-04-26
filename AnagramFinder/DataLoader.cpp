#include "DataLoader.h"

DataLoader::DataLoader(string fileName)						//gets filename from the user while creating an object
{
	this->fileName = fileName + ".txt";
}

void DataLoader::loadWords()								//opens file and loads words from the file into vector 'words'
{
	inputFile.open(fileName, ios::in);
	while (inputFile.good())
	{
		getline(inputFile, word);
		words.push_back(word);
	}
}

vector<string> DataLoader::returnWords()					//returns the vector of words
{
	return words;
}

DataLoader::~DataLoader()									//destructor
{ }