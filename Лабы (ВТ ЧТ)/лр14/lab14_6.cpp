
#include<iostream>
using namespace std;

struct base {
	virtual int f (int j) 
	{ 
		return j*j;
	}

};

struct dir: public base {
	int f(int i) {
		return base::f(i*2);
	}
};


void main() {
	dir D;
	cout<<D.f(2)<<endl;

	system("pause");
}