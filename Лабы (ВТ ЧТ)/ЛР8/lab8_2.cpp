// lab 6_2.cpp: определ€ет точку входа дл€ консольного приложени€.
//


#include <iostream>
using namespace std;
float a, b, sum, pr;//глобальные переменные
void fun();//объ€вление функции
int main()
{
  setlocale (LC_ALL, "Rus");
  cout<<"¬ведите первое число ";
  cin>>a;
  cout<<"¬ведите второе число ";
  cin>>b;
  fun();
  cout<<"sum= "<<sum<<endl;
  cout<<"proizvedenie= "<<pr<<endl;
 system("pause");
}

void fun()//определение функции
{
sum=a+b;
pr=a*b;
 }
