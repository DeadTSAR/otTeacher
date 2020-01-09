#include "stdafx.h" 
#include "stdio.h" 
#include "conio.h" 
#include <string.h> 
#include <iostream>
using namespace std;

typedef struct 
{
	char 
		nom[5],
		grup[9],
		fam[13];
	int 
		oc[3]; 
	float sr;
}st; 
void wwod(char *path,char *regim) 
{//функция ввода данных в файл 
	FILE *f; 
	char nom[5],grup[9],fam[13]; 
	int oc[3],i; 
	float sr; 
	f=fopen(path,regim); 
	cout<<"\nВведите номер студента - ";
	scanf("%s",nom); 
	while (strcmp(nom,"")!=0) 
	{ 
		cout<<"Введите номер группы - ";
		scanf("%s",grup); 
		cout<<"Введите фамилию - ";
		scanf("%s",fam); 
		cout<<"Введите три оценки - ";
		for (i=0;i<3;i++) 
			scanf("%d",&oc[i]); 
		fprintf(f,"%4s%8s%12s",nom,grup,fam); 
		for (i=0;i<3;i++) 
			fprintf(f,"%3d",oc[i]); 
		sr=(float)(oc[0]+oc[1]+oc[2])/3; 
		fprintf(f,"%5.2f",sr); 
		fprintf(f,"\n"); 
		cout<<"\nВведите номер студента - ";
		gets(nom); gets(nom); 
	} 
	fclose(f); 
} 
void wiwod(char *path,char *regim) 
{//функция просмотра содержимого файла 
	FILE *f; 
	char nom[5],grup[9],fam[13],buf[80]; 
	int oc[3],i; 
	f=fopen(path,regim); 
	while(fgets(buf,79,f)!=NULL) 
		printf("%s",buf); 
	fclose(f); 
} 
void sortirovka(char *path) 
{//функция заполнения массива данными файла с одновременной  
 //сортировкой по фамилиям в порядке, обратном алфавитному 
	FILE *f; 
	st stud, *s; 
	int i,k=0,j,l; 
	bool flag; 
	f=fopen(path,"r"); 
	s=(st *)malloc(0); 
	cout<<"\n ischodnij file\n"; 
	while(!feof(f)) 
	{ 
		fscanf(f,"%4s%8s%12s",stud.nom,stud.grup,stud.fam); 
		for (i=0;i<3;i++) 
		fscanf(f,"%d",&stud.oc[i]); 
		fscanf(f,"%f",&stud.sr); 
		fscanf(f,"\n"); 
		printf("%4s %8s %12s %3d%3d%3d %5.2f\n"
			,stud.nom,stud.grup,stud.fam,stud.oc[0]
			,stud.oc[1],stud.oc[2],stud.sr); 
		flag=true; 
		j=0; 
		//цикл поиска места вставки в массив структуры, считанной из файла 
		while (flag&&j<k) 
		{
			if (strcmp(s[j].fam,stud.fam)<0) 
				flag=false; 
			else 
				j++;
		} 
		k++; 
		s=(st *)realloc(s,k*sizeof(st));//выделение памяти 
		for (l=k-1;l>j;l--)//цикл сдвига элементов массива перед вставкойи 
			s[l]=s[l-1]; 
		s[j]=stud; //вставка элемента на освободившееся место 
	} 
	cout<<"\notsortirowannij massiw\n"; 
	for (i=0;i<k;i++) 
	printf("%4s %8s %12s %3d%3d%3d%5.2f\n"
		,s[i].nom,s[i].grup,s[i].fam,s[i].oc[0]
		,s[i].oc[1],s[i].oc[2],s[i].sr); 
	fclose(f); 
	f=fopen(path,"w"); 
	for (i=0;i<k;i++) 
		fprintf(f,"%4s%8s%12s%3d%3d%3d%5.2f\n"
			,s[i].nom,s[i].grup,s[i].fam,s[i]
			.oc[0],s[i].oc[1],s[i].oc[2],s[i].sr); 
	fclose(f); 
} 
void tri(char *path) 
{//функция поиска трех худших студентов по среднему баллу 
	FILE *f; 
	st stud, *s; 
	int i,k=0,j,l; 
	bool flag; 
	char gr[9]; 
	f=fopen(path,"r"); 
	s=(st *)malloc(0); 
	//цикл чтения содержимого файла 
	while(fgets(stud.nom,5,f)!= NULL) 
	{ 
		fscanf(f,"%s%s",stud.grup,stud.fam); 
		for (i=0;i<3;i++) 
			fscanf(f,"%d",&stud.oc[i]);
		fscanf(f,"%f\n",&stud.sr); 
		flag=true; 
		j=0; 
		// цикл поиска места в массиве для вставки считанного элемента 
		while (flag&&j<k) 
			if (s[j].sr>stud.sr) 
				flag=false; 
			else 
				j++;
		k++; 
		s=(st *)realloc(s,k*sizeof(st)); 
		for (l=k-1;l>j;l--) //цикл переписи элементов массива для  
			s[l]=s[l-1];	//освобождения места для нового элемента 
			 
		s[j]=stud; //запись в массив нового элемента 
	} 
	//запись в файл с именем temp трех худших студентов
	//или всех, если их меньше трех 
	f=fopen("temp","w"); 
	if (k>3) k=3; 
	for (i=0;i<k;i++) 
	{ 
		fprintf(f,"%4s%8s%12s%3d%3d%3d%5.2f\n"
			,s[i].nom,s[i].grup,s[i].fam,s[i].oc[0]
			,s[i].oc[1],s[i].oc[2],s[i].sr); 
	} 
	fclose(f); 
} 

void main() 
{
	setlocale(0,"");
	char ch,path[20]; 
	do 
	{ 
		cout<<"Введите имя файла - "; 
		scanf("%s",path); 
		printf("\n%s",path); 
		cout<<"\n\n Меню";
		cout<<"\n1. WWOD Ввод данных в файл";
		cout<<"\n2. WIWOD Вывод данных из файла";
		cout<<"\n3. sortirovka Сортировка данных ";
	    cout<<"\n4. tri Запись в файл temp трёх худших";
		cout<<"\n5. Выход";
		ch=getch(); 
		switch (ch)
		{ 
			case '1': wwod(path,"w"); break; 
			case '2': wiwod(path,"r"); break; 
			case '3': sortirovka(path);break; 
			case '4': tri(path);break; 
		} 
	}while(ch!='5');  
} 
