
#include <iostream>
using namespace std;
//��������� � ���������

	struct S1  
	{
		int i; 
		float r;
	};
	struct S2 
	{
		S1 z; //���� ���� ��������� S1
		float c;
	};
	


int main()
{  setlocale(LC_ALL,"Rus");
	S2  y[2];
	y[0].z.i=2;//���� i ��������� ���� S1  
	y[0].z.r=2.2; //���� r ��������� ���� S1
	y[0].c=8.02;
	y[1].z.i=6;//���� i ��������� ���� S1 
	y[1].z.r=-12.3; //���� r ��������� ���� S1 
	y[1].c=1.75;
	for (int i=0;i<2;i++)
	cout<< y[i].z.i<<" "<<y[i].z.r<<" "<<y[i].c<<endl;
	system("pause");
	return 0;
}

