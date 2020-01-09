
#include "stdafx.h"
#define MY_PI 3.14
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v(9, 3);
	v.push_back(9);
	v.push_back(1);
	v.insert(begin(v), 55);
	v.insert(begin(v) + 5, 55);

	// STL
	vector<int> v2 = v;
	// range-based for
	for (int item : v2){
		cout << item << endl;
	}

	cout << "v2[3] = " << v2[3] << endl;

	return 0;
}

