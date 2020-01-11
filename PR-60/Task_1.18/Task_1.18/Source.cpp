/*
	Составить программу упорядочения по возрастанию первых N, N≤12, элементов массива X методом нахождения
	максимального элемента (или индекса максимального элемента). Следует реализовать ввод исходного массива,
	вывод требуемого массива и подпрограмму реализации работы с массивом в отдельных функциях, которые должны
	вызываться в функции main(). Выделение памяти под массив производится динамически 
*/

#include <iostream>
#include <time.h>

using namespace std;

void mas_init(int* mas, int N) {
	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 20 - 10;
	}
}

void mas_sort(int* mas, int N) {
	int index;
	for (int i = 0; i < N; i++)
	{
		int max = INT_MIN;
		for (int j = 0; j < N - i; j++) {
			if (mas[j] > max) {
				max = mas[j];
				index = j;
			}
		}
		swap(mas[N - 1 - i], mas[index]);
	}
}

void mas_print(int* mas, int N) {
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

int main() {

	srand(time(NULL));
	const int N = 30;
	int M = 12;

	int* mas = new int[N];

	mas_init(mas, N);
	mas_print(mas, N);
	mas_sort(mas, M);
	mas_print(mas, N);
}