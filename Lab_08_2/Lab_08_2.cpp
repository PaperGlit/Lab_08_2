#include <iostream>
using namespace std;

char* FindA(char* s, const char* sp)
{
	char* word = NULL;
	char* next_word = NULL;
	word = strtok_s(s, sp, &next_word);
	while (word != NULL)
	{
		if (word[0] == 'a' || word[0] == 'A')
			return word;
		word = strtok_s(NULL, sp, &next_word);
	}
	return (char*)"There are no words starting with 'a'";
}

int main()
{
	const char* spc = " ";
	char str[101];
	cout << "Enter string: " << endl;
	cin.getline(str, 100);
	char* dest = new char[151];
	dest = FindA(str, spc);
	cout << "Result: " << dest << endl;
	return 0;
}