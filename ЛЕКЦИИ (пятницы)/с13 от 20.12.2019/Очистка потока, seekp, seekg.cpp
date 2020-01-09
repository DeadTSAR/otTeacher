// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	ofstream fout("123.txt");
	fout << "Hello, world!";
	fout.seekp(-5, ios::end);
	// fout.tellp(); // получение
	fout << "Bye";
	fout.close();

	ifstream fin("123.txt");
	fin.seekg(2, ios::beg);
	// fin.tellg(); // получение
	string data;
	fin >> data;
	cout << data << endl;

	int i = 0;
	while (i == 0){
		cout << "Input an integer: ";
		cin >> i;
		cin.clear();
		while (std::cin.get() != '\n');
	}

	return 0;
}