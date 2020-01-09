// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	double d;
	cin >> i >> d;

	// write to file
	FILE * file;
	//file = fopen("123.txt", "w");
	fopen_s(&file, "123.txt", "w");
	fprintf(file, "%i %.2lf", i, d);
	fclose(file);

	FILE * fileRead;
	fopen_s(&fileRead, "123.txt", "r");
	int i2;
	double d2;
	fscanf_s(fileRead, "%i %lf", &i2, &d2);
	fclose(fileRead);

	cout << "Data from file: " << i2 << d2 << endl;

	return 0;
}
