#include "stdafx.h"
#include<iostream>
using namespace std;
/* ������� ������ �������������� ������� friend
*/
class myclass {
	// ������� ����������� ��� friend ������ myclass
	friend int sum(myclass x); 

	int a, b;

	public:
		myclass(int i, int j) { a=i; b=j; }
};

int sum(myclass x)
{
 /* ������� ����� ������ � ��������
	��������� ������ */
	return x.a + x.b;
}
  
void main(){
	myclass mk1(3, 4);

	cout << sum(mk1)<< endl;

	char c; cin>>c;
}