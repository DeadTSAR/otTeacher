//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////
//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////



#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int *mas, int N){
	for (int i = 0; i < N; i++)
		cout << mas[i] << '\t';
	cout << endl;
}

void printHello(){
	cout << "Hello" << endl;
}

int sum3(int a, int b = 7, int c = 8){
	return a + b + c;
}

int GCD(int, int);

int main(void){
	cout << "GCD(77, 33) = " << GCD(77, 33) << endl;
	cout << "GCD(33, 77) = " << GCD(33, 77) << endl;
	cout << "GCD(12344, 43214) = " << GCD(256, 640) << endl;

	int result = sum3(1.1, 2.2, 3.3);
	cout << "sum3(1, 2, 3) = " << result << endl;
	cout << "sum3(5) = " << sum3(5) << endl;
	cout << "sum3(5, 5) = " << sum3(5, 5) << endl;


#define N 10
	int a[N] = { 6, 3, 9, 10, 0, 12, 5, -1, 4, 9 };
	
	cout << "Address of function: " << printArr << endl;
	
	printHello; // Nothing
	printHello();

	int vspom;
	bool isSorted;
	for (int i = 0; i < N - 1; i++){
		isSorted = true;
		for (int j = 0; j < N - i - 1; j++){
			if (a[j] > a[j + 1]){
				vspom = a[j];
				a[j] = a[j + 1];
				a[j + 1] = vspom;
				isSorted = false;
			}
			printArr(a, N);
			system("pause");
		}
		if (isSorted == true)
			break;
	}

	return 0;

}

int GCD(int x, int y)
{
	while (x != 0 && y != 0){
		if (x > y) x = x % y; // x %= y;
		else y = y % x;
	}
	return (y == 0) ? x : y;
}