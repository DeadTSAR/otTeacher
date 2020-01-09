// lab31.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	setlocale(0,"Rus");
	int N;
	cout<<"Введите число: ";
	cin>>N;
	/*while (pow(2.0,i)<=N) i++;
	if (pow(2.0,i)-N<N-pow(2.0,i-1)) cout<<"Ближайшая степень двойки= "<<i<<endl;
	else if (pow(2.0,i)-N>N-pow(2.0,i-1)) cout<<"Ближайшая степень двойки= "<<i-1<<endl;
	else cout<<"Ближайшие степени двойки= "<<i-1<<" и "<<i<<endl;*/

	for (int j=2; j<=5;j++) {
		if (j==4) continue;
    int i=0;
    while (pow(double(j),i)<=N) i++;
	if (pow(double(j),i)-N<N-pow(double(j),i-1)) cout<<"Ближайшая степень "<<j<<"-ки= "<<i<<endl;
	else if (pow(double(j),i)-N>N-pow(double(j),i-1)) cout<<"Ближайшая степень "<<j<<"-ки= "<<i-1<<endl;
	else cout<<"Ближайшие степени "<<j<<"-ки= "<<i-1<<" и "<<i<<endl;
	}
	system("pause");
	return 0;
}

