// ConsoleApplication78.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

struct sportsman{
	char name[20];
	unsigned int score;
};

int main()
{
	FILE * fileWrite;
	fopen_s(&fileWrite, "1.txt", "r");
	while (!feof(fileWrite)){
		cout << char(fgetc(fileWrite));
	}
	fclose(fileWrite);
	

	return 0;
}
