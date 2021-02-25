#include <iostream>
#include <string>
using namespace std;

int add(int a, int b);
void print(int a);
/*
 double modul(double x) {
	if (x < 0)
		x *= -1;
	return x;
}*/

 void fun(double a, double b,double h) {
	 double y;
	 for (double x = a; x <= b; x += h) {
		 if (x < 0)
			 x *= -1;
		 y = (x) * sin(x);
		 cout<<"f("<< x<<")="<<y<<endl;
	 }
	 
	 
 }
int main(){

	/*
	int res = add(5, 9);

	print(res);
	cout << res << endl;
	return 0;
	system("payze");*/

	//y=|x|*sin(x)
	double a, b;
	double h;
	cin >>a>> b >> h;
	fun( a,  b ,  h);
	
}


int add(int a, int b) {
	int r = a + b;
	return r;
}

void print(int a) {
	cout << a << endl;
}
