// lab2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"Rus");
	int x,y;
	cout<<"Введите число:"<<endl;
	cin>>x;
	if (x<0) cout<<"Введено отрицательное число";
	else
	if (x==0) cout<<"Введен нуль";
	else
	if (x>9999) cout<<"Введено пятизначное число";
	else {
	y=x%10;
	if (y) {
		cout<<"Единицы="<<y<<endl;
	}
	x=x/10;
	y=x%10;
	if (y) {
		cout<<"Десятки="<<y<<endl;
	}
	x=x/10;
	y=x%10;
	if (y) {
		cout<<"Сотни="<<y<<endl;
	}
	x=x/10;
	if (x) cout<<"Тысячи="<<x<<endl;

	}

	system("pause");
	return 0;
}

