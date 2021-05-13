#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;



struct Auto {
	string brand;
	string model;
	int	year_of_manufacture;
	double engine_capacity;
	void About() {
		cout << brand << " " << model << " " << year_of_manufacture << " " << engine_capacity << endl;
	}
};

void append(string str, Auto* au, int i);
void year(Auto* au, int n);

int main1() {
	char text[50];
	int n ;
	cin >> n;
	Auto* au = new  Auto[n];
	ifstream file("auto1.txt");
	
	while (!file.eof()) {
		if (!file.is_open()) {
			cout << "error" << endl;
		}
		else {
			for (int i = 0; i < n; i++) {
				file.getline(text, 50);
				append(text, au, i);

			}
		}
	}
	file.close();

	ofstream file2;
	file2.open("auto2.txt", ios_base::app);

	for (int i = 0; i < n; i++) {
		
		file2 << au[i].brand << " " << au[i].model << " " << au[i].year_of_manufacture << " " << au[i].engine_capacity <<"\n";
	}
	file2.close();

	year(au, n);
	return 0;
}

void append(string str, Auto* au, int i) {
	int index = str.find(";");
	if (index != string::npos) {
		au[i].brand= str.substr(0, index);
		au[i].model= str.substr(index + 1, str.find(";", index + 1) - index - 1);
		index = str.find(";", index + 1);
		string year_of_manufacture = str.substr(index + 1, str.find(";", index + 1) - index - 1);
		au[i].year_of_manufacture = atoi(year_of_manufacture.c_str());

		index = str.find(";", index + 1);
		string engine_capacity = str.substr(index + 1, str.find(";", index + 1) - index - 1);
		au[i].engine_capacity = std::stod(engine_capacity);	
	}
}


void year(Auto* au ,int n) {
	int year_max = au[0].year_of_manufacture;
	int main_i;
	for (int i = 0; i < n; i++) {
		if (au[i].year_of_manufacture > year_max) {
			year_max = au[i].year_of_manufacture;
			main_i = i;
		}
	}
	au[main_i].About();
}
/*
int sort(Auto* au, int n) {
	string brand_max;
	int main_i;
	Auto* au2 = new  Auto[n];
	for (int y = 0; y < n; y++) {
		for (int i = 0; i < n; i++) {
			if (au[y].brand > au[i].brand) {
				brand_max = au[y].brand;
				main_i = i;
			}
		}
	}
}
*/