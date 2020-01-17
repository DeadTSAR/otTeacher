// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

class ExDATA : public exception {
public:
	int n, m; string s;
	ExDATA(int x, int y, string str) :n(x), m(y), s(str)
	{}
	const char * what() const{
		return s.c_str(); // C++ string -> C-string
	}
};

int GCD(int x, int y){
	if (x == 0 || y == 0) throw ExDATA(x, y, "ZERO!");
	if (x<0) throw ExDATA(x, y, "Negative parameter 1");
	if (y<0) throw ExDATA(x, y, "Negative parameter 2");
	while (x != y){
		if (x>y) x = x - y;
		else y = y - x;
	}
	return x;
}

int _tmain(int argc, _TCHAR* argv[])
{
	try{
		cout << "GCD(66,44)=" << GCD(66, 44) << endl;
		cout << "GCD(0,7)=" << GCD(0, 7) << endl;
		cout << "GCD(-6,4)=" << GCD(-6, 4) << endl;
	}
	catch (const exception & ex){
		cout << ex.what() << endl;
	}
	catch (ExDATA d){
		cout << d.s << " x=" << d.n << " y=" << d.m << endl;
	}

	return 0;
}
