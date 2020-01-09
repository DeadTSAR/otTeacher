
#include<iostream>
using namespace std;

class point {
protected: 
int x, y;
public:
//Конструктор
	point () {
		cout<<"Pustoi konstr"<<endl;
	}
point (int xi, int yi) {

	x=xi;
y=yi;
}

void display () {
cout<<"x= "<<x<<"\ty= "<<y<<endl;
}

};



class ellips: public virtual  point {
protected: int rx, ry; //координаты центра квадрата и длина стороны

public: 
ellips (int xi, int yi, int rx,int ry): point (xi,yi) {
this->rx=rx; 
this->ry=ry;
}

void display () {
cout<<"x= "<<x<<"\ty= "<<y<<"\trx= "<<rx<<"\try= "<<ry<<endl;
}

};

class circ: public virtual  point {
int xc, yc, rc;
public:
//Конструктор
circ (int xi, int yi, int ri): point(xi,yi) {
xc=xi;
yc=yi;
rc=ri;
}

void display () {
cout<<"xc= "<<xc<<"\tyc= "<<yc<<"\trc= "<<rc<<endl;
}

};

class circelli: public virtual circ, public virtual ellips {
int min (int value1, int value2) {
	return ( (value1<value2)? value1:value2);
}

public:
//Конструктор
circelli (int xi, int yi, int rx, int ry): 
ellips(xi, yi, rx,ry), circ(xi,yi, min(rx,ry)) //явно вызываются конструкторы базовых классов
{x=xi;
y=yi;

}

void display () {
circ::display();
ellips::display (); 
}
 
};

void main() {

circelli A1 (100,100,60, 50);
circelli A2 (400,300,50, 10);
A1.display();
A2.display();

system("pause");
}