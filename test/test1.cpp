#include <iostream>
#include<windows.h>
using namespace std;
int nсk(int a, int b);
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int c, b;
	cout << "введіть два числа :" << endl;
	cout << "A = ";
	cin >> c;
	cout << "B = ";
	cin >> b;
	cout << "НСК чисел = " << nсk(c, b);
	return 0;
}
int nсk(int a, int b)
{
	int max = b;
	for (int i = max; i > 0; i++) {

		if ((i % a == 0) && (i % b == 0)) {
			return i;
		}
	}
}

//ввідб вивід
/*
1

 введіть два числа :
A = 8
B = 9
НСК чисел = 72

2

введіть два числа :
A = 462
B = 420
НСК чисел = 4620
*/
int main1(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n, count=0;
	char a = 'A';
	cout << "введіть  числo :" << endl;
	cout << "N = ";
	cin >> n;
	for(int i=0; i < n; i++) {
		a = a + i;
		count++;
		for (int j = 1; j <= count; j++) {
			cout << a ;
		}
		cout<<endl;
	
	}
	return 0;
}

//вивід ввід
/*
* введіть  числo :
N = 4
A
BB
DDD
GGGG

введіть  числo :
N = 5
A
BB
DDD
GGGG
KKKKK
*/