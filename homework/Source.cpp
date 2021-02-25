#include <iostream>
#include <windows.h>
using namespace std;
int proste(int n);


int main() {
	SetConsoleOutputCP(1251);
	int  a,b;
	cout << "введіть значення діапазону від А до В " << endl;
	cout << "А = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	for (int n = a; n <= b; n++) {
		int res = proste(n);
		if (res!=0)
			cout << res << endl;
	}
	return 0;
}

int proste(int n) {
	bool proste = true;
	for (int i = 2; i <= sqrt(abs(n)); i++) {
		if (n % i == 0) {
			proste = false;
			break;
		}
	}
	if (proste) {
		return n;
	}
}