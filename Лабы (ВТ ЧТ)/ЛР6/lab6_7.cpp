// lab 9.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
/* Распечатываем  значение указателя,
содержимое переменной и квадрат переменной
*/
void main(){
	int *k, n;
	do{
		cout<<"Enter the number of\n";
		cin>>n;
		k=&n; // Присваиваем указателю адреса переменной
		cout<<"Address: "<<k<<"\tValue: "<<*k<<"\tSquare: "<<(*k)*(*k)<<endl; // Распечатываем значение указателя 
												// и его содержимое
	}while(*k);
}
