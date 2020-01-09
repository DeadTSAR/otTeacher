#include "stdafx.h"
#include <iostream>
#include <limits>
#include <cstdint>
//#include <Windows.h>
using namespace std;

int main() {
	cout << "INT_MAX = " << INT_MAX << '\n';
	cout << "INT_MIN = " << INT_MIN << '\n';
	cout << "UINT_MAX = " << UINT_MAX << '\n';
	//cout << "UINT_MIN = " << UINT_MIN;
	cout << "CHAR_MAX = " << CHAR_MAX << '\n'; //char: 'a', '!'
	cout << "CHAR_MIN = " << CHAR_MIN << '\n';
	cout << "sizeof(long long) = " << sizeof(long long) << endl;

	cout << "Hello, world!" << endl;
	// cout << "Hello, world!" * 7 << endl; // error
	cout << "Hello, world!" + 7 << endl;

	int my_variable_name = 90;
	int my_variable_name2(90);
	float f = 3.4;
	double d = 3.4f;
	bool isFull = true;

	int i;
	i = 90;
	i = i + 100;
	// i + 100 = i;
	// i == 190

	auto t = true; // t type == bool
	auto another_var = 13.3; // t type == double
	another_var = another_var - 1;

	cout << another_var << ' ' << i << endl;

	int ii[8];
	cout << ii[0] << endl; //Мусор

	unsigned int my_unsigned_var = 10;
	// unsigned my_unsigned_var = 10;
	my_unsigned_var = my_unsigned_var + 3; // 13
	my_unsigned_var = my_unsigned_var - 14;
	cout << my_unsigned_var << endl;
	my_unsigned_var = my_unsigned_var + 5;
	cout << my_unsigned_var << endl;

	short s1;
	unsigned short s2;

	uint64_t big_number = 400000000000;
	cout << big_number << endl;
	cout << "Minimum of int16_t:" << numeric_limits<double>::min() << endl;
	cout << "Maximum of int16_t:" << numeric_limits<double>::max() << endl;

	return 0;
}

