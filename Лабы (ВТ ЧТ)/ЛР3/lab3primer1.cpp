
#include "conio.h"
#include <iostream>
using namespace std;
#include "math.h"

int main()
{
setlocale(0,"");
int d,i;
d=0;
for (i=1; i<=3; ++i)
{
printf("\n Введите перввый символ пароля: ");
if (_getch() != 'a')
continue;
printf("\n Введите второй символ пароля: ");
if (_getch() == 'b')
{
	d=1;
break;
}
}
if (!d)
{
printf("\n Ошибка! Работа программы будет завершена.\n");
_getch();
return 0;
}
printf("\n Вы допущены к работе с программой. \n");
_getch();
return 0;
}

