/*
	Из массива Х(20), упорядоченного по неубыванию значений элементов, переписать в массив Y числа,
	исключив их повторы и добавив новое вводимое значение P так, чтобы не нарушить упорядоченность.
	Следует реализовать ввод исходного массива, вывод требуемого массива и подпрограмму реализации 
	работы с массивом в отдельных функциях, которые должны вызываться в функции main(). Выделение 
	памяти под массив производится динамически
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

void mas_increase(int* mas, int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (mas[i] < mas[j]) {
				swap(mas[i], mas[j]);
			}
		}
	}
}

int* mas_Y(int* mas, int size, int P) {
	int* Y = new int[size];
	int j = 0;
	bool flg = 1;
	for (int i = 0; i < (size - 1); i++)
	{
		
		if (mas[i] != mas[i + 1]) {
			Y[j] = mas[i];
			j++;
		}

		if (mas[i + 1] >= P && flg) {
			Y[j] = P;
			j++;
			flg = 0;
		}
	}

	Y[j] = mas[size - 1];
	j++;
	
	if (mas[size - 1] < P) {
		Y[j] = P; 
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
	int P;
	cin >> P;

	int* mas = mas_creation(N);
	mas_init(mas, N);
	mas_print(mas, N);

	mas_increase(mas, N);
	mas_print(mas, N);

	int* Y = mas_Y(mas, N, P);
	mas_print(Y, N);

	system("pause");

}