#include "Program.h"

Program::Program()
{
}

void Program::setDictionaryName(string dictionaryName)			//sets the name of the file with dictionary
{
	this->dictionaryName = dictionaryName;
}

void Program::getWord()											//get from the user the word which will be the anagram pattern
{
	cin >> inputWord;
	cout << endl;
}

void Program::findAnagrams()
{
	DataLoader loader(dictionaryName);							//creating an object of DataLoader which opens file (filename in constructor)
	loader.loadWords();											//and reads all the words into a string vector

	AnagramSolver solver(loader.returnWords());					//creating an object of AnagramSolver which takes a word and checks with
	anagrams = solver.returnAnagrams(inputWord);				//every other word in string vector from dictionary whether they are anagrams
																//(the letter count must be the same) and returns all anagrams in a vector
}

void Program::listAnagrams()									//lists all found anagrams in seperate lines
{
	for (string anagram : anagrams)
		cout << anagram << endl;
	if (anagrams.size() == 0)
		cout << "No anagrams were found" << endl;
}

Program::~Program()												//destructor
{
}
