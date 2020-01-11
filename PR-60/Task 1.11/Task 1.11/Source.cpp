/*
	Выполнить циклический сдвиг элементов массива Х(N), N≤20, на K позиций, в результате которого последние
	K элементов займут место в начале массива, а остальные будут сдвинуты на K позиций в сторону увеличения 
	индекса. Использовать дополнительный массив D. Следует реализовать ввод исходного массива, вывод 
	требуемого массива и подпрограмму реализации работы с массивом в отдельных функциях, которые должны 
	вызываться в функции main(). Выделение памяти под массив производится динамически
*/

#include <iostream>
#include <time.h>

using namespace std;

void mas_init(int* mas, int N) {
	for (int i = 0; i < N; i++) {
		mas[i] = rand() % 20 - 10;
	}
}

void cyclic_shift(int* mas, int N, int K) {
	int* D = new int[K];
	for (int i = 0; i < K; i++) {
		D[K - i - 1] = mas[N - 1 - i];
	}

	for (int i = N - 1; i >= 0; i--) {
		mas[i] = mas[i - 6];
	}

	for (int i = 0; i < K; i++) {
		mas[i] = D[i];
	}

}

void mas_print(int* mas, int N) {
	for (int i = 0; i < N; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

int main() {
	const int N = 20;
	int* mas = new int[N];

	mas_init(mas, N);
	mas_print(mas, N);
	cyclic_shift(mas, N, 6);
	mas_print(mas, N);

	system("pause");
}
