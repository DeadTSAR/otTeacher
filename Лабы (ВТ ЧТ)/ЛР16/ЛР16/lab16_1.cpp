#include "stdafx.h"
#include<iostream>

using namespace std;
/* Создаём текстовый файл
и выводим туда заданное число слов
*/

void main(){
	FILE *f=fopen("hello.txt","w");
	char bufer[256];
	if(f)
	{
		for(int i=0; i<5; i++)
		{
			cout<<"Enter the word\n";
			cin>>bufer; // Читаем слово с клавиатуры
			fputs(bufer,f); // Выводим в файл слово
			fputc('\n',f); // Выводим межстрочный разделитель
		}
	}
	fclose(f);
}