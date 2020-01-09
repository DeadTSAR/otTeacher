// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const int N = 10;
	const int& N_ref = N;
	
	int arr[N] = { 1, 4, 5, 9, 67, 1, 4, 5, 9, 67 };
	
	// копирование элементов массива
	for (auto item : arr){
		item++;
	}
	for (auto item : arr){
		cout << item << '\t';
	}

	for (auto& item : arr){
		item++;
	}
	for (const auto& item : arr){
		cout << item << '\t';
	}

	return 0;
}

