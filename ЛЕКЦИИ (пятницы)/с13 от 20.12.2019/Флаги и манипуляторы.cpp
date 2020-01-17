// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout.unsetf(ios::scientific); // снять установленные флаги
	cout.setf(ios::fixed);
	cout.precision(0);
	cout << pow(2, 20) << endl;

	//cout.setf(ios::boolalpha);
	cout << boolalpha << true << " " << false << endl;

	ios::fmtflags CurrentFlags = cout.flags();

	cout.width(20);
	cout.setf(ios::left);
	cout.fill('.');
	cout << 20 << "bread" << endl;
	cout.width(20);
	cout << 20 << "bread" << endl;

	// #include <iomanip>
	cout << setw(10) << setprecision(2) << setfill('_') << 80.1 << "milk" << endl;

	return 0;
}