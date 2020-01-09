// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int i = 20; //global

int main(){
	int n;
	cout << "Enter integer\n";
	cin >> n;

	// 6 % 2 == 0
	// 11 % 2 == 1
	// 0 -> false
	// 1 -> true

	if (n % 2) // n % 2 == 1
		cout << "Odd\n";
	else
		cout << "Even\n";

	if (!(n % 2)) // n % 2 == 0
		cout << "Even\n";
	else
		cout << "Odd\n";

	if (n > 10)
		if (n > 20)
			cout << "n > 20" << endl;
	else
		cout << "another string" << endl;

	if (n > 10) {
		if (n > 20) {
			cout << "n > 20" << endl;
		}
	}
	else {
		cout << "another string" << endl;
	}

	return 0;
}

