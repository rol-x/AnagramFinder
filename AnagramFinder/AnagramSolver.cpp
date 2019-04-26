#include "AnagramSolver.h"

AnagramSolver::AnagramSolver(vector<string> words)
{
	this->words = words;														//getting word vector from dictionary in a constructor
	for (int i = 0; i < 26; i++)												//setting letters count to zero
	{
		firstLetters[i] = 0;
		secondLetters[i] = 0;
	}
}

vector<string> AnagramSolver::returnAnagrams(string word)
{
	vector<string> anagrams;
	toLowerCase(word);

	for (string dictionaryWord : words)
		if (areAnagrams(dictionaryWord, word) && word != dictionaryWord)		//while the original word technically is an anagram to itself, we don't
			anagrams.push_back(dictionaryWord);									//want it to show up again on the list of all anagrams to this word

	return anagrams;
}

bool AnagramSolver::areArraysIdentical()
{
	for (int i = 0; i < 26; i++)
		if (firstLetters[i] != secondLetters[i])								//if the letter count at any letter doesn't match return false
			return false;
	return true;
}

void AnagramSolver::toLowerCase(string & word)
{
	for (int i = 0; i < word.length(); i++)
		if (word.at(i) >= 65 && word.at(i) <= 90)							//uppercase detection
			word.at(i) = word.at(i) + 32;									//32 is the ascii code shift between upper and lowercase (65 - A, 97 - a)
}

bool AnagramSolver::areAnagrams(string first, string second)
{
	for (int i = 0; i < 26; i++)
	{
		firstLetters[i] = 0;
		secondLetters[i] = 0;
	}

	for (auto letter : first)
		firstLetters[letter - 97]++;							//letter - 97 will give (int)letter ranging from 97 to 122 (ascii), then - 97 so [0, 25]
	for (auto letter : second)									//0 - a, 1 - b, ..., 25 - z
		secondLetters[letter - 97]++;

	return areArraysIdentical();				//if the arrays are identical, the words are made from the same letters but in different order (anagrams)
}

AnagramSolver::~AnagramSolver()					//destructor
{
}
