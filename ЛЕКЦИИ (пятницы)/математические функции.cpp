// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	cout << ceil(3.3) << " " << ceil(3.0000000000001) << endl;
	cout << floor(3.999999999) << " " << floor(3.00000001) << endl;
	cout << "int(-8.9) == floor(-8.9) is " << (int(-8.9) == floor(-8.9)) << endl;

	double mantissa;
	int exponent;
	mantissa = frexp(7.8, &exponent);
	cout << mantissa << " " << exponent << endl;
	return 0;
}

