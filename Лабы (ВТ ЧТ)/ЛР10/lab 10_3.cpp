
#include <iostream>
using namespace std;
//структура в структуре

	struct S1  
	{
		int i; 
		float r;
	};
	struct S2 
	{
		S1 z; //поле типа структура S1
		float c;
	};
	


int main()
{  setlocale(LC_ALL,"Rus");
	S2  y[2];
	y[0].z.i=2;//поле i структуры типа S1  
	y[0].z.r=2.2; //поле r структуры типа S1
	y[0].c=8.02;
	y[1].z.i=6;//поле i структуры типа S1 
	y[1].z.r=-12.3; //поле r структуры типа S1 
	y[1].c=1.75;
	for (int i=0;i<2;i++)
	cout<< y[i].z.i<<" "<<y[i].z.r<<" "<<y[i].c<<endl;
	system("pause");
	return 0;
}

