/*
 * 2.	Составить программу, которая в матрице A(m,n), m?10, n?12, меняет местами строку, содержащую максимальный
 * элемент со строкой, содержащей минимальный элемент. Предполагается, что искомые элементы единственные.
 * Вывести исходную и преобразованную матрицы, минимальный и максимальный элементы, а также номера строк, в которых
 * они расположены. Если минимальный и максимальный элементы расположены в одной строке, то поменять местами столбцы,
 * содержащие эти элементы. Следует реализовать ввод исходного массива, вывод требуемого массива и подпрограмму
 * реализации работы с массивом в отдельных функциях, которые должны вызываться в функции main(). Выделение памяти под
 * матрицу производится динамически
 * */


#include <iostream>
#include <time.h>
#include <random>

using namespace std;

int ** mas_creation(int N, int M){
    int ** mas;
    mas = new int * [N];
    for (int i = 0; i < N; i++) {
        mas[i] = new int[M];
    }
    return mas;
}

void mas_init(int ** mas, int N, int M){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            mas[i][j] = 1 + rand() % 1000 ;
        }
    }
}

void find_min(int ** mas, int N, int M, int & min_element, int & min_str, int & min_colum){
    min_element = mas[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if(min_element > mas[i][j]){
                min_element = mas[i][j];
                min_str = i;
                min_colum = j;
            }
        }
    }
}

void find_max(int ** mas, int N, int M, int & max_element, int & max_str, int & max_colum){
    max_element = mas[0][0];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if(max_element < mas[i][j]){
                max_element = mas[i][j];
                max_str = i;
                max_colum = j;
            }
        }
    }
}

void change_mas(int ** mas, int & min_str, int & max_str, int & min_colum, int & max_colum, int N){
    if(min_str == max_str){
        for (int i = 0; i < N; i++) {
            int current = mas[i][max_colum];
            mas[i][max_colum] = mas[i][min_colum];
            mas[i][min_colum] = current;
        }
    }
    else {
        int *min = mas[min_str];
        mas[min_str] = mas[max_str];
        mas[max_str] = min;
    }
}

void mas_print(int ** mas, int N, int M){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << mas[i][j] << "\t";
        }
        cout << endl;

    }

}

int main() {

    srand(time(NULL));

    const int N = 10;
    const int M = 12;

    int min_element;
    int min_str;
    int min_colum;
    int max_element;
    int max_str;
    int max_colum;


    int ** mas = mas_creation(N, M);
    mas_print(mas, N, M);
    cout << endl;

    mas_init(mas, N, M);
    mas_print(mas, N, M);
    cout << endl;

    find_min(mas, N, M, min_element, min_str, min_colum);
    cout <<"min_element " << min_element << " min_str " << min_str;
    cout << endl;

    find_max(mas, N, M, max_element, max_str, max_colum);
    cout <<"max_element " << max_element << " max_str " << max_str;
    cout << endl;

    cout << endl;

    change_mas(mas, min_str, max_str, min_colum, max_colum, N);
    mas_print(mas, N, M);
    cout << endl;


    return 0;
}