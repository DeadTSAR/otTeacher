#include "stdafx.h"
#include <iostream>
using namespace std;
/* ���� ������ �� ����������� �������
��������� �������������� � ������
� ����� ����� ���������������
*/
void main(){
	char mas[100][16];
	int nm=sizeof(mas)/sizeof(mas[0]);

	FILE *f;
	f=fopen("New.txt","rb");
	unsigned char b;
	int n,nmas;
	// ���� �������� �������
	n=fread(&mas,1,sizeof(mas),f);
	nmas=n/16;
	for(int i=0; i<nmas; i++)
		cout<<mas[i]<<endl;
	fclose(f);
	char ch; cin>>ch;
}