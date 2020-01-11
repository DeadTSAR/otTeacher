/*
	Из массива Х, упорядоченного по невозрастанию значений элементов, переписать в массив Y числа,
	исключив их повторы и обеспечив упорядоченность по возрастанию. Следует реализовать ввод исходного
	массива, вывод требуемого массива и подпрограмму реализации работы с массивом в отдельных функциях,
	которые должны вызываться в функции main(). Выделение памяти под массив производится динамически
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
		mas[i] = rand() % 20 - 10;
	}
}

void mas_decrease(int* mas, int N) {
	for (int i = 0; i < N; i++)
	{
		for(int j = i; j < N; j++) 
		{
			if (mas[i] < mas[j]) {
				swap(mas[i], mas[j]);
			}
		}
	}
}

int* mas_no_repeats(int* mas, int N, int &M) {
	int* mas_no_repeats = new int[N];
	int j = 0;

	for (int i = 0; i < (N - 1); i++)
	{
		if (mas[i] != mas[i + 1]) {
			mas_no_repeats[j] = mas[i];
			j++;
		}
	}

	if (mas[N] != mas[N - 1])
	{
		mas_no_repeats[j] = mas[N - 1];
		j++;
	}
	M = j;
	return mas_no_repeats;
}

void mas_increase(int* mas, int N) {
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			if (mas[i] > mas[j]) {
				swap(mas[i], mas[j]);
			}
		}
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
	const int N = 20;
	int M = 0;

	int* mas = mas_creation(20);
	mas_init(mas, N);
	mas_print(mas, N);
	mas_decrease(mas, N);
	mas_print(mas, N);

	int* masNoRepeats = mas_no_repeats(mas, N, M);
	mas_print(masNoRepeats, M);

	mas_increase(masNoRepeats, M);
	mas_print(masNoRepeats, M);

	system("PAUSE");
}