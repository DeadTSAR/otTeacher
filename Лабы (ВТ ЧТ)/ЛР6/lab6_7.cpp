// lab 9.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
/* �������������  �������� ���������,
���������� ���������� � ������� ����������
*/
void main(){
	int *k, n;
	do{
		cout<<"Enter the number of\n";
		cin>>n;
		k=&n; // ����������� ��������� ������ ����������
		cout<<"Address: "<<k<<"\tValue: "<<*k<<"\tSquare: "<<(*k)*(*k)<<endl; // ������������� �������� ��������� 
												// � ��� ����������
	}while(*k);
}
