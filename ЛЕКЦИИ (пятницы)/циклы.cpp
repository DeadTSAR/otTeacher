//// ConsoleApplication71.cpp: определ€ет точку входа дл€ консольного приложени€.
////
//// ConsoleApplication71.cpp: определ€ет точку входа дл€ консольного приложени€.
////



#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	
	// for i := 1 to 10 do ...
	// for i in range(10):

	/*
	for (;;){
		cout << "Infinite loop ";
	}

	while (true){
		cout << "Infinite loop ";
	}
	*/

	int k;
	k = 1, 2, 3, 4, 100;
	cout << k << endl;

	cout << "Even numbers from 0 to 100 (for loop): ";
	for (int i = 0; i <= 100; i += 2){
		// i - счЄтчик цикла, параметр цикла, управл€юща€ переменна€
		cout << i << '\t';
	}
	cout << endl;

	cout << "Even numbers from 0 to 100 (while loop): ";
	{
		int i = 0;
		while (i <= 100){
			cout << i << '\t';
			i += 2;
		}
	}
	cout << endl;

	for (int i = 0, j = 100; i <= 25 && j >= 50; i += 2, j -= 2){
		cout << i << '\t' << j << endl;
	}
	cout << endl;

	int i = 0;
	do{
		cout << "Code " << i << " symbol " << char(i) << endl;
		i++;
	} while (i <= 255);

	return 0;
}


//#include "stdafx.h"
//#include <clocale>
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int i = 0;
//	do{
//		cout << char(i) << '\t';
//		i++;
//	} while (i <= 255);
//}
