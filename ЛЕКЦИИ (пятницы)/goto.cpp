// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
//
// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	int i;
vvod:
	cout << "������� �������� �� 10 �� 99: ";
	cin >> i;
	if (i < 10 || i > 99){
		cout << "������! �������� ��������. ";
		goto vvod;
	}

	cout << "���! �� ����� ������ ��������";

	return 0;
}
