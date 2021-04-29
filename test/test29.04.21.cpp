#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;
#define SIZE 100
//task2
char* deleteWordsWithSymbols(char* str, int len) {
	char* new_line = new char[SIZE];
	char* word = new char[SIZE];
	int n = 0;
	int m = 0;
	for (int i = strlen(str); i > 0; i--) {
		word[m++] = str[i];
		if (str[i] = ' ') {
			if (check_word) {
				for (int i = 0; word[i] != '\0'; i++) {
					new_line[n++] = word[i];
				}
				i = 0;
				delete[]word;
				char* word = new char[SIZE];
			}
		}
	}
}

bool check_word(char* word, int len) {
	for (int i = len; i > 0; i--) {
		if (!is_alpha((int)word[i]) {
			return false;
		}
	}
	return true;
}
int main() {
	ifstream fin("in.txt");
	char* line = new char[SIZE];
	char* new_line = new char[SIZE];
	char ch;
	int i = 0;

	fin.getline(str, SIZE);

	fin.close();

	cout << " enter the string: " << str << endl;
	cin >> ch;

	new_line = delete_symbol_from_string(str, ch);
	cout << "the string after changes: " << new_line << endl;

	ofstream fout;
	fout.open("out.txt");

	i = 0;
	while (new_str[i] != '\0') {
		fout << new_line[i++];
	}

	fout.close();
	return 0;
}

////task1

using namespace std;


bool isNumber(char ch)
{
	return (ch > '0' && ch < '9');
}

char* remove(char* str)
{
	char* new_line = new char[SIZE];
	int j = 0;
	bool repeat;

	for (int i = 0; str[i] != '\0'; i++)
	{
		repeat = isNumber(str[i]) && (str[i] == str[i - 1]);

		if (repeat)
		{
			continue;
		}
		new_line[j++] = str[i];
	}

	new_line[j] = '\0';
	return new_line;
}

int main1()
{
	char* line = new char[SIZE];
	cout << "Input the string: ";

	cin.getline(line, SIZE);
	cout << remove(line) << endl;
	return 0;
}
