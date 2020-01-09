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
{//������� ����� ������ � ���� 
	FILE *f; 
	char nom[5],grup[9],fam[13]; 
	int oc[3],i; 
	float sr; 
	f=fopen(path,regim); 
	cout<<"\n������� ����� �������� - ";
	scanf("%s",nom); 
	while (strcmp(nom,"")!=0) 
	{ 
		cout<<"������� ����� ������ - ";
		scanf("%s",grup); 
		cout<<"������� ������� - ";
		scanf("%s",fam); 
		cout<<"������� ��� ������ - ";
		for (i=0;i<3;i++) 
			scanf("%d",&oc[i]); 
		fprintf(f,"%4s%8s%12s",nom,grup,fam); 
		for (i=0;i<3;i++) 
			fprintf(f,"%3d",oc[i]); 
		sr=(float)(oc[0]+oc[1]+oc[2])/3; 
		fprintf(f,"%5.2f",sr); 
		fprintf(f,"\n"); 
		cout<<"\n������� ����� �������� - ";
		gets(nom); gets(nom); 
	} 
	fclose(f); 
} 
void wiwod(char *path,char *regim) 
{//������� ��������� ����������� ����� 
	FILE *f; 
	char nom[5],grup[9],fam[13],buf[80]; 
	int oc[3],i; 
	f=fopen(path,regim); 
	while(fgets(buf,79,f)!=NULL) 
		printf("%s",buf); 
	fclose(f); 
} 
void sortirovka(char *path) 
{//������� ���������� ������� ������� ����� � �������������  
 //����������� �� �������� � �������, �������� ����������� 
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
		//���� ������ ����� ������� � ������ ���������, ��������� �� ����� 
		while (flag&&j<k) 
		{
			if (strcmp(s[j].fam,stud.fam)<0) 
				flag=false; 
			else 
				j++;
		} 
		k++; 
		s=(st *)realloc(s,k*sizeof(st));//��������� ������ 
		for (l=k-1;l>j;l--)//���� ������ ��������� ������� ����� ��������� 
			s[l]=s[l-1]; 
		s[j]=stud; //������� �������� �� �������������� ����� 
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
{//������� ������ ���� ������ ��������� �� �������� ����� 
	FILE *f; 
	st stud, *s; 
	int i,k=0,j,l; 
	bool flag; 
	char gr[9]; 
	f=fopen(path,"r"); 
	s=(st *)malloc(0); 
	//���� ������ ����������� ����� 
	while(fgets(stud.nom,5,f)!= NULL) 
	{ 
		fscanf(f,"%s%s",stud.grup,stud.fam); 
		for (i=0;i<3;i++) 
			fscanf(f,"%d",&stud.oc[i]);
		fscanf(f,"%f\n",&stud.sr); 
		flag=true; 
		j=0; 
		// ���� ������ ����� � ������� ��� ������� ���������� �������� 
		while (flag&&j<k) 
			if (s[j].sr>stud.sr) 
				flag=false; 
			else 
				j++;
		k++; 
		s=(st *)realloc(s,k*sizeof(st)); 
		for (l=k-1;l>j;l--) //���� �������� ��������� ������� ���  
			s[l]=s[l-1];	//������������ ����� ��� ������ �������� 
			 
		s[j]=stud; //������ � ������ ������ �������� 
	} 
	//������ � ���� � ������ temp ���� ������ ���������
	//��� ����, ���� �� ������ ���� 
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
		cout<<"������� ��� ����� - "; 
		scanf("%s",path); 
		printf("\n%s",path); 
		cout<<"\n\n ����";
		cout<<"\n1. WWOD ���� ������ � ����";
		cout<<"\n2. WIWOD ����� ������ �� �����";
		cout<<"\n3. sortirovka ���������� ������ ";
	    cout<<"\n4. tri ������ � ���� temp ��� ������";
		cout<<"\n5. �����";
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
