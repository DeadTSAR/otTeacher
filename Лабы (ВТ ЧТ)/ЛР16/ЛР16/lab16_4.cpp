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
	cout<<"\n������� ������ - "<<endl; 
	gets(a); 
//���� � ���������� ����� � ������ �� � ����,  
//���� �� ����� ������������� ������ 
	while (strcmp(a,c)!=0)//strlen(a)>0 
	{ 
		strcat(a,"\n");/////
		fputs(a,f); 
		cout<<"������� ������ - ";
		gets(a); 
	} 
	fclose(f); 

//����� ����������� ������� ����� 
	f=fopen("f1.txt","r");
	cout<<"���������� �����:\n";
	while (fgets(a,10,f)>0) 
		cout<<a<<' ';
	rewind(f); 
//������������ ������� ����� 
	f1=fopen("f2.txt","w+"); 
	while (fgets(a,10,f)!=NULL) //���� ��������� ����� ������� ����� 
	{ 
		flag=1; //������� ������� ��������� ������ �� ������ ����� - 0 
		rewind(f1); 
		while (fgets(b,10,f1)!= NULL && flag) 
		{// ���� ������ ����� �� ������� ����� � ���������
		 // ��������� ������ �� ������� �� ������� ����� 
			if (strcmp(a,b)==0) 
				flag=0; 
		} 
		if (flag) //�������� ������ �� ������ ���� 
			fputs(a,f1); 
	} 
	fclose(f);fclose(f1); 
	f1=fopen("f2.txt","r"); 
	cout<<"\n sodershimoe file2 \n"; 
	while (fgets(a,10,f1)!=NULL) 
		cout<<a<<' ';
	getch(); 
} 
