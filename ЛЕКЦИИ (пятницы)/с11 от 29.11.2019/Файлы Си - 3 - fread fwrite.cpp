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
	int size;
	cout << "Input size: ";
	cin >> size;


	int * mas;
	mas = (int *)malloc(sizeof(int)* size);

	cout << "Input " << size << " elements: ";
	for (i = 0; i < size; i++){
		cin >> mas[i];
	}

	FILE * file1;
	fopen_s(&file1, "123.txt", "wb");
	fwrite(mas, sizeof(int), size, file1);
	fclose(file1);

	int * mas2;
	mas2 = (int *)malloc(sizeof(int)* size);
	fopen_s(&file1, "123.txt", "rb");
	fread(mas2, sizeof(int), size, file1);
	fclose(file1);

	for (i = 0; i < size; i++){
		cout << mas2[i] << ' ';
	}

	return 0;
}
