// ConsoleApplication72.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int N = 3, M = 4;

	/*
	vector<vector<int>> matrix(N, vector<int>(M));
	*/
	vector<bool> vect;

	// Первый вариант
	vector<vector<int>> matrix;
	matrix.push_back({ 9, 5, 6});
	matrix.push_back({ 9, 100, 11});
	matrix.push_back({ 9, 55, 6500});
	matrix[0].push_back(8);


	for (int i = 0; i < matrix.size(); i++){
		for (int j = 0; j < matrix[i].size(); j++){
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}

	int max_el = matrix[0][0];
	for (int i = 0; i < matrix.size(); i++){
		for (int j = 0; j < matrix[i].size(); j++){
			if (matrix[i][j] > max_el)
				max_el = matrix[i][j];
		}
	}
	cout << "max_el = " << max_el << endl;

	{
		vector<int> max_vect = *max_element(begin(matrix), end(matrix));
		cout << "max_vect = ";
		for (const auto & item : max_vect){
			cout << " " << item;
		}
		cout << endl;
	}

	{
		vector<int> max_vect;
		for (const auto & row : matrix){
			max_vect.push_back(*max_element(begin(row), end(row)));
		}
		cout << "*max_element(begin(max_vect), end(max_vect)) = " << *max_element(begin(max_vect), end(max_vect)) << endl;
	}

	matrix.clear();
	cout << "matrix.size() = " << matrix.size() << endl;

	int year = 1990, m = 6, d = 15;

	vector<int> date1 = {year, m, d};
	vector<int> date2 = {1007, 3, 14};
	if (date1 < date2){
		cout << "date1 < date2";
	}
	else{
		cout << "date1 >= date2";
	}

	return 0;
}