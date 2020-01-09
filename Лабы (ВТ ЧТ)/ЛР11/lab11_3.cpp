// пример использование шаблона функции

#include "stdio.h"
#include "conio.h"
//#include "math.h"
#include <iostream>
using namespace std;
//Функция определяет ссылку на элемент с максимальным значением
template <class type>
type& rmax(int n, type d[])
{
	int im=0;
	for (int i=1; i<n; i++)
		im=d[im]>d[i] ? im : i;
	return d[im];
}

int main()
{ int n=4; 
int x[]={10, 20, 30, 14};
//Аргумент - целочисленный массив:
cout<<"\nrmax(n,x)="<< rmax(n,x);
rmax(n,x)=0; //обращение с целочисленным массивом
for (int i=0; i<n;i++)
	cout<<"\tx["<<i<<"]= "<<x[i];
float arx[]={10.3, 20.4, 10.5};
//аргумент - массив float 
cout<<"\nrmax(3,arx)="<<rmax(3,arx);
rmax(3,arx)=0;
for (int i=0;i<3;i++) 
	cout<<"\tarx["<<i<<"]= "<<arx[i];
  _getch();
  return 0;
}
