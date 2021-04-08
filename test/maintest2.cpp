#include<iostream>
using namespace std;

void ShowArray(int** const arr, const int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

}
void FillArray(int** const arr, const int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cin>>arr[i][j];
	}
}

void Return(int**& arr, int size) {
	int** new_arr = new int* [size];
	for (int i = 0; i < size; i++) {
		new_arr[i] = new int[size];
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			new_arr[j][size - 1 - i] = arr[i][j];
	}
	ShowArray(new_arr, size);
	cout << endl;
	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	arr = new_arr;
}

int main1(){
	int size = 1;

	cout << "enter size of array n =  ";
	cin >> size;

	int** arr = new int* [size];
	for (int i = 0; i < size; i++) {
		arr[i] = new int[size];
	}
	FillArray(arr, size);
	ShowArray(arr, size);
	cout << endl;
	Return(arr, size);
	
	for (int i = 0; i < size; i++) {
		delete[]arr[i];

	}
	delete[]arr;
	return 0;
}

/*
input/output
enter size of array n = 5
1 7 4 0 9
4 8 8 2 4
5 5 1 7 1
1 5 2 7 6
1 4 2 3 2

1 1 5 4 1
4 5 5 8 7
2 2 1 8 4
3 7 7 2 0
2 6 1 4 9

enter size of array n =  3
1 7 4
0 9 4
8 8 2

8 0 1
8 9 7
2 4 4
*/
void ShowArrayNOT_M(int* const arr, const int size) {
	for (int i = 0; i < size; i++) {

			cout << arr[i] << " ";
		
	}
	cout << endl;

}
void FillArrayNOT_M(int* const arr, const int size) {
	for (int i = 0; i < size; i++) {

			cin >> arr[i];
	}
}


void Unique(int*& arr, int size) {
	int* new_arr = new int [size];
	int n = 0;
	bool unique=true;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (new_arr[j] == arr[i]) {
				unique = false;

			}
		}
		if (unique) {
			new_arr[n] = arr[i];
			n++;
		}
		unique = true;
	}
	cout << "Unique array : " << endl;
	ShowArrayNOT_M(new_arr, n);
	cout << endl;

	delete[]arr;
	arr = new_arr;

}

int main2() {
	int size ;

	cout << "enter size of array n =  ";
	cin >> size;

	int* arr = new int [size];

	FillArrayNOT_M(arr, size);
	ShowArrayNOT_M(arr, size);
	cout << endl;
	Unique(arr, size);
	delete[]arr;
	return 0;
}

/*
input/output
enter size of array n =  5
1
2
3
1
2
1 2 3 1 2

Unique array :
1 2 3


enter size of array n =  6
1
2
3
4
5
1
1 2 3 4 5 1

Unique array :
1 2 3 4 5


enter size of array n =  3
1
1
1
1 1 1

Unique array :
1
*/

void Del(int*& arr, int& size, int value) {
	size --;
	int* new_arr = new int[size];
	for (int i = 0; i < value; i++)
		new_arr[i] = arr[i];
	
	for (int i = value + 1; i <= size; i++)
		new_arr[i-1] = arr[i];
	ShowArrayNOT_M(new_arr, size);
	delete[]arr;
	arr = new_arr;
}


int MAX(int*  arr,  int size) {
	int max = arr[0];
	int index;
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	}
	Del(arr, size, index);
	return max;
}

void Merger(int* arr1, int* arr2, int size1, int size2) {
	int size = size1 + size2;
	int* new_arr = new int[size];
	int m1 = MAX(arr1, size1);
	int m2 = MAX(arr2, size2);
	for (int i = 0; i < size; i++) {
		while (m1 > m2) {
			new_arr[i++] = m1;
			m1 = MAX(arr1, size1);
			
		}
		while (m1 < m2) {
			new_arr[i++] = m2;
			m2 = MAX(arr2, size2);
		}

	}
	cout << "New array : " << endl;
	ShowArrayNOT_M(new_arr, size);
	cout << endl;

	delete[]new_arr;
}

int main() {
	int size1;

	cout << "enter size of array1 n =  ";
	cin >> size1;

	int* arr1 = new int[size1];

	FillArrayNOT_M(arr1, size1);
	ShowArrayNOT_M(arr1, size1);

	int size2;

	cout << "enter size of array2 n =  ";
	cin >> size2;

	int* arr2 = new int[size2];

	FillArrayNOT_M(arr2, size2);
	ShowArrayNOT_M(arr2, size2);
	cout << endl;
	Merger(arr1, arr2, size1, size2);
	delete[]arr1;
	delete[]arr2;
	return 0;
}