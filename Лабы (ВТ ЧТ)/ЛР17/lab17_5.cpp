#include "stdafx.h"
#include "conio.h"
#include "stdlib.h"
#include "io.h"
#include <string.h>
#include <iostream>

typedef int mas[5];
typedef  struct stud
{ 
	char fam[32];
	int n;
	mas oc;
};

void sozdf(char path[]);
void wiwodf(char path[]);
void sortf(char path[]);

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"");
	char path[80];
 	sozdf(path);
	wiwodf(path);
	sortf(path);
   printf("\n ��������������� ����");
	wiwodf(path);
	getch();
	return 0;
}
void sozdf(char path[])
{//�������� ����� � ������ �������� ������ � ���� 
	stud a;
	int i,n;
	FILE *f;
	char c;
	printf("\n ������� ��� �����");
	gets(path);
	f=fopen(path,"wb");
	do
	{  
		printf("\n ������� �������");
		scanf("%s",a.fam);
		printf("\n ������� ���������� ������");
		scanf("%d",&a.n);
		printf("\n ������� ������");
		for (i=0;i<a.n;i++)
			scanf("%d",&a.oc[i]);
		fwrite(&a,sizeof(a),1,f);
		printf("\n ���������� ����? (Y/N)");
		c=getch();
	}while(c!='N');

  fclose(f);
}
void wiwodf(char path[])
{//����� �� ����� �� ����� 
	stud a;
	int i,n; 
	FILE *f;
	f=fopen(path,"rb");
	n=sizeof (a);
	while (fread(&a,n,1,f)>0)
	{ 
		printf("\n �������: ");
		printf("%s",a.fam);
		printf("\n kol-wo ocenok -  %3d",a.n);
		printf("\n ocenki -  ");
		for (i=0;i<a.n;i++)
			printf("%3d ",a.oc[i]);
	}
	fclose(f);
}

void sortf(char path[])
{//���������� �������� � ����� 
	stud a,b;
	int i,n,kk,k; 
	FILE *f;
	bool flag;
	f=fopen(path,"rb+");
	n=sizeof (a);
	kk=filelength(fileno(f))/n;
	k=0;
	do
	{ 
		k++;
		flag=false;
		for (i=0;i<kk-k;i++)
		{
			fseek(f,i*n,SEEK_SET); 
			fread(&a,n,1,f);
			fread(&b,n,1,f);
			if (strcmp(a.fam,b.fam)>0)
			{
				fseek(f,-2*n,SEEK_CUR);
				fwrite(&b,sizeof(a),1,f);
				fwrite(&a,sizeof(a),1,f);
				flag=true;
			}
		}
	}while(flag);
	fclose(f);
}
