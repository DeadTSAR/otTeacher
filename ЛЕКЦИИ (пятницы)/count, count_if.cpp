//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////
//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	// ������� ���������, ������ 0
	int count = 0;
	for (int i = 0; i < N; i++){
		if (arr[i] == 0){
			count++;
		}
	}
	cout << "������ ������� ����� = " << count << endl;
	cout << "std::count() ��� ����� = " << std::count(arr, arr + N, 0) << endl;

	count = 0;
	for (int i = 0; i < N; i++){
		if (arr[i] % 2 == 0){
			count++;
		}
	}
	cout << "������ ������� ������ = " << count << endl;
	cout << "std::count() ��� ������ = " << std::count_if(arr, arr + N, 
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