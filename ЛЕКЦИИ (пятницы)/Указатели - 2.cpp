//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////
//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////



#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_CTYPE, "Rus");
	
	int value;
	value = 257;

	int *pointer;
	pointer = &value;

	cout << "value = " << value << endl;
	cout << "&value = " << &value << endl;
	cout << "pointer = " << pointer << endl;
	cout << "&pointer = " << &pointer << endl;
	cout << "*pointer = " << *pointer << endl;

	int **pointer2;
	pointer2 = &pointer;
	cout << "pointer2 = " << pointer2 << endl;
	cout << "*pointer2 = " << *pointer2 << endl;
	cout << "**pointer2 = " << **pointer2 << endl;

	int *pointer_to_int_in_heap;
	pointer_to_int_in_heap = new int;
	cout << "Address in heap = " << pointer_to_int_in_heap << endl;
	*pointer_to_int_in_heap = 10;
	*pointer_to_int_in_heap = *pointer_to_int_in_heap * 3;
	cout << "Value in heap = " << *pointer_to_int_in_heap << endl;

	//���������� ����� ����������
	cout << "�������� ������� �����: " << int(*((char *)pointer + 0)) << endl;
	cout << "�������� ������� �����: " << int(*((char *)pointer + 1)) << endl;
	cout << "�������� �������� �����: " << int(*((char *)pointer + 2)) << endl;
	cout << "�������� ���������� �����: " << int(*((char *)pointer + 3)) << endl;

	return 0;
}