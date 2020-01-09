// ConsoleApplication69.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "stdafx.h"
#include <iostream>
#include <iomanip>
//#include <Windows.h>
using namespace std;

enum class weekdays {
	Mon = 1,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat,
	Sun
};

enum {zero = 10, one, two = 20, three};

#define PRINT_RESULT(X) cout << #X << " = " << (X) << endl;

int main() {
	PRINT_RESULT(sizeof 1.5) // -> cout << "sizeof 1.5" << " = " << (sizeof 1.5);
	cout << "sizeof 1.5 = " << (sizeof 1.5) << endl; // 1.5 - двойная точность
	cout << "sizeof(1.5f) = " << (sizeof(1.5f)) << endl; // 1.5f - одинарная точность
	cout << sizeof(100) << endl;
	// short <= int <= longint
	cout << sizeof(100L) << endl;
	cout << sizeof(true) << endl;
	cout << sizeof('1') << endl;
	cout << sizeof("1234") << endl; // 5 byte: 1234 + \0
	cout << sizeof(int) << endl;
	return 0;
}

