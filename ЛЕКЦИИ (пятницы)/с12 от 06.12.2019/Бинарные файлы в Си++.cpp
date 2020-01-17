// ConsoleApplication78.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct year{
	int number;
	int events;
};

int main()
{
	year years[5] = {
		{1900, 89},
		{1910, 98 },
		{2000, 890 },
		{2001, 891 },
		{2002, 892 },
	};

	ofstream file1("1.txt", ios::out | ios::binary);
	file1.write((char*)years, 5 * sizeof(year));
	file1.close();

	year years2[5];
	ifstream file2("1.txt", ios::in | ios::binary);
	file2.read((char*)years2, 5 * sizeof(year));
	file2.close();

	for (int i = 0; i < 5; i++){
		cout << years2[i].number << ' ' << years2[i].events
			<< endl;
	}

	return 0;
}
