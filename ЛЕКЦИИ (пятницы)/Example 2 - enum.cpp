// ConsoleApplication69.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
//#include "stdafx.h"
#include <iostream>
#include <iomanip>
//#include <Windows.h>
using namespace std;

enum class weekdays {
	Mon = 1,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat,
	Sun
};

enum {zero = 10, one, two = 20, three};

int main() {
	cout << zero << endl; // В этой строке выводится элемент перечисления
	cout << one << endl;
	cout << two << endl;

	/* Это
	 * многострочный
	 * комментарий
	 *
	 */

	cout << static_cast<int>(weekdays::Mon) << "\n";
	cout << static_cast<int>(weekdays::Tue) << "\n";
	cout << static_cast<int>(weekdays::Wed) << "\n";
	cout << static_cast<int>(weekdays::Thu) << "\n";
	cout << static_cast<int>(weekdays::Fri) << "\n";
	return 0;
}

