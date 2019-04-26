#pragma once
#include <vector>
#include <string>

using namespace std;

class AnagramSolver
{
	int firstLetters[26];					//two empty arrays to hold the letters count in each word
	int secondLetters[26];
	
	vector<string> words;

	void toLowerCase(string & word);
	bool areArraysIdentical();
	bool areAnagrams(string first, string second);

public:
	AnagramSolver(vector<string> words);
	vector<string> returnAnagrams(string word);
	~AnagramSolver();
};

