/*    
	Составить программу упорядочения по возрастанию первых N, N≤12, элементов массива X методом
сортировки вставками. Следует реализовать ввод исходного массива, вывод требуемого массива и 
подпрограмму реализации работы с массивом в отдельных функциях, которые должны вызываться в функции
main(). Выделение памяти под массив производится динамически 
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
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j > 0 && mas[j-1] > mas[j]; j--)
		{
			swap(mas[j - 1], mas[j]);
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
	const int N = 30;
	int M = 12;

	int* mas = new int[N];
	mas_init(mas, N);
	mas_print(mas, N);
	mas_sort(mas, M);
	mas_print(mas, N);

}