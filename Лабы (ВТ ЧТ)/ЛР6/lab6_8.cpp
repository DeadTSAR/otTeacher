// lab 9.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include<iostream>
#include<time.h>
using namespace std;
/* —оздание указателей в динамической пам€ти
*/
void main(){
	srand((int)time(0));
	// —оздаЄм указатели
	int *a,*b,*c;
	// ¬ыдел€ем значение указател€ в динамической пам€ти и 
	a=new int; *a=rand()%1000; // присваеваем значение переменой
	b=new int; *b=rand()%1000; // на которую ссылаетс€ указатель
	c=new int; *c=rand()%1000;
	cout<<*a<<"\t"<<*b<<"\t"<<*c<<endl;
	int d=*a + *b - *c;
	cout<<d<<endl;
	char ch; cin>>ch;
	delete a;
	delete b;
	delete c; 
}