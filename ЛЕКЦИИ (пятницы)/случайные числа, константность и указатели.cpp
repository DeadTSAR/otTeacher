// ConsoleApplication72.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int i;
	cout << printf << endl;
	srand(time(0));
	i = rand() % 101; // 0 - 100
	cout << i << endl;

	int var = 50;
	int * const ptrVar = &var; // ����������� ���������
	// ������
	// ptrVar = &var;

	const int N = 10000;
	int const NN = 10000;
	const int * ptrN = &N; // ��������� �� ���������
	ptrN = &NN;
	ptrN = &var; // ��������� �� ��������� ����� ����� ����� ����������
	// *ptrN = 51; // �� ��������� �� ��������� ���������� ������ ������

	int mas[N];
	for (int i = 0; i < N; i++){
		mas[i] = rand() % 101; // 0 - 100
	}
	cout << "min element in array = " << *min_element(mas, mas + N) << endl;
	cout << "max element in array = " << *max_element(mas, mas + N) << endl;

	for (int i = 0; i < N; i++){
		// from -100 to 100 = 201 element
		mas[i] = rand() % 201 - 100; 
	}
	cout << "min element in array = " << *min_element(mas, mas + N) << endl;
	cout << "max element in array = " << *max_element(mas, mas + N) << endl;

	return 0;
}

