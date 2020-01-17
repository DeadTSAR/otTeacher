// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//
// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

enum class WeekDays{
	Mon,
	Tue,
	Wed,
	Thu
};

int main(){
	int a, b, item;
	cout << "Enter 2 integers\n";
	cin >> a >> b;
	cout << "1 - addition, 2 - subtraction, 3 - multiplication, 4 - division\n";
	cin >> item;
	cout << "Result = ";

	// проваливающееся управление
	switch (item)
	{
	case 1: cout << a + b;
	case 2: cout << a - b; 
	case 3: cout << a * b;
	case 4: cout << a / b;
	default: cout << " invalid operation ";
	}
	cout << "\n";

	WeekDays day = WeekDays::Mon;
	switch (day)
	{
	case WeekDays::Mon: cout << a + b;
	case WeekDays::Tue: cout << a - b;
	default: cout << " invalid operation ";
	}


	return 0;
}

