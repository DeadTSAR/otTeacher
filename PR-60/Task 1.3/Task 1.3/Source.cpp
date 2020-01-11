/*
	Составить программу, которая в каждой строке матрицы D(m,n), m≤10, n≤12, находит элемент, для которого модуль разности этого элемента и среднего
	арифметического элементов строки минимален. Вывести исходную матрицу так, чтобы после элементов строки матрицы располагались найденный элемент,
	среднее арифметическое и модуль их разности. Следует реализовать ввод исходного массива, вывод требуемого массива и подпрограмму реализации работы
	с массивом в отдельных функциях, которые должны вызываться в функции main(). Выделение памяти под матрицу производится динамически
*/

#include <iostream>
#include <time.h>
using namespace std;


int** mas_creation(int N, int M) {
	int ** mas;
	mas = new int* [N];
	for (int i = 0; i < N; i++)
	{
		mas[i] = new int[M];
	}
	return mas;
}

void mas_init(int** mas, int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			mas[i][j] = rand() % 20 - 10;
		}
	}
}

float * mas_str_aver(int** mas, int N, int M) {
	float * mas_str_aver = new float[N];
	
	for (int i = 0; i < N; i++) {
		float aver_current = 0;
		for (int j = 0; j < M; j++) {
			aver_current += mas[i][j] ;
		}
		mas_str_aver[i] = aver_current / M ;
	}

	return mas_str_aver;
}

float * search_element(int** mas, float * mas_str_aver, int N, int M){

	float * element_with_min_difference = new float [N];
	
	for (int i = 0; i < N; i++) {

		float min_difference = FLT_MAX;
		float aver_current = mas_str_aver[i];

		for (int j = 0; j < M; j++) {
			float diff = mas[i][j] * 1.0 - aver_current;
			if (min_difference > abs(diff)) {
				element_with_min_difference[i] = (float)mas[i][j];
				min_difference = abs((float)mas[i][j] - aver_current);
			}
		}
	}

	return element_with_min_difference;
}

float* min_difference(float* mas_str_aver, float * element_with_min_difference, int N) {
	float * min_difference = new float[N];
	for (int i = 0; i < N; i++)
	{
		min_difference[i] = element_with_min_difference[i] - mas_str_aver[i];
	}
	return min_difference;
}

void mas_print(int** mas, int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
}


int main() {

	srand(time(NULL));
	const int N = 5;
	const int M = 5;

	// Создаем и инициализируем исходный массив mas;
	int ** mas = mas_creation(N, M);
	mas_init(mas, N, M);
	mas_print(mas, N, M);
	cout << endl;

	// Находим среднееарифметическое значение для каждой строки; 
	float * str_aver_mas = mas_str_aver(mas, N, M);
	for (int i = 0; i < N; i++)
	{
		cout << str_aver_mas[i] << endl;
	}
	cout << endl;

	// Находим элемент, для которого модуль разности этого элемента и среднего арифметического элементов строки минимален;
	float * element_with_min_difference = search_element(mas, str_aver_mas, N, M);
	for (int i = 0; i < N; i++)
	{
		cout << element_with_min_difference[i] << endl;
	}
	cout << endl;

	//Минимальная разность этого элемента и среднего арифметического элементов строки;
	float* min_difference_mas = min_difference(str_aver_mas, element_with_min_difference, N);
	for (int i = 0; i < N; i++)
	{
		cout << min_difference_mas[i] << endl;
	}
	cout << endl;

	system("PAUSE");
	return 0;
}

