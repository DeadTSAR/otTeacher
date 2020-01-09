#include "stdafx.h" 
#include "stdio.h" 
#include "conio.h" 
#include <string.h> 
#include <iostream>
using namespace std;

void wwod(char *path,char *regim) 
{//функция записи произвольных строк в исходный файл
	FILE *f; char fam[81]; 
	f=fopen(path,regim); 
	printf("\nwwedite stroku - "); 
	gets(fam); 
	while (strcmp(fam,"")!=0) 
	{ 
		fputs(fam,f); 
		fputs("\n",f); 
		printf("\nwwedite stroku - "); 
		gets(fam); 
	} 
	fclose(f); 
} 
 
void wiwod(char *path,char *regim) 
{//функция просмотра содержимого файла
	FILE *f; char fam[81]; 
	f=fopen(path,regim); 
	while(fgets(fam,80,f)!=NULL) 
	{ 
		printf("%s",fam); 
	} ; 
	fclose(f); 
} 
 
void sortirovka(char *path) 
{//функция сортировки
	FILE *f, *fd,*fr; 
	int i,k,imin,kol,j; 
	char fam[81],min[81],buf[81]; 
	f=fopen(path,"r"); 
	kol=0; 
	fr=fopen("res","w"); 
	//цикл определения объема исходного файла (количества строк) 
	while(fgets(fam,80,f)!=NULL) 
		kol++; 
	k=kol; 
	fclose(f); 
	cout<<"\nКоличество строк в файле = ";printf("%d",kol);
	for (i=1;i<=kol;i++) //цикл сортировки файла 
	{ 
		f=fopen(path,"r"); 
		fgets(min,80,f); 
		imin=1; 
		for (j=2;j<=k;j++) //поиск минимальной строки в файле 
		{
			fgets(fam,80,f); 
			if (strcmp(fam,min)<0) 
			{ 
				strcpy(min,fam); 
					imin=j; 
			} 
		} 
		fputs(min,fr);//запись минимальной строки в результирующий файд 
		//перепись содержимого исходного файла в дополнительный файл (без 
		//минимальной строки 
		fd=fopen("dop","w"); 
		rewind(f); 
		//перепись всех строк, расположенных до минимальной строки 
		for (j=1;j<imin;j++) 
		{
			fgets(buf,80,f); 
			fputs(buf,fd); 
		} 
		fgets(buf,80,f);//пропуск минимальной строки 
		// перепись всех строк, расположенных после минимальной строки 
		for (j=imin+1;j<=k;j++) 
		{
			fgets(buf,80,f); 
			fputs(buf,fd); 
		} 
		fclose(f); 
		fclose(fd); 
		//уничтожение исходного файла 
		remove(path); 
		//переименование дополнительного файла 
		rename("dop",path); 
		k--; 
	} 
	fclose(fr); 
	fclose(f); 
	//уничтожение исходного файла 
		cout<<"\nУничтожение исходного файла";
	//переименование полученного файла 
		cout<<"Переименование полученного файла";
	rename("res",path); 
} 

void main() 
{
	setlocale(0,"");
	char ch,path[20],rech[20]; 
	do 
	{ 
		cout<<"\n Меню";
		cout<<"0. Ввод имени файла";
		cout<<"1. WWOD Ввод данных в файл";
		cout<<"2. WIWOD Вывод данных из файла";
		cout<<"3. sortirovka Сортировка данных ";
		cout<<"4. Выход";
		ch=getch(); 
		switch (ch)
		{ 
			case '0':	cout<<"Введите именя файла";
//						printf("wwedite imja file - \n"); 
						gets(path); 
						cout<<"КОНТРОЛЬНЫЙ ВЫВОД";
						printf("\n%s",path);break; 
			case '1':	wwod(path,"w"); break; 
			case '2':	wiwod(path,"r"); break; 
			case '3':	sortirovka(path);break; 
		} 
	}while(ch!='4'); 
} 
