/*
	Составить программу упорядочения по убыванию первых N, N ≤12, элементов массива X методом
	нахождения минимального элемента (или индекса минимального элемента). Следует реализовать
	ввод исходного массива, вывод требуемого массива и подпрограмму реализации работы с массивом
	в отдельных функциях, которые должны вызываться в функции main(). Выделение памяти под 
	массив производится динамически
*/

#include <iostream>
#include <time.h>

using namespace std;

void mas_init(int* mas, int M) {
	for (int i = 0; i < M; i++) {
		mas[i] = rand() % 40 - 20;
	}
}

void mas_sort(int* mas, int M, int N) {
	int this_min;
	int index;
	for (int i = 0; i < N; i++) {
		this_min = INT_MAX;
		for (int j = i; j < N; j++) {
			if (mas[j] < this_min) {
				this_min = mas[j];
				index = j;
			}
		}
		swap(mas[index], mas[N - i]);
	}
}

void mas_print(int* mas, int N) {
	for (int i = 0; i < N; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

int main() {
	srand(time(NULL));
	const int M = 20;
	int N = 12;
	int* mas = new int[M];

	mas_init(mas, M);
	mas_print(mas, M);

	mas_sort(mas, M, N);
	mas_print(mas, M);

	system("pause");
}