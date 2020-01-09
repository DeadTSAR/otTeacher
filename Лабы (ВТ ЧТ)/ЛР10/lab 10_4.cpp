
//Упорядочить массив структур
#include <iostream>
using namespace std;
 struct sap
{ 
	char f[30];//фамилия
	int r;	//рост
};

int main()
{ 
	setlocale(LC_ALL,"Rus");
	int n,k,kol,i,flag;
	sap a[10], b; 
	
	cout<<"Введите количество n элементов массива"<<endl;
	cin>>n;
	cout<<endl;
	cout<<"Введите элементы массива структур"<<endl;
	for(i=0;i<n;i++)
	{	
		cout<<"Фамилия:"<<endl;
		cin>>a[i].f;
		cout<<"Рост:"<<endl;
		cin>>a[i].r;
		cout<<endl;
	}
	cout<<"Контрольный вывод"<<endl;
	
	for(i=0;i<n;i++)
	{
		cout<<a[i].f<<"\t"<<a[i].r<<endl;
	}
	cout<<endl;
//сортировка методом пузырька массива структур
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
cout<<"Вывод упорядоченного массива структур"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i].f<<"\t"<<a[i].r<<endl;
	}
	system("pause");
	return 0;
}
