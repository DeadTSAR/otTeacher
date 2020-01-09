// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

#include <tuple>

int main(){
	int a = 7;
	int b = 89;

	int c;

	c = a; // a == 7, b == 89, c == 7
	a = b; // a == 89, b == 89, c == 7
	b = c; // a == 89, b == 7, c == 7

	cout << "a, b = " << a << " " << b << endl;

	tie(a, b) = make_tuple(7, 8);
	cout << "a, b = " << a << " " << b << endl;

	tie(a, b) = make_tuple(b, a);
	cout << "a, b = " << a << " " << b << endl;

	a = 5;
	a = a + 10; // <=> a += 10;
	a += 1; // a == 16
	a %= 5; // a = a % 5; a == 1

	return 0;
}

