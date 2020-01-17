//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////
//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////



#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	const int N = 10;
	int arr[N];
	cout << "Size of arr array = " << sizeof(arr) / sizeof(arr[0]) << endl;

	for (int i = 0; i < N; i++){
		cin >> arr[i];
	}

	// подсчёт элементов, равных 0
	int count = 0;
	for (int i = 0; i < N; i++){
		if (arr[i] == 0){
			count++;
		}
	}
	cout << "Ручной подсчёт нулей = " << count << endl;
	cout << "std::count() для нулей = " << std::count(arr, arr + N, 0) << endl;

	count = 0;
	for (int i = 0; i < N; i++){
		if (arr[i] % 2 == 0){
			count++;
		}
	}
	cout << "Ручной подсчёт чётных = " << count << endl;
	cout << "std::count() для чётных = " << std::count_if(arr, arr + N, 
		[](int x){ /*return x % 2 == 0;*/
		if (x % 2 == 0){
			return true;
		}
		else{
			return false;
		}
	}
		) << endl;

	for (int i = 0; i < N; i++){
		cout << arr[i] << '\t';
	}
	return 0;

}