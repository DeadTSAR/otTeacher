#include <iostream>
#include "math.h"
using namespace std;

int main2() {
	float x, y;
	while (1) {
		cout << "Enter x,y:";
		cin >> x >> y;
		if (abs(x) + abs(y) <= 2)
			cout << "I";
		else if (x*y >= 0)
			cout << "III";
		else if (abs(y) < abs(x))
			cout << "II";
		else cout << "IV";
	}
	system("pause");
	return 0;
}