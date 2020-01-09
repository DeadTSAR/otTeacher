// ConsoleApplication78.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char c;
	FILE * f;
	fopen;
	fopen_s(&f, "1.txt", "r+");
	if (f){
		while ((c = getc(f)) != EOF){
			cout << c << ' ' << int(c) << endl;
		}
		fclose(f);
	}
	else{
		cout << "File not found";
	}

	fopen_s(&f, "1.txt", "a");
	if (f){
		fputs("Hello, strings and files", f);
		fclose(f);
	}

	char charArr[20];
	fopen_s(&f, "1.txt", "r");
	if (f){
		fgets(charArr, 20, f);
		//charArr[20] = '\0';
		cout << endl << "fgets result: " << charArr << endl;
		fgets(charArr, 20, f);
		//charArr[20] = '\0';
		cout << endl << "fgets result: " << charArr << endl;
		fclose(f);
	}

	return 0;
}

