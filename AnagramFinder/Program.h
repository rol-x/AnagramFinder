#pragma once
#include "DataLoader.h"
#include "AnagramSolver.h"
#include <iostream>

class Program
{
	string inputWord;
	string dictionaryName;
	vector<string> anagrams;

public:
	Program();
	void setDictionaryName(string dictionaryName);
	void getWord();
	void findAnagrams();
	void listAnagrams();
	~Program();
};

