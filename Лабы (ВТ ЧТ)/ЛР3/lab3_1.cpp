// lab2_1_3.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include "math.h"
using namespace std;


int main()
{
	setlocale(0,"Rus");
	cout<<"Введите N: ";
	int n;
	cin>>n;
	for (int i=2; i<=n;i++) 
		if (n%i==0) {cout<<"Наименьший делитель= "<<i<<endl; break; }

		cout<<"Делители числа: ";
	for (int i=1; i<=n;i++) 
		if (n%i==0) {cout<<i<<" "; }
	cout<<endl;

	int i=2;
	bool f=0;
	while (i<=sqrt(double(n))) {
		if (n%i==0) {f=1; break; }
		i++;
	}
	if (f==true)  cout<<"Не простое число"<<endl;
	else cout<<"Простое число"<<endl;
	system("pause");
	return 0;
}

