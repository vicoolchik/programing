#include<iostream>
#include<fstream>
using namespace std;
 
struct complex_num {
	int a;
	int b;
	complex_num(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void show() {
		cout << a << "i " << "+ " << b << endl;
	}
	float module() {
		float res = sqrt(pow(a, 2) + pow(b, 2));
		cout << "|" << a << "i " << "+ " << b << "| = "<<res<<endl;
		return res;
	}
};

int main() {
	cout << "enter ai+b : " << endl;
	cout << "enter a = ";
	int a;
	cin >> a;
	cout << "enter b = ";
	int b;
	cin >> b;


	complex_num first(a, b);
	first.show();
	first.module();
	return 0;
}
