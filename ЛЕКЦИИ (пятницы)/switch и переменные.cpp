//// ConsoleApplication71.cpp: определ¤ет точку входа дл¤ консольного приложени¤.
////
//// ConsoleApplication71.cpp: определ¤ет точку входа дл¤ консольного приложени¤.
////



#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	
	cout << "¬ведите 1, 2 или 3 ";
	int i;
	cin >> i;

	switch (i){
	case 1:
		cout << "—лучай 1 ";
		break;
	case 2:
	{
			  int j = 2;
			  cout << "—лучай " << j;
			  break;
	}
	case 3:
		cout << "—лучай 3 ";
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
