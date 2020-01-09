// пример использование шаблона функции

#include "stdio.h"
#include "conio.h"
//#include "math.h"
#include <iostream>
using namespace std;

template <class type>
type abs(type x) { return x>0?x:-x;}

int main()
{
	cout<<abs(-10.3);
 _getch();
  return 0;
}
