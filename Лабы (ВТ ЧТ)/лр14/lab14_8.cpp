
#include<iostream>
using namespace std;


class point {
	int x, y;
	public:
	point(int xi=0, int yi=0) {
	x=xi;
	y=yi;
	}
	int& givex() {
		return x;
	}
	int& givey() {
		return y;
	}
	void display() {
	cout<<"x= "<<x<<"\ny= "<<y<<endl;
	}

};

class square {
	class segment {
		point pn, pk;
	public:
		segment (point pin=point(0,0), point pik=point(0,0))
		{
			pn.givex()=pin.givex();
			pn.givey()=pin.givey();
			pk.givex()=pin.givex();
			pk.givey()=pin.givey();
		}
		point& beg(void) { return pn;}
		point& end (void) { return pk;}
		void showSeg() {
			cout<<"xnach= "<<pn.givex()<<"\tynach= "<<pn.givey()<<"\txkon= "<<pk.givex()<<"\tykon= "<<pk.givey()<<endl;
		}
	};
	segment ab, bc, cd,da; //отрезки - стороны квадрата
public:
	square(point ci=point (0,0), int di=0) {
		point a,b,c,d;
		a.givex()=ci.givex()-di/2;
		a.givey()=ci.givey()-di/2;
		b.givex()=ci.givex()+di/2;
		b.givey()=ci.givey()-di/2;
		c.givex()=ci.givex()+di/2;
		c.givey()=ci.givey()+di/2;
		d.givex()=ci.givex()-di/2;
		d.givey()=ci.givey()+di/2;
		//Граничные точки отрезков:
		ab.beg()=a; ab.end()=b;
		bc.beg()=b; bc.end()=c;
		cd.beg()=c; cd.end()=d;
		da.beg()=d; da.end()=a;
	}
	void showSquare (void) {
		ab.showSeg();
		bc.showSeg();
		cd.showSeg();
		da.showSeg();
	}
};




void main() {
	point p1(80,120);
	point p2(250,240);
	square A(p1,30);
	square B(p2,140);
	A.showSquare();
	system("pause");
	B.showSquare();

	system("pause");
}