#pragma once
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class DataLoader
{
	fstream inputFile;
	string word;
	string fileName;
	vector<string> words;

public:
	DataLoader(string fileName);
	void loadWords();
	vector<string> returnWords();
	~DataLoader();
};