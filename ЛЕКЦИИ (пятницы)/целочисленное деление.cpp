// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#define MY_PI 3.14
#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int b = 7;
	a + b;
	a + a;
	// a == 5, b == 7
	a++; // postfix
	// a == 6
	++a; // prefix
	// a == 7

	int c;
	c = b++;
	// c == 7, b == 8
	cout << "c = " << c << " b = " << b << endl;
	c = ++b;
	// c == 9, b == 9
	cout << "c = " << c << " b = " << b << endl;

	int d = 10;
	d += d++;
	cout << "d = " << d << endl;
	
	cout << "100 / 26 == " << 100 / 26 << endl;
	cout << "100. / 33 == " << 100. / 33 << endl;
	cout << "100 / 33. == " << 100 / 33. << endl;
	cout << "100. / 33. == " << 100. / 33. << endl;
	
	cout << "100 % 25 == " << 100 % 25 << endl;
	cout << "100 % 24 == " << 100 % 24 << endl;
	cout << "8 % 2 == " << 8 % 2 << endl;
	cout << "9 % 2 == " << 9 % 2 << endl;

	int number = 4231;
	cout << "ones(" << number << ") = " << number % 10 << endl;
	cout << "tens(" << number << ") = " << (number % 100) / 10 << endl;
	cout << "tens(" << number << ") = " << (number / 10) % 10 << endl;

	cout << "hundreds(" << number << ") = " << (number / 100) % 10 << endl;

	//cout<< 1.5 % 0.3 << endl;
	return 0;
}

