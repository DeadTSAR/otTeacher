// lab31.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	setlocale(0,"Rus");
	int N;
	cout<<"������� �����: ";
	cin>>N;
	/*while (pow(2.0,i)<=N) i++;
	if (pow(2.0,i)-N<N-pow(2.0,i-1)) cout<<"��������� ������� ������= "<<i<<endl;
	else if (pow(2.0,i)-N>N-pow(2.0,i-1)) cout<<"��������� ������� ������= "<<i-1<<endl;
	else cout<<"��������� ������� ������= "<<i-1<<" � "<<i<<endl;*/

	for (int j=2; j<=5;j++) {
		if (j==4) continue;
    int i=0;
    while (pow(double(j),i)<=N) i++;
	if (pow(double(j),i)-N<N-pow(double(j),i-1)) cout<<"��������� ������� "<<j<<"-��= "<<i<<endl;
	else if (pow(double(j),i)-N>N-pow(double(j),i-1)) cout<<"��������� ������� "<<j<<"-��= "<<i-1<<endl;
	else cout<<"��������� ������� "<<j<<"-��= "<<i-1<<" � "<<i<<endl;
	}
	system("pause");
	return 0;
}

