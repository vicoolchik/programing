#include <iostream>
using namespace std;

void Foo1(int n);

int main() {
	int n;
	cout << "enter n = ";
	cin >> n;
	

	Foo1(n);
	return 0;
}

void Foo1(int n) {
	int temp = 0;
	int dob = 1;
	int sum = 0;
	if (n < 0)
		n *= -1;
	if (n % 2 == 0) {
		while (n != 0) {
			temp = n % 10;
			n /= 10;
			dob *= temp;
		}
		cout << "dob = " << dob;
	}
	else {
		while (n != 0) {
			temp = n % 10;
			n /= 10;
			sum += temp;
		}
		cout << "sum = " << sum;
	}
}

/*
1
enter n = 1234
dob = 24

2
enter n = 12345
sum = 15
*/

void Foo2(int n);

int main2() {
	int n;
	cout << "enter N = ";
	cin >> n;

	Foo2(n);
	return 0;
}

void Foo2(int n) {
	int a, b = 1, c = 2;
	int sum = b + c;
	for (int i = 2; i < n; i++) {
		a = 2 * c + 4 * b + 1;
		sum += a;
		b = c;
		c = a;

	}
	cout << "sum N series add-ons = " << sum;
}

/*
1
enter N = 5
sum N series add-ons = 130

2
enter N = 2
sum N series add-ons = 3

3
enter N = 3
sum N series add-ons = 12
*/



void Foo3(int x, float e);

int main3() {
	//sin= x - x ^ 3 / 3!+ x ^ 5 / 5!...
	int x, i = 1, z=1, k = 1;
	float e, item = 1, add = 0, numerator = 1, denominator = 1;
	cout << "enter x  = ";
	cin >> x;
	cout << endl;
	cout << "enter expression  = ";
	cin >> e;
	cout << endl;

	Foo3(x, e);
	return 0;
}
/*
1
enter x  = 5

enter expression  = 0,00001

sin(5)=-0.958925
sin(5)=-0.958924

2
enter x  = 7

enter expression  = 0.00001

sin(7)=0.657002
sin(7)=0.656987

3
enter x  = 1

enter expression  = 0.00001

sin(1)=0.841468
sin(1)=0.841471
*/


void Foo3(int x, float e) {
	int  i = 1, z = 1, k = 1;
	float  item = 1, add = 0, numerator = 1, denominator = 1;
	item = x;

	while (item > e) {

		i = i + 2;

		if (z % 2 == 0)
			add -= item;
		else
			add += item;
		z++;

		numerator = pow(x, i);
		for (; k <= i; k++)
			denominator *= k;

		item = numerator / denominator;



	}

	cout << "sin(" << x << ")=" << add << endl;

	cout << "sin(" << x << ")=" << sin(x);
}