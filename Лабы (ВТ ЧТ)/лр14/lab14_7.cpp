
#include<iostream>
using namespace std;


class point {
protected:
	int x, y;
	public:
	point(int xi, int yi) {
	x=xi;
	y=yi;
	}
	int givex() {
		return x;
	}
	int givey() {
		return y;
	}
	void display() {
	cout<<"x= "<<x<<"\ny= "<<y<<endl;
	}

};

class figure: public point {
public:
	//конструктор абстрактного класса
	figure (point p): point(p.givex(), p.givey()) {}
	//чистая виртуальная функция для будущего вывода фигур:
	virtual void display()=0;
	void move(point p) {
		x=p.givex();
		y=p.givey();
		display();
	}
};

class ellips: public figure {
	int rx, ry;
public:
	ellips (point d, int radx, int rady): figure (d)
	{
		rx=radx; ry=rady;
	}
		void display() {
	cout<<"x= "<<x<<"\ny= "<<y<<"\nrx= "<<rx<<"\nry= "<<ry<<endl;
	}
};

	class circ: public figure {
		int radius;
	public:
		circ (point e, int rad): figure(e) {
			radius=rad; 
		}
		void display() {
			cout<<"x= "<<x<<"\ny= "<<y<<"\nradius= "<<radius<<endl;
		}
	};





void main() {
	point A(100,80), B(300,200);
	circ C(A,60);
	ellips E(B,200,100);
	A.display(); 
	B.display(); 
	C.display(); 
	E.display(); 
	C.move(B);

	system("pause");
}