#include "stdafx.h"
#include<iostream>

using namespace std;
/* ������ ��������� ����
� ������� ���� �������� ����� ����
*/

void main(){
	FILE *f=fopen("hello.txt","w");
	char bufer[256];
	if(f)
	{
		for(int i=0; i<5; i++)
		{
			cout<<"Enter the word\n";
			cin>>bufer; // ������ ����� � ����������
			fputs(bufer,f); // ������� � ���� �����
			fputc('\n',f); // ������� ����������� �����������
		}
	}
	fclose(f);
}