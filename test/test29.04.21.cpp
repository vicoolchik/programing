#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string path = "in.txt";

	ifstream fin;
	fin.open(path);
	if (!fin.is_open()) {
		cout << "error";
	}
	else {
		cout << "file was open " << endl;

		string str;

		while (!fin.eof()) {//eof כמגטעü ך³םוצü פאיכף
			str = " ";
			getline(fin, str);
			cout << str << endl;
		}


	}
	return 0;
}