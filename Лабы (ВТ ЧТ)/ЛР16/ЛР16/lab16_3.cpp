#include "stdafx.h"
#include<iostream>
#include<time.h>
using namespace std;
/* ��������� ��� ����������� ������� � ����
������������ �����, ����������� � ��������� ������
� ������� � ����
*/

void main(){
	srand((int)time(0));
	FILE *f;
	// ������ ��������, ��������� ����
	f=fopen("text.txt","w");
	int n;
	char s[32];
	for(int i=0; i<100000; i++){
		n=rand();	// �������� ��������� �����	
		itoa(n,s,10); // � ��������� ��� � ��������� ������

		fputs(s,f); // ���������� ����� � ����
		fputc('\n',f); // ���������� �����������
	}
	fclose(f); // ��������� ����
	cout<<"Game Over!\n";
}