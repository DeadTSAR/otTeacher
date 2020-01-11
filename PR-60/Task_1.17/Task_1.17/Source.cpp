/*
	Составить программу упорядочения по возрастанию первых N, N≤12, элементов массива X методом нахождения
	минимального элемента (или индекса минимального элемента). Следует реализовать ввод исходного массива,
	вывод требуемого массива и подпрограмму реализации работы с массивом в отдельных функциях, которые 
	должны вызываться в функции main(). Выделение памяти под массив производится динамически
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
		int min = INT_MAX;
		for(int j = i; j < N; j++){
			if (mas[j] < min) {
				min = mas[j];
				index = j;
			}
		}
		swap(mas[i], mas[index]);
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