#include "stdafx.h"
#include <iostream>
#include <limits>
#include <cstdint>
//#include <Windows.h>
using namespace std;

enum week { sunday, monday, tuesday, wednesday, thursday, friday, saturday };
enum class week2 { sun, mon, tue, wed, thu, fri, sat};

int main() {
	week w1 = wednesday;
	week2 w2 = week2::sun;

	cout << w1 << endl;
	cout << static_cast<int>(w2) << endl;

	return 0;
}

