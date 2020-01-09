// Ex3.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include<time.h>
using namespace std;
/* Обменная сортировка
Если для двух последовательных элементов нарушено 
соотношение, то они меняются местами 
*/
# define N 10
void prnt(int m[],int n);
void sort3(int m[],int n){
	for(int i=0,nj=n-1;i<n;i++){
		bool flag=true;
	    int last=0; // Последний из элементов, который участвовал в перестановке
		for(int j=0; j<nj; j++){
			if(m[j]>m[j+1]){
				flag=false;
				int a=m[j]; m[j]=m[j+1]; m[j+1]=a; last=j;
			}
		}
		prnt(m,n);
		if(flag)break;
		system("pause");
		// Следующий проход будет произведён до места последнего обмена
		nj=last;
	}
}

void ma22in(){
	int mas[N],nms=N;
	srand((int)time(0));
	for(int i=0;i<N;i++){
		mas[i]=(int)rand()%1000;
	}
	prnt(mas,nms);
	cout<<endl;
	sort3(mas,nms);
	cout<<"Sort ended"<<endl;
	prnt(mas,nms);
	system("pause");
}
void prnt(int m[],int n){
	// Функция распечатки массива
	for(int i=0; i<n; i++)
		cout<<m[i]<<"\t";
	cout<<endl;
}

    


