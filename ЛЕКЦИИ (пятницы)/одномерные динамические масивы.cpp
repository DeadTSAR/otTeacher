// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// заранее жёстко определено кол-во элементов
	const int N1 = 100;
	int arr1[N1];

	int N1_real;
	cout << "Input N: ";
	cin >> N1_real;
	for (int i = 0; i < N1_real; i++){
		arr1[i] = rand() % 100;
		cout << arr1[i] << '\t';
	}

	// Размер второго массива
	int N2;
	cout << "\nInput N of the second array: ";
	cin >> N2;
	int * arr2 = new int[N2];
	for (int i = 0; i < N2; i++){
		arr2[i] = rand() % 100;
		cout << arr2[i] << '\t';
	}
	delete[] arr2;

	cout << "\nElement of the third array: ";
	int N3 = 5;
	int * arr3 = new int[N3]{1, 4, 7, 5, 9};
	for (int i = 0; i < N3; i++){
		cout << arr3[i] << '\t';
	}
	delete[] arr3;

	int * ptrInt = new int;
	*ptrInt = 55;
	cout << *ptrInt << endl;
	delete ptrInt;

	return 0;
}

