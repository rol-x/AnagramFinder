#pragma once
#include <vector>
#include <string>

using namespace std;

class AnagramSolver							//this class holds a dictionary in a string vector, letters count in two words - in two int arrays
{											//and checks whether two compared words (firstLetters and secondLetters) are anagrams
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

