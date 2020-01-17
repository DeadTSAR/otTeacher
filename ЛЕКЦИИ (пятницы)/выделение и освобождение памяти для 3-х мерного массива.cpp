// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n, m, l;
	cin >> n >> m >> l;
	double ***matr;
	matr = new double **[n]; // n - глубина
	for (int i = 0; i<n; i++){
		matr[i] = new double *[m]; // m - строки
		for (int j = 0; j<m; j++){
			matr[i][j] = new double[l];
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			for (int k = 0; k < l; k++)
				matr[i][j][k] = i + j + k;
		}
	}

	for (int i = 0; i < n; i++){
		cout << string("Depth = ") + to_string(i) << endl;
		for (int j = 0; j < m; j++){
			for (int k = 0; k < l; k++){
				cout << matr[i][j][k] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}

	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			delete[] matr[i][j];
		}
		delete[] matr[i];
	}
	delete[] matr;

	return 0;
}