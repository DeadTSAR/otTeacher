// ConsoleApplication69.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "stdafx.h"
#include <iostream>
#include <iomanip>
//#include <Windows.h>
using namespace std;

int main() {
	cout << 100 << "\t" << -100 << "\t" << 30u
		<< "\t" << 1.5 << "\t" << 1.5f << "\t" << 035
		<< "\t" << 0xFF << "\t" << .4 << "\t" << 4.
		<< "\t" << 1.58e+03 << "\t" << 1.58E-03 << "\v";
	cout << "\a";
	cout << 'abc' << '\n';
	printf("%E\n", 0.00158);
	cout << boolalpha << (0.25F == 0.25);
	cout << "\n \x21 Some text\n";
	cout << "C:\\new\\text.txt";
	cout << "Alex said: \"Hello!\"";
	//system("pause");
	return 0;
}

