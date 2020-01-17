// Demo.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
#include<time.h>
using namespace std;
/* Заготовка для отладки программы сортировки
*/
# define N 10
void prnt(int m[],int n);
void sort(int m[],int n);
void ma12in(){
	int mas[N];
	srand((int)time(NULL));
	for(int i=0;i<N;i++){
		mas[i]=(int)rand()%1000;
	}
	prnt(mas,N);
	system("pause");
}
void prnt(int m[],int n){
	// Функция распечатки массива
	for(int i=0; i<n; i++)
		cout<<m[i]<<"\t";
	cout<<endl;
}

    


