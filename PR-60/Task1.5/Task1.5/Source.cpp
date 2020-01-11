/*
	Составить программу, которая в каждой строке матрицы D(m,n), m≤10, n≤12, находит элемент,
	для которого модуль разности этого элемента и среднего геометрического модулей всех 
	элементов строки максимален. Предполагается, что матрица нулевых элементов не содержит. 
	Вывести матрицу в виде матрицы, располагая рядом с каждой строкой найденный элемент и модуль 
	искомой разности. Следует реализовать ввод исходного массива, вывод требуемого массива и 
	подпрограмму реализации работы с массивом в отдельных функциях, которые должны вызываться в 
	функции main(). Выделение памяти под матрицу производится динамически
*/

#include <iostream>
#include <random>
#include <time.h>
#include <math.h>

using namespace std;

int** mas_creation(int N, int M) {
	int** mas;
	mas = new int* [N];
	for (int i = 0; i < N; i++)
	{
		mas[i] = new int [M];
	}

	return mas;
}

void mas_init(int** mas, int N, int M) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			mas[i][j] = rand() % 20 - 10;
			if (!mas[i][j]) ++mas[i][j]; 
		}
	}
}

float* theGeometricMeanOfStr(int** mas, int N, int M) {
	float* geometricMeanMas = new float[N];
	for (int i = 0; i < N; i++)
	{
		float mean = 1;
		for (int j = 0; j < M; j++)
		{
			mean *= abs(mas[i][j]);
		}

		geometricMeanMas[i] = pow(mean, 1.0 / M);
	
	}

	return geometricMeanMas;
}

int* find_element(int** mas, float* mas_geometric_mean, int N, int M) {
	int* element = new int[N];
	for (int i = 0; i < N; i++)
	{
		float max = FLT_MIN;
		for (int j = 0; j < M; j++) {
			if (max < abs(mas[i][j] - mas_geometric_mean[i])) {
				element[i] = mas[i][j];
				max = abs(mas[i][j] - mas_geometric_mean[i]);
			}
		}
	}

	return element;
}

void print_mas(int** mas, int N, int M) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << mas[i][j] << "   ";
		}

		cout << endl;
	}
}


int main() {

	srand(time(NULL));
	const int N = 10;
	const int M = 12;

	int** mas = mas_creation(N, M);
	mas_init(mas, N, M);
	print_mas(mas, N, M);

	cout << endl;

	float* mas_geometric_mean = theGeometricMeanOfStr(mas, N, M);
	for (int i = 0; i < N; i++)
	{
		cout << mas_geometric_mean[i] << endl;
	}

	cout << endl;

	int* mas_element = find_element(mas, mas_geometric_mean, N, M);
	for (int i = 0; i < N; i++)
	{
		cout << mas_element[i] << endl;
	}

	system("PAUSE");

	return 0;
}