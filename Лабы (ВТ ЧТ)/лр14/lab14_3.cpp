
#include<iostream>
using namespace std;

struct base {
	void fun (int i) 
	{ 
		cout<<"base::i= "<<i<<endl;
	}
};

struct dir: public base {
	void fun (int i) {
		cout<<"dir::i= "<<i<<endl;
	}
};

void main() {
	base B, *bp=&B;
	dir D, *dp=&D;
	base *pbd=&D;
	bp->fun(1); // �������� base::i=1
	dp->fun(5);// �������� dir::i=5
	pbd->fun(4); // �������� base::i=4

	system("pause");
}