// Ex1.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include<time.h>
using namespace std;
/* Сортировка с выбором минимального элемента
	на шаге выбирается минимальный элемент 
	и ставится в крайнюю левую позицию */
# define N 10
void prnt(int m[],int n);
void sort1(int m[],int n){
	
	for(int i=0;i<n;i++){
		// Выбирается минимальный элемент в массиве
		int imin = i;
		for(int j=i+1;j<n;j++){
			if(m[imin]>m[j])imin=j;
		}
		if(imin!=i){
			// Минимальный элемент устанавливается
			// в крайнюю левую позицию
			int a=m[i]; m[i]=m[imin]; m[imin]=a;
		}
		//prnt(m,n);
		//system("pause");
	}
}
void main(){
	int mas[N],nms=N;
	srand((int)time(NULL));
	for(int i=0;i<N;i++){
		mas[i]=(int)rand()%10;
	}
	prnt(mas,nms);
	cout<<endl;
	sort1(mas,nms);
	prnt(mas,nms);
	system("pause");
}
void prnt(int m[],int n){
	// Функция распечатки массива
	for(int i=0; i<n; i++)
		cout<<m[i]<<"\t";
	cout<<endl;
}

    


