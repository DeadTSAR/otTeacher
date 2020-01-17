// ConsoleApplication78.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int ii;
	if (scanf_s("%d", &ii) <= 0){
		cout << "Error while reding a value\n";
	}
	else{
		cout << "ii = " << ii << endl;
	}

	int j = scanf_s("%d %*s %d", &ii, &ii);
	cout << "j = " << j << endl;

	printf("%.5s\n", "HelloWorld");

	int i = 17;
	printf("%20i\n", i);

	double d = 5.5;
	int count = printf("%i %lf\n", i, d);
	printf("Printed %i characters\n", count);
	/*
	%i - int
	%d - int
	%f - float
	%c - char
	%s - string
	
	*/
	return 0;
}
