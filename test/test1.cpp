#include <iostream>
#include<windows.h>
using namespace std;
int n�k(int a, int b);
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int c, b;
	cout << "������ ��� ����� :" << endl;
	cout << "A = ";
	cin >> c;
	cout << "B = ";
	cin >> b;
	cout << "��� ����� = " << n�k(c, b);
	return 0;
}
int n�k(int a, int b)
{
	int max = b;
	for (int i = max; i > 0; i++) {

		if ((i % a == 0) && (i % b == 0)) {
			return i;
		}
	}
}

//���� ����
/*
1

 ������ ��� ����� :
A = 8
B = 9
��� ����� = 72

2

������ ��� ����� :
A = 462
B = 420
��� ����� = 4620
*/
int main1(){
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n, count=0;
	char a = 'A';
	cout << "������  ����o :" << endl;
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

//���� ���
/*
* ������  ����o :
N = 4
A
BB
DDD
GGGG

������  ����o :
N = 5
A
BB
DDD
GGGG
KKKKK
*/