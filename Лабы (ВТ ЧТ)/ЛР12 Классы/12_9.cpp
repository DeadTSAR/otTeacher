#include "stdafx.h"
#include<iostream>
using namespace std;
/* Простой пример исполльзования функции friend
*/
class myclass {
	// функция объявляется как friend класса myclass
	friend int sum(myclass x); 

	int a, b;

	public:
		myclass(int i, int j) { a=i; b=j; }
};

int sum(myclass x)
{
 /* Функция имеет доступ к закрытым
	элементам класса */
	return x.a + x.b;
}
  
void main(){
	myclass mk1(3, 4);

	cout << sum(mk1)<< endl;

	char c; cin>>c;
}