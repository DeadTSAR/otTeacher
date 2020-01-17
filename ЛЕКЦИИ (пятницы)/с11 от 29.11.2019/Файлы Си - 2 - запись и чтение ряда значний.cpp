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
	int size;
	int item;
	cout << "Input size: ";
	cin >> size;
	cout << "Input " << size << " elements: ";

	// write to file
	FILE * file;
	//file = fopen("123.txt", "w");
	fopen_s(&file, "123.txt", "w");
	fprintf(file, "%i ", size);
	for (int i = 0; i < size; i++)
	{
		cin >> item;
		fprintf(file, "%i ", item);
	}
	fclose(file);

	FILE * fileRead;
	fopen_s(&fileRead, "123.txt", "r");
	int size2, item2;
	vector<int> vect;
	fscanf_s(fileRead, "%i", &size2);
	for (int i = 0; i < size2; i++)
	{
		fscanf_s(fileRead, "%i", &item2);
		vect.push_back(item2);
	}
	fclose(fileRead);

	cout << "Data from file: " << endl;
	for (int i = 0; i < size2; i++){
		cout << vect[i] << ' ';
	}

	return 0;
}
