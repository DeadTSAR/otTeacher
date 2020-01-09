// lab7.cpp: определяет точку входа для консольного приложения.
// передача в подпрограмму в качестве параметра имени функции
//

#include <iostream>
using namespace std;
#include <math.h>

typedef float (*pf)(float);
float f1(float x);
float f2(float x);
float f3(float x);
float sum(int n,float *a,pf f);
int main()
{
	setlocale(LC_ALL, "Rus");
	const int nn=30;
  float a[nn],z;
  int n;
  cout<<"Введите количество элементов: "<<endl;
 cin>>n;
 cout<<"Введите элементы: "<<endl;
  for (int i=0;i<n;i++)
	  cin>>a[i];
  z=(sum(n,a,f1)+sum(n,a,f2))/sum(n,a,f3);
  cout<<"summa= "<<z<<endl;
  //system("pause");
	return 0;
}

float f1(float x)
{return (sin(x+1.0));
}
float f2(float x)
{return (exp(x/2.0));
}
float f3(float x)
{return (log(x+2.0));
}
float sum(int n,float *a,pf f)
{float s;
 s=0;
 for (int i=0;i<n;i++)
	 s+=f(a[i]);
 return s;
}



















