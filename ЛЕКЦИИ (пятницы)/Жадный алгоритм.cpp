// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");

	// Жадный алгоритм
	cout << "Введите сумму" << endl;
	int sum, k5000, k1000, k500, k100;
	cin >> sum; // 19900
	k5000 = sum / 5000; // 3
	sum = sum % 5000;
	// sum %= 5000; 
	// sum = sum - k5000 * 5000;
	// 4900
	
	k1000 = sum / 1000; // 4
	sum %= 1000;
	k500 = sum / 500;
	sum %= 500;
	k100 = sum / 100;
	cout << "Po 5000 = " << k5000 <<
		" Po 1000 = " << k1000 <<
		" Po 500 = " << k500 <<
		" Po 100 = " << k100 << endl;

	return 0;
}

