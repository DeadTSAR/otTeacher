#include "stdafx.h"
#include<iostream>
using namespace std;
/* �������� �������� 
��������������� �������� public
*/
// ����� ��������� �����
class BOOK{
public:
	char Autor[32]; // �����
	char Title[64]; // �������� �����
	char Publisher[64]; // ������������
	int Year; // ��� �������
}bk1={"������� �.�.","����� � ���","�������������� ����������",1970},
bk2={"����������� �.�.","������������ � ���������","������� �������",1975},
bk3={"������ �.�.","������������� � �����","�����",1980},
bk4={"���� �.","��� ���������","������",1978};

void main(){
	setlocale(LC_ALL,"Russian");
	cout<<"Size="<<sizeof(bk1)<<endl;
	cout<<bk1.Autor<<"\t"<<bk1.Title<<"\t"<<bk1.Publisher<<"\t"<<bk1.Year<<endl;
	cout<<bk2.Autor<<"\t"<<bk2.Title<<"\t"<<bk2.Publisher<<"\t"<<bk2.Year<<endl;
	cout<<bk3.Autor<<"\t"<<bk3.Title<<"\t"<<bk3.Publisher<<"\t"<<bk3.Year<<endl;
	cout<<bk4.Autor<<"\t"<<bk4.Title<<"\t"<<bk4.Publisher<<"\t"<<bk4.Year<<endl;
	

	system("pause");
}