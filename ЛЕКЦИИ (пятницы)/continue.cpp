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
	int iter = 0;
	do{
		cout << "������� �������� �� 10 �� 99: ";
		cin >> i;
		if (i < 10 || i > 99){
			cout << "������! �������� ��������. ";
			continue;
		}
		
		cout << "����� ���� �����: " << i / 10 + i % 10 << endl;
		iter++;

	} while (iter < 5);

	cout << "���! �� ����� ������ ��������";

	return 0;
}

