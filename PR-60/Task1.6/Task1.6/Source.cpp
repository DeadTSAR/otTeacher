/*
	Выполнить циклический сдвиг элементов массива Х(N), N≤10, в результате которого значение
	последнего элемента должно оказаться на месте первого, а остальные – сдвинутыми на одну
	позицию в сторону увеличения индекса. Следует реализовать ввод исходного массива, вывод
	требуемого массива и подпрограмму реализации работы с массивом в отдельных функциях, 
	которые должны вызываться в функции main(). Выделение памяти под массив производится 
	динамически 
*/

#include <iostream>
#include <time.h>
using namespace std;


int* mas_creation(int N) {
	return new int[N];
}

void mas_init(int* mas, int N) {
	for (int i = 0; i < N; i++)
	{
		mas[i] = rand() % 10;
	}
}

void cyclic_shift(int* mas, int N) {
	int element = mas[N - 1];
	for (int i = N - 1; i >= 0; i--) {
		mas[i] = mas[i - 1];
	}
	mas[0] = element;
}

void mas_print(int* mas, int N) {
	for (int i = 0; i < N; i++)
	{
		cout << mas[i] << "\t";
	}
}

int main() {
	
	const int N = 10;

	int mas[N] = { 5, -12, -12, 9, 10, 0, -9, -12, -1, 23 };
	mas_print(mas, N);

	cout << endl;

	cyclic_shift(mas, N);
	mas_print(mas, N);
}