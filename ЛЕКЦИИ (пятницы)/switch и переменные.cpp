//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////
//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////



#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	
	cout << "������� 1, 2 ��� 3 ";
	int i;
	cin >> i;

	switch (i){
	case 1:
		cout << "������ 1 ";
		break;
	case 2:
	{
			  int j = 2;
			  cout << "������ " << j;
			  break;
	}
	case 3:
		cout << "������ 3 ";
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
