#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
setlocale (LC_ALL, "RUS");
int i, n;
double a;
//описывает поток для записи данных в файл
ofstream f;
//открываем файл в режиме записи,
//режим ios::out устанавливается по умолчанию
f.open("D:\\accounts.txt", ios::out);
//вводим количество вещественных чисел
cout<<"n="; cin>>n;
//цикл для ввода вещественных чисел
//и записи их в файл
for (i=0; i<n; i++)
{
cout<<"a=";
//ввод числа
cin>>a;
f<<a<<"\t";
}
//закрытие потока
f.close();
system("pause");
return 0;
}
