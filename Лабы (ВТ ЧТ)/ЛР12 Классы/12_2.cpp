#include "stdafx.h"
#include<iostream>
using namespace std;
/* ������������ ������������� � �����������
*/
// ����� ��������� �����
class BOOK{
public:
	char *Autor; // �����
	char *Title; // �������� �����
	char *Publisher; // ������������
	int Year; // ��� �������
	// ������ �����������
	/*BOOK(){
		cout<<"�������� ������ �����������\n";
		Autor=NULL; 
		Title=NULL;
		Publisher=NULL; 
		Year=0; 
	}*/
	// ������������, ��������� ������
	BOOK(char *a,char *t,char *p,int y){
		cout<<"�������� ������ �����������\n";
		Autor=new char[20]; strcpy(Autor,a);
		Title=new char[40]; strcpy(Title,t);
		Publisher=new char[30]; strcpy(Publisher,p);
		Year=y; 
	}
	// ����������
	~BOOK(){
		cout<<"�������� ����������\n";
		if(Autor){delete[] Autor; Autor=NULL; }
		if(Title){delete[] Title; Title=NULL;}
		if(Publisher){delete[] Publisher; Publisher=NULL;}
	}
};

void main(){
	setlocale(LC_ALL,"Russian"); 
	{
		
		BOOK bk1("������� �.�.","����� � ���","�������������� ����������",1970);
		BOOK bk2("����������� �.�.","������������ � ���������","������� �������",1975);
		BOOK bk3("������ �.�.","������������� � �����","�����",1980);
		BOOK bk4("���� �.","��� ���������","�������",1978);
		cout<<bk1.Autor<<"\t"<<bk1.Title<<"\t"<<bk1.Publisher<<"\t"<<bk1.Year<<endl;
		cout<<bk2.Autor<<"\t"<<bk2.Title<<"\t"<<bk2.Publisher<<"\t"<<bk2.Year<<endl;
		cout<<bk3.Autor<<"\t"<<bk3.Title<<"\t"<<bk3.Publisher<<"\t"<<bk3.Year<<endl;
		cout<<bk4.Autor<<"\t"<<bk4.Title<<"\t"<<bk4.Publisher<<"\t"<<bk4.Year<<endl;
	}
	
	system("pause");
}