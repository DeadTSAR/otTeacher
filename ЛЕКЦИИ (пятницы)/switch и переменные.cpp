//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////
//// ConsoleApplication71.cpp: определяет точку входа для консольного приложения.
////



#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	
	cout << "Введите 1, 2 или 3 ";
	int i;
	cin >> i;

	switch (i){
	case 1:
		cout << "Случай 1 ";
		break;
	case 2:
	{
			  int j = 2;
			  cout << "Случай " << j;
			  break;
	}
	case 3:
		cout << "Случай 3 ";
		break;
	}

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
