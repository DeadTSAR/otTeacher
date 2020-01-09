// Ex4.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include<time.h>
using namespace std;
/* Активный поиск в отсортированном массиве
*/
# define N 10
void prnt(int m[],int n);
void sort5(int m[],int n);
int search(int m[],int n,int x){
	// Активный поиск числа в отсортированном массиве
	// Нужно найти число х
	int a=0, b=n-1, c;
	// Цикл поиска
	while(a<=b){
		c=(a+b)/2;
		if(m[c]==x)return c;
		// Перенос границы
		if(m[c]>x)b=c-1;
		else a=c+1;
	}
	return -1;
}

int main(){
	int mas[N],nms=N;
	srand((int)time(0));
	for(int i=0;i<N;i++){
		mas[i]=(int)rand()%1000;
	}
	sort5(mas,nms);
	prnt(mas,nms);
	int n;
	do{
		cout<<"Number=";
		cin>>n;
		int x=search(mas, nms, n);
		if(x>=0) cout<<"Index = "<<x<<endl;
		else cout<<"Number not found\n";
	}while(n);
}
void prnt(int m[],int n){
	// Функция распечатки массива
	for(int i=0; i<n; i++)
		cout<<m[i]<<"\t";
	cout<<endl;
}
void sort5(int m[],int n){	
	// Сортировка методом пузырька
	for(int i=1;i<n;i++){
		int a=m[i];
		for(int j=i;j>=0;j--){
			if(j==0){m[0]=a; break;}
			if(m[j-1]>a){m[j]=m[j-1];}
			else {m[j]=a; break;}
		}
	}
}
    


