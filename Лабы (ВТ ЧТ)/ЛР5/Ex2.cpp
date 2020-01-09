// Ex3.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include<time.h>
using namespace std;
/* Сортировка методом пузырька
	на шаге очередной элемент устанавливается
	таким образом, чтобы слева всегда оставался
	отсортированный массив 
*/
# define N 10
void prnt(int m[],int n);
void sort2(int m[],int n){	
	// Сортировка методом пузырька
	for(int i=1;i<n;i++){
		int a=m[i];
		for(int j=i;j>=0;j--){
			if(j==0){m[0]=a; break;}
			if(m[j-1]>a){m[j]=m[j-1];}
			else {m[j]=a; break;}
		}
		//prnt(m,n);
		//system("pause");
	}
}

void m11ain(){
	int mas[N],nms=N;
	srand((int)time(NULL));
	for(int i=0;i<N;i++){
		mas[i]=(int)rand()%1000;
	}
	prnt(mas,nms);
	cout<<endl;
	sort2(mas,nms);
	prnt(mas,nms);
	system("pause");
}
void prnt(int m[],int n){
	// Функция распечатки массива
	for(int i=0; i<n; i++)
		cout<<m[i]<<"\t";
	cout<<endl;
}

    


