#include "stdafx.h" 
#include "stdio.h" 
#include "conio.h" 
#include <string.h> 
#include <iostream>
using namespace std;

void wwod(char *path,char *regim) 
{//������� ������ ������������ ����� � �������� ����
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
{//������� ��������� ����������� �����
	FILE *f; char fam[81]; 
	f=fopen(path,regim); 
	while(fgets(fam,80,f)!=NULL) 
	{ 
		printf("%s",fam); 
	} ; 
	fclose(f); 
} 
 
void sortirovka(char *path) 
{//������� ����������
	FILE *f, *fd,*fr; 
	int i,k,imin,kol,j; 
	char fam[81],min[81],buf[81]; 
	f=fopen(path,"r"); 
	kol=0; 
	fr=fopen("res","w"); 
	//���� ����������� ������ ��������� ����� (���������� �����) 
	while(fgets(fam,80,f)!=NULL) 
		kol++; 
	k=kol; 
	fclose(f); 
	cout<<"\n���������� ����� � ����� = ";printf("%d",kol);
	for (i=1;i<=kol;i++) //���� ���������� ����� 
	{ 
		f=fopen(path,"r"); 
		fgets(min,80,f); 
		imin=1; 
		for (j=2;j<=k;j++) //����� ����������� ������ � ����� 
		{
			fgets(fam,80,f); 
			if (strcmp(fam,min)<0) 
			{ 
				strcpy(min,fam); 
					imin=j; 
			} 
		} 
		fputs(min,fr);//������ ����������� ������ � �������������� ���� 
		//�������� ����������� ��������� ����� � �������������� ���� (��� 
		//����������� ������ 
		fd=fopen("dop","w"); 
		rewind(f); 
		//�������� ���� �����, ������������� �� ����������� ������ 
		for (j=1;j<imin;j++) 
		{
			fgets(buf,80,f); 
			fputs(buf,fd); 
		} 
		fgets(buf,80,f);//������� ����������� ������ 
		// �������� ���� �����, ������������� ����� ����������� ������ 
		for (j=imin+1;j<=k;j++) 
		{
			fgets(buf,80,f); 
			fputs(buf,fd); 
		} 
		fclose(f); 
		fclose(fd); 
		//����������� ��������� ����� 
		remove(path); 
		//�������������� ��������������� ����� 
		rename("dop",path); 
		k--; 
	} 
	fclose(fr); 
	fclose(f); 
	//����������� ��������� ����� 
		cout<<"\n����������� ��������� �����";
	//�������������� ����������� ����� 
		cout<<"�������������� ����������� �����";
	rename("res",path); 
} 

void main() 
{
	setlocale(0,"");
	char ch,path[20],rech[20]; 
	do 
	{ 
		cout<<"\n ����";
		cout<<"0. ���� ����� �����";
		cout<<"1. WWOD ���� ������ � ����";
		cout<<"2. WIWOD ����� ������ �� �����";
		cout<<"3. sortirovka ���������� ������ ";
		cout<<"4. �����";
		ch=getch(); 
		switch (ch)
		{ 
			case '0':	cout<<"������� ����� �����";
//						printf("wwedite imja file - \n"); 
						gets(path); 
						cout<<"����������� �����";
						printf("\n%s",path);break; 
			case '1':	wwod(path,"w"); break; 
			case '2':	wiwod(path,"r"); break; 
			case '3':	sortirovka(path);break; 
		} 
	}while(ch!='4'); 
} 
