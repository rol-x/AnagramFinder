#include "Program.h"

using namespace std;

int main()
{
	Program clientProgram;

	clientProgram.setDictionaryName("english");
	clientProgram.getWord();
	clientProgram.findAnagrams();
	clientProgram.listAnagrams();

	cout << endl << endl;
	system("pause");
	return 0;
}