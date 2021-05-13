#include<iostream>
#include<fstream>
using namespace std;
#define SIZE 30


/*


void only_one(char** prog,  char** history, char** alge, int size) {
	bool only_one = true;
	int k = 0;
	char** only_one = new char* [size];
	

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {

			if ((prog[i] == history[j])&&(prog[i] == alge[j])) {
				only_one = false;
			}
		}
		if (only_one == true) {
			only_one[k++] = prog[i];
		}

	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ((alge[i] == history[j]) && (prog[i] == alge[j])) {
				only_one = false;
			}
		}
		if (only_one == true) {
			only_one[k++] = prog[i];
		}
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if ((alge[i] == history[j]) && (history[i] == alge[j])) {
				only_one = false;
			}
		}
		if (only_one == true) {
			only_one[k++] = prog[i];
		}
	}
	for (int j = 0; j < k - 1; j++) {

		cout << only_one[j];
	}

}

int main1() {
	char text[50];
	char** students_h = new  char* [SIZE];
	char** students_a = new char* [SIZE];
	char** students_p = new  char* [SIZE];

	ifstream file("history.txt");

	while (!file.eof()) {
		if (!file.is_open()) {
			cout << "error" << endl;
		}
		else {
			for (int i = 0; i < SIZE; i++) {
				file.getline(text, 50);
				students_h[i] = text;
			
			}
		}
	}
	file.close();

	ifstream file("prog.txt");

	while (!file.eof()) {
		if (!file.is_open()) {
			cout << "error" << endl;
		}
		else {
			for (int i = 0; i < SIZE; i++) {
				file.getline(text, 50);
				students_p[i] = text;

			}
		}
	}
	file.close();

	ifstream file("alge.txt");

	while (!file.eof()) {
		if (!file.is_open()) {
			cout << "error" << endl;
		}
		else {
			for (int i = 0; i < SIZE; i++) {
				file.getline(text, 50);
				students_a[i] = text;

			}
		}
	}
	file.close();
	
	only_one(students_p, students_h, students_a, SIZE);
	return 0;
}
*/