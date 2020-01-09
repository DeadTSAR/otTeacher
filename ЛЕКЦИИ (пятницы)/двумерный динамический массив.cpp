// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int N = 3, M = 4;
	// incorrect
	// int ** arr = (int **)new int[N][M];

	int ** arr = new int*[N];
	for (int i = 0; i < N; i++){
		arr[i] = new int[M];
	}

	srand(time(0));
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			arr[i][j] = rand() % 11;
		}
	}

	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++){
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	for (int i = 0; i < N; i++){
		delete[] arr[i];
	}
	delete[] arr;
	arr = nullptr;

	return 0;
}

