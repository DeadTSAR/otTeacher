// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

struct sportsman{
	char name[30];
	int result;
};

istream & operator >>(istream & in, sportsman & s){
	in >> s.name >> s.result;
	return in;
}

ostream & operator <<(ostream & out, sportsman & s){
	out << s.name << ' ' << s.result << endl;
	return out;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	int size;
	cout << "Input size: ";
	cin >> size;


	sportsman * mas;
	mas = (sportsman *)malloc(sizeof(sportsman)* size);

	cout << "Input " << size << " elements: ";
	for (i = 0; i < size; i++){
		cin >> mas[i];
	}

	FILE * file1;
	fopen_s(&file1, "D:\\ttt\\123.txt", "wb");
	fwrite(mas, sizeof(sportsman), size, file1);
	fclose(file1);

	sportsman * mas2;
	mas2 = (sportsman *)malloc(sizeof(sportsman)* size);
	fopen_s(&file1, "D:\\ttt\\123.txt", "rb");
	fread(mas2, sizeof(sportsman), size, file1);
	fclose(file1);

	for (i = 0; i < size; i++){
		cout << mas2[i];
	}

	return 0;
}
