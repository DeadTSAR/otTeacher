/*
	Поместить элементы массива X в начало массива Y в обратном порядке, исключив элементы, 
	превосходящие по абсолютной величине вводимое значение R. Следует реализовать ввод 
	исходного массива, вывод требуемого массива и подпрограмму реализации работы с массивом 
	в отдельных функциях, которые должны вызываться в функции main(). Выделение памяти под 
	массив производится динамически
*/
#include <iostream>
#include <time.h>

using namespace std;

int* mas_creation(int size) {
	return new int[size];
}

void mas_init(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 20 - 10;
	}
}

int* mas_Y(int* mas, int size, int N, int &size2) {
	int* Y = new int[size];
	int j = 0;
	for (int i = (size - 1); i >= 0; i--) {
		if (abs(mas[i]) > N) {
			Y[j] = mas[i];
			j++;
		}
	}

	size2 = j;

	for (int i = 0; i < size2; i++) {
		for (int q = i; q < size2; q++) {
			if (Y[i] > Y[q]) {
				swap(Y[i], Y[q]);
			}
		}
	}

	return Y;
}

void mas_print(int* mas, int size) {
	for (int i = 0; i < size; i++) {
		cout << mas[i] << " ";
	}
	cout << endl;
}

int main() {
	const int size1 = 10;
	int size2 = 0;
	int N;
	cin >> N;

	int* mas = mas_creation(size1);
	mas_init(mas, size1);
	mas_print(mas, size1);
	int* masY = mas_Y(mas, size1, N, size2);
	mas_print(masY, size2);

}