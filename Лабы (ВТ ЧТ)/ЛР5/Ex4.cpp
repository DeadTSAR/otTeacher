//#include "stdafx.h"
#include<iostream>
#include "time.h"
using namespace std;

#define N 50
void test1(int mas[],int n){
	// Проверка правильности сортировки
	int x=mas[0];
	for(int i=1;i<n;i++){
		if(x>mas[i]){
			cout<<"*** test1 error"<<endl;
			return;
		}
		x=mas[i];
	}
	cout<<"*** test1 OK"<<endl;
}
double check_sum(int mas[],int n){
	// Контрольная сумма
	double d=0;
	for(int i=0;i<n;i++){
		d+=(double)mas[i];
	}
	return d;
}

// Библиотечная функция сортировки
int cmp(const void *p1,const void *p2){
	int i1=*(int*)p1;
	int i2=*(int*)p2;
	return i1<i2 ? -1:(i1==i2 ? 0:1);
}
void qsort(int m[],int n){
	cout<<"The library function"<<endl;
	qsort(m,n,sizeof(int),&cmp);
}


void ma43in(){
	int tstart,tfinish;
	int mas[N];
	srand((int)time(0));
	for(int i=0;i<N;i++) {
		mas[i]=rand()%100;
		cout<<mas[i]<<" ";
	}
	cout<<endl;
	double d1=check_sum(mas,N),d2;

	// Сортировка 
	tstart=clock();
	qsort(mas,N);

	 
	tfinish=clock();


	for(int i=0;i<N;i++){
			cout<<mas[i]<<" ";
		}
	cout<<endl;
	// Распечатываем время сортировки
	cout<<"Time="<<(double)(tfinish-tstart)/1000<<" sec"<<endl;
	test1(mas,N-1);
	d2=check_sum(mas,N);
	if(d1==d2)cout<<"*** test2 OK"<<endl;
	else cout<<"*** test2 errore"<<endl;
	system("pause");
}


    



