// 1.cpp: определяет точку входа для консольного приложения.
//
//  одномерный динамический массив – выделение памяти с помощью функции 
//  realloc

#include "stdlib.h"
#include <iostream>
using namespace std;

int main()
{ setlocale(LC_ALL, "Rus");
	float *a;
  int m,n;
  a=NULL;
  cout<<"Введите количество элементов массива"<<endl;
  cin>>n; 
  a=(float *)realloc(a,n*sizeof (float));
  if (!a) cout<<"Ошибка"<<endl; 
  else {
	  cout<<"Введите элементы"<<endl; 
	    for(int i=0;i<n;i++)
	        cin>>a[i];
		cout<<"Массив"<<endl;
        for(int i=0;i<n;i++)
	        cout<<a[i]<<"\t";
		cout<<"Введите новое количество элементов массива"<<endl;
		m=n;
		cin>>n;
		a=(float *)realloc(a,n*sizeof (float));
		cout<<"Введите новые элементы"<<endl;
		for (int i=m;i<n;i++)
         cin>>a[i]; 
        cout<<"Массив"<<endl; 
          for(int i=0;i<n;i++)
	       cout<<a[i]<<"\t";
  }      
  a=(float *)realloc(a,0);
 // free(a);
  system("pause");
 return 0;
 }
