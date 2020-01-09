
#include "conio.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale (0,"");
	int m,n,i,j;
	float **a, *p, **pp,*pt;
	cout<< "Введите количество строк и столбцов: ";
	cin>>m>>n;
	a=new float*[m];
	for (i=0;i<m;i++)
		a[i]=new float[n];
	//вычисление элементов матрицы
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			a[i][j]=(i+1)*(j+1);
	//вывод матрицы:
	cout<<"Вывод матрицы 1:"<<endl;
	//c использованием индексов
	for (i=0;i<m;i++)
	{
		for (j=0;j<n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	//с использование адресов со смещением
	cout<<"Вывод матрицы 2:"<<endl;
	for (i=0;i<m;i++)
	{  
		for (j=0;j<n;j++)
			cout<<*(*(a+i)+j)<<" ";
		printf("\n");
	}
	//с использование указателя на текущую строку
	cout<<"Вывод матрицы 3:"<<endl;
	for (i=0;i<m;i++)
	{  
		p=*(a+i);//или p=a[i]+j;
		for (j=0;j<n;j++)
			cout<<*(p+j)<<" ";
		printf("\n");
	}
//с использованием указателя на текущую строку и указателя на текущий элемент
	cout<<"Вывод матрицы 4:"<<endl;
	for (pp=a;pp<a+m;pp++)
	{  
		for (pt=*pp;pt<*pp+n;pt++)
			cout<<*pt<<" ";
		printf("\n");
	}
	for (i=0;i<m;i++)
		delete []a[i];
	delete []a;
	getch();

	return 0;
}

