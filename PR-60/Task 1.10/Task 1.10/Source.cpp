/*
	Поместить положительные элементы массива X в начало массива Y, а следом – его отрицательные элементы.
	Следует реализовать ввод исходного массива, вывод требуемого массива и подпрограмму реализации работы
	с массивом в отдельных функциях, которые должны вызываться в функции main(). Выделение памяти под 
	массив производится динамически
*/

#include <iostream>
#include <time.h>

using namespace std;

int* mas_creation(int size) {
	return new int[size];
}

void mas_init(int* mas, int size) {
	for (int i = 0; i < size; i++)
	{
		mas[i] = rand() % 20 - 10;
	}
}


int* mas_Y(int* mas, int size) {
	int* Y = new int[size];
	int j = 0;
	for (int i = 0; i < size; i++)
	{
		if (mas[i] > 0) {
			Y[j] = mas[i];
			j++;
		}
	}
	for (int i = 0; i < size; i++)
	{
		if (mas[i] < 0) {
			Y[j] = mas[i];
			j++;
		}
	}
	return Y;
}

void mas_print(int* mas, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}

int main() {

	srand(time(NULL));
	const int N = 20;

	int* mas = mas_creation(N);
	mas_init(mas, N);
	mas_print(mas, N);

	int* Y = mas_Y(mas, N);
	mas_print(Y, N);

	system("pause");

}