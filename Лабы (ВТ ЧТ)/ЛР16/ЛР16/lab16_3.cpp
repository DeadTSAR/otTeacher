#include "stdafx.h"
#include<iostream>
#include<time.h>
using namespace std;
/* Программа для обображения текстов в файл
Генерируются числа, переводятся в текстовый формат
и пишутся в файл
*/

void main(){
	srand((int)time(0));
	FILE *f;
	// Создаём выходной, текстовый файл
	f=fopen("text.txt","w");
	int n;
	char s[32];
	for(int i=0; i<100000; i++){
		n=rand();	// Получаем случайное число	
		itoa(n,s,10); // и переводим его в текстовый формат

		fputs(s,f); // Записываем текст в файл
		fputc('\n',f); // Записываем разделитель
	}
	fclose(f); // Закрываем файл
	cout<<"Game Over!\n";
}