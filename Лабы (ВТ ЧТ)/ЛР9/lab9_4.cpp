// lab7.cpp: определяет точку входа для консольного приложения.
//Перегружаемые функции
//


#include <iostream>
using namespace std;


 float divide(float a,float b);
 int divide(int a,int b);
int main()
{  
	setlocale(LC_ALL, "Rus");
	float a,b,c;
    int k,l,m;
	 cout<<"Введите два числа float"<<endl;
	cin>>a>>b; 
    c= divide(a,b);
   cout<<"Введите два числа int"<<endl; 
	cin>>k,l;
    m=divide(k,l);
	cout<<"c= "<<c<<" m= "<<m<<endl;
    system("pause");
	return 0;
}
float divide(float a,float b)
{
  return a/b;
}
int divide(int a,int b)
 {
   return a/b;
 }




 
