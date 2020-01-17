#include "stdafx.h"
#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter integer\n";
	cin >> n;
	cout << ((n % 2 == 0) ? "Even" : "Odd") << "\n";

	n = n % 2 ? -n : n;
	cout << n;

	int a, b, c;
	cin >> a >> b >> c;
	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	cout << "Max = " << max << endl;

	return 0;
}

