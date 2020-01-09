
#include<iostream>
using namespace std;

struct base {
	virtual void vfun (int i) 
	{ 
		cout<<"base::i= "<<i<<endl;
	}
};

struct dir1: public base {
	void vfun (int i) {
		cout<<"dir1::i= "<<i<<endl;
	}
};

struct dir2: public base {
	void vfun (int i) {
		cout<<"dir2::i= "<<i<<endl;
	}
};

void main() {
	base B, *bp=&B;
	dir1 D1, *dp1=&D1;
	dir2 D2, *dp2=&D2;
	bp->vfun(1); // �������� base::i=1
	dp1->vfun(2);// �������� dir1::i=2
	dp2->vfun(3); // �������� dir2::i=3
	bp=&D1;
	bp->vfun(4); // �������� dir1::i=4
	bp=&D2;
	bp->vfun(5); // �������� dir2::i=5

	system("pause");
}