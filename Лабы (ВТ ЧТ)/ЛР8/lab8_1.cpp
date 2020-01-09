// lab6_1.cpp: определяет точку входа для консольного приложения.
//


#include <iostream>
using namespace std;


int mod5(int k, int m);//объявление функции
int main()
{ int a,b;
  setlocale (LC_ALL, "Rus");
  cout<<"Введите первое число ";
  cin>>a;
  cout<<"Введите второе число ";
  cin>>b;
  cout<<"Наименьшее из чисел, кратное 5 = "<<mod5(a,b)<<endl;
  system("pause");
  return 0;
}

int mod5(int k, int m)//определение функции
// k,m - формальные параметры
{
if (k%5==0) 
return k;
 	else 
if(m%5==0) 
return m; 
else 
return -1;
 }
