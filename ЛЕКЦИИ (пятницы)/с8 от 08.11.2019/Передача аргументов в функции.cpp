// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cstdarg>
#include <string>
using namespace std;

// передача копии
void change1(int a, int b){
	int c = a;
	a = b;
	b = c;
}

void change2(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

void change3(int *ptra, int *ptrb){
	int c = *ptra;
	*ptra = *ptrb;
	*ptrb = c;
}

void fArr(int * mas, int n){
	for (int i = 0; i < n; i++){
		mas[i]++;
		cout << mas[i] << '\t';
	}
	return;
}

int main() {
	int x = 10, y = 55;
	change1(x, y); // передача копии, ничего не меняется
	cout << "x = " << x << " y = " << y << endl;

	change2(x, y); // передача ссылок
	cout << "x = " << x << " y = " << y << endl;

	change3(&x, &y); // передача указателей
	cout << "x = " << x << " y = " << y << endl;

	const int N = 10;
	int arr[N] = { 1, 7, 3, 5, 3, 0, 9, 8, 0, 1 };
	fArr(arr, N);
	fArr(arr, N);

	return 0;
}
