
//����������� ������ ��������
#include <iostream>
using namespace std;
 struct sap
{ 
	char f[30];//�������
	int r;	//����
};

int main()
{ 
	setlocale(LC_ALL,"Rus");
	int n,k,kol,i,flag;
	sap a[10], b; 
	
	cout<<"������� ���������� n ��������� �������"<<endl;
	cin>>n;
	cout<<endl;
	cout<<"������� �������� ������� ��������"<<endl;
	for(i=0;i<n;i++)
	{	
		cout<<"�������:"<<endl;
		cin>>a[i].f;
		cout<<"����:"<<endl;
		cin>>a[i].r;
		cout<<endl;
	}
	cout<<"����������� �����"<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<a[i].f<<"\t"<<a[i].r<<endl;
	}
	cout<<endl;
//���������� ������� �������� ������� ��������
k=0;
do
{
		flag=0;
		k++;
		for (i=0;i<n-k;i++)
			if (a[i].r>a[i+1].r)
			{
				b=a[i];
				a[i]=a[i+1];
				a[i+1]=b;
				flag=1;
			}
} while (flag); 
cout<<"����� �������������� ������� ��������"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i].f<<"\t"<<a[i].r<<endl;
	}
	system("pause");
	return 0;
}
