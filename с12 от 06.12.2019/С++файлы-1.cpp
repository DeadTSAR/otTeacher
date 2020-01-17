// ConsoleApplication78.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	ifstream file;
	file.open("1.txt", ios::in); // file.open("1.txt");
	while (!file.eof()){
		string s;
		file >> s;
		cout << s << endl;
	}
	file.close();

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
