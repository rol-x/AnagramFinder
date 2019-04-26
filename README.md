# AnagramFinder
Program written in C++ as a mid-semester project for Computer Programming II (102). Basing on a dictionary it returns a list of anagrams to the given input word.

# File structure
The project consists of 6 class files (3 header files and 3 source code files) and one main function file. Any number of dictionaries is allowed. The extension of dictionary text file must be .txt.

# Classes overview
Three classes - *DataLoader*, *AnagramSolver* and *Program* - are present in the project; each of them serves a different purpose. *DataLoader* class reads the dictionary content and saves it inside a local data structure. *AnagramSolver* class takes two words and counts specific letters in each, in order to make a comparison between the two datasets and conclude whether the words are anagrams. Finally, *Program* is a quasi-static view and controller class, which serves as an interface between the client and program logic, making it available for user to request all of the words from dictionary, which are anagrams to specified input.

# Cloning the repository
To run the application, simply clone the repository into your local repository: 

<pre class="command-line"><span class="command">git clone https://github.com/rol-x/AnagramFinder.git</span>
</pre>

`Written in C++ by Charles John Summers 2019`
