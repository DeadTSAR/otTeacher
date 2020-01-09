#include <iostream>
#include "math.h"
using namespace std;


int main0() {
	double x, y;
	while (1) {
		cout << "Enter x:" << endl;
		cin >> x;
		if (x < -3) {
			y = -1 / x;
		}
		else if (x < 0) {
			y = sqrt(-x);
		}
		else  if (x < 1) {
			y = x * x;
		}
		else {
			y = sqrt(x);
		}
		cout << "y=" << y << endl;
	
	float y2;
	if (x < -3) y2 = -1 / x;
	if (x >= -3 && x < 0) y2 = sqrt(-x);
	if (x >= 0 && x < 1) y2 = x * x;
	if (x > 1)y2 = sqrt(x);
	cout << "y2=" << y2 << endl;
	}
	system("pause");
	return 0;
}