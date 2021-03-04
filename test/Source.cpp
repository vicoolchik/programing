#include <iostream>
#include <math.h>

using namespace std;

int nok(int a, int b);
void main1()
{
    int a = 0, b = 0, c = 0, d = 0;
    setlocale(0, "Rus");
    cout << "Введите числа для подсчёта НОК:\t";
    cin >> a >> b >> c >> d;
    cout << "НОК чисел = " << nok(a, b);
}

int nok(int a, int b)
{
    int max = b;
    for (int i = max; i > 0; i++) {

        if ((i % a == 0) && (i % b == 0)) {
            return i;
        }
    }
}