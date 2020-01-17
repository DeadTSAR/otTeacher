// ConsoleApplication78.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


int main()
{
	int i = 9, ii;
	double d = 9.9, dd;
	char c = 'c', cc;

	ofstream file1("1.txt"/*, ios::out*/);
	file1 << i << ' ' << d << ' ' << c;
	file1.close();

	ifstream file2("1.txt"/*, ios::in*/);
	file2 >> ii >> dd >> cc;
	file2.close();

	cout << "ii = " << ii << endl;
	cout << "dd = " << dd << endl;
	cout << "cc = " << cc << endl;

	stringstream ss;
	ss << "123 dfs 12.2";
	ss >> ii >> cc >> cc >> cc >> dd;
	cout << "ii = " << ii << endl;
	cout << "dd = " << dd << endl;
	cout << "cc = " << cc << endl;

	/*
	FILE * fileWrite;
	fopen_s(&fileWrite, "1.txt", "r");
	while (!feof(fileWrite)){
		cout << char(fgetc(fileWrite));
	}
	fclose(fileWrite);
	*/

	return 0;
}
