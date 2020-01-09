#include "stdafx.h" 
#include "stdio.h" 
#include "conio.h" 
#include <string.h> 
#include <iostream>
using namespace std;

void main() 
{ 
	setlocale(0,"");
	FILE *f, *f1; 
	char a[10],b[10],c[10]={""}; 
	int flag;
	f=fopen("f1.txt","w"); 
	cout<<"\nВведите строку - "<<endl; 
	gets(a); 
//Ввод с клавиатуры строк и запись их в файл,  
//пока не будет введенапустая строка 
	while (strcmp(a,c)!=0)//strlen(a)>0 
	{ 
		strcat(a,"\n");/////
		fputs(a,f); 
		cout<<"Введите строку - ";
		gets(a); 
	} 
	fclose(f); 

//Вывод содержимого первого файла 
	f=fopen("f1.txt","r");
	cout<<"Содержимое файла:\n";
	while (fgets(a,10,f)>0) 
		cout<<a<<' ';
	rewind(f); 
//Формирование второго файла 
	f1=fopen("f2.txt","w+"); 
	while (fgets(a,10,f)!=NULL) //цикл просмотра строк первого файла 
	{ 
		flag=1; //признак наличия считанной строки во втором файле - 0 
		rewind(f1); 
		while (fgets(b,10,f1)!= NULL && flag) 
		{// цикл чтения строк из второго файла и сравнения
		 // считанной строки со строкой из первого файла 
			if (strcmp(a,b)==0) 
				flag=0; 
		} 
		if (flag) //записать строку во второй файл 
			fputs(a,f1); 
	} 
	fclose(f);fclose(f1); 
	f1=fopen("f2.txt","r"); 
	cout<<"\n sodershimoe file2 \n"; 
	while (fgets(a,10,f1)!=NULL) 
		cout<<a<<' ';
	getch(); 
} 
