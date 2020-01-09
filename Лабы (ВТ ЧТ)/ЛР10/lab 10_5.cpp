
#include <iostream>
using namespace std;
//использование структуры для передачи массива
//

	const int nn=30;
	 struct sap 
	{ 
		int m,n;
		float mas[nn][nn];
	};

	void f(sap a,sap *b);

int main()
{  setlocale(LC_ALL,"Rus");
	int i,j;
	sap a,b;
	cout<<"Введите количество строк m и столбцов n массива"<<endl;
	cin>>a.m>>a.n;
	cout<<"Введите элементы массива"<<endl;
	for (i=0;i<a.m;i++)
		for (j=0;j<a.n;j++)
			cin>>a.mas[i][j];
	f(a,&b);
    cout<<"Результат"<<endl;
	for (i=0;i<b.m;i++)
	{ 
		for (j=0;j<b.n;j++)
			cout<<b.mas[i][j]<<"\t";
		cout<<endl;
	}
	system("pause");
	return 0;
}

void f(sap a,sap *b)
{//функция формирования новой матрицы
	int i,j;
	b->m=a.m;
	b->n=a.n;
	for (i=0;i<a.m;i++)
		for (j=0;j<a.n;j++)
			if (a.mas[i][j]<0)
				b->mas[i][j]=a.mas[i][j]+a.mas[i][0];
			else  
				b->mas[i][j]=a.mas[i][j]/a.mas[i][0];
}
