//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////
//// ConsoleApplication71.cpp: ���������� ����� ����� ��� ����������� ����������.
////



#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
	int N = 10;
	int * ptrN = &N;
	cout << "pointer value = " << (void *)ptrN << endl;
	
	char C = '@';
	char * ptrC = &C;
	cout << "pointer value = " << (void *)ptrC << endl;

	char * myString = "Hello world!\n";
	cout << myString;

	return 0;

}