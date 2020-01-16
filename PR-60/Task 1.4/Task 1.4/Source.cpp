/*
	Составить программу, которая в каждой строке матрицы G(m,n), m?10, n?12 находит сумму элементов, 
	расположенных до максимального элемента и после максимального элемента. Если сумма не может быть
	вычислена (нет элементов до или после максимального элемента), то считать ее равной нулю. Вывести 
	исходную матрицу, располагая в одной строке элементы строки матрицы, после которых вывести номер 
	столбца максимального элемента и найденные суммы. Следует реализовать ввод исходного массива, 
	вывод требуемого массива и подпрограмму реализации работы с массивом в отдельных функциях, 
	которые должны вызываться в функции main(). Выделение памяти под матрицу производится динамически
*/

#include <iostream>
#include <time.h>
using namespace std;

int** creat_mas(int N, int M) {
    int** mas;
    mas = new int* [N];
    for  ( int i = 0;  i < N;  i++)
    {
        mas[i] = new int[M];
    }
    return mas;
}

void mas_init(int** mas, int N, int M) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            mas[i][j] = rand() % 20 - 10;
        }
    }
}

int* max_elem_in_str(int** mas, int str, int M) {
    int* mas_max = new int[2];
    int max = INT_MIN;
    for (int i = 0; i < M; i++){
        if (mas[str][i] > max) {
            mas_max[0] = i + 1;
            max = mas[str][i];
            mas_max[1] = max;
        }
    }
    return mas_max;
}

void sum(int** mas, int str, int M) {
    int sumMas[2] = {0, 0};
    int current_sum = 0;
    int index = 0;
    int* mas_max = max_elem_in_str(mas, str, M);

    for (int i = 0; i < M; i++) {
        if(mas_max[1] == mas[str][i]){
            index = 1;
            sumMas[index] = current_sum;
            current_sum = 0;
            continue;
        }
        current_sum += mas[str][i];
        sumMas[index] = current_sum;
    }

    cout << sumMas[0] << "\t\t" << sumMas[1];

}

void mas_print_or(int** mas, int N, int M) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << mas[i][j] << "\t";
        }
        cout << endl;
    }
}


void mas_print(int** mas, int N, int M) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << mas[i][j] << "\t";
        }
        int* mas_max = max_elem_in_str(mas, i, M);
        cout <<"index " << mas_max[0] << "\t\t" << "max " << mas_max[1] << "\t";

        sum(mas, i, M);
        cout << endl;
    }
}

int main() {
    srand(time(NULL));
    const int N = 10;
    const int M = 10;

    // Создаем и инициализируем исходный массив mas;
    int** mas = creat_mas(N, M);
    mas_init(mas, N, M);

    mas_print_or(mas, N, M);
    cout << endl;
    cout << endl;

    mas_print(mas, N, M);
    cout << endl;
}
