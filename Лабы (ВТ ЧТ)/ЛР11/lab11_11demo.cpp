
#include<iostream>
#include <time.h>
using namespace std;
/* 
������������ ��������� �����.
����� ������� �������� ���������
������� ��������� ����� ���������� � �������,
����� ���� ���������� 10 ���� � �������� �����
*** ��� �������� ����������������� ������������ ���������� ����������
*/
int midpoints()
{  
	union ud{
		double d;
		unsigned char u[8];
	}u1;
	union un{
		int n;
		unsigned char u[4];
	}u2;
	static int number=0; // ���������
	// ������ ����� ����������� �� �������
	if(!number)number=(int)time( 0 );
	u1.d=(double)number;
	u1.d *= u1.d; // ���������� � �������
	for(int i=0; i<4; i++){
		// ��������� ��������� �����
		u2.u[i]=u1.u[i+2];
	}
	number=u2.n;
	number=number & 0x7fffffff;// ��������� �������� ������
	return number;
}

#define N 100000
void main(){
	int mas[N];
		for(int i=0; i<N; i++){
			mas[i]=midpoints();
			cout<<mas[i]<<"\t"
		}
	system("pause");
}
