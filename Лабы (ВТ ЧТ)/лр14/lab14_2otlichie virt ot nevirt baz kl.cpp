
#include<iostream>
using namespace std;

class point {
public: 
	int x, y;
public:
	// онструктор
	point () {
		cout<<"pustoi konstr"<<endl;
	}
protected: point (int xi, int yi) {

		x=xi;
		y=yi;
	}

	virtual void display () {
		cout<<"x= "<<x<<"\ty= "<<y<<endl;
	}

};



class ellips:   point {
	public: 
	int rx, ry; //координаты центра квадрата и длина стороны


	ellips (int xi, int yi, int rx,int ry): point (xi,yi) {
		this->rx=rx; 
		this->ry=ry;
	}

	virtual void display () {
		cout<<"x= "<<x<<"\ty= "<<y<<"\trx= "<<rx<<"\try= "<<ry<<endl;
	}

};

class circ:  point {
public:	int xc, yc, rc;

	// онструктор
	circ (int xi, int yi, int ri): point(xi,yi) {
		xc=xi;
		yc=yi;
		rc=ri;
	}

	void display () {
		cout<<"xc= "<<xc<<"\tyc= "<<yc<<"\trc= "<<rc<<endl;
	}

};

class circelli:  circ, ellips {
	int min (int value1, int value2) {
		return ( (value1<value2)? value1:value2);
	}

public:
	// онструктор
	circelli (int xi, int yi, int rx, int ry): 
	  ellips(xi, yi, rx,ry), circ(xi,yi, min(rx,ry))//,point(xi,yi)-используетс€, если у нас создаетс€ виртуальный базовый класс point, иначе вызываетс€ пустой конструктор  //€вно вызываютс€ конструкторы базовых классов
	  {}

	  void display () {
		  circ::display();
		  ellips::display();
		  //cout<<"xc= "<<x<<"\tyc= "<<y<<"\trc= "<<rc<<endl;
		  //cout<<"x= "<<x<<"\ty= "<<y<<"\trx= "<<rx<<"\try= "<<ry<<endl;

	  }

};

void main() {

	circelli A1 (100,100,60, 50);
	ellips A2 (400,300,50, 10);
	A1.display();
	A2.display();
	//point *prt=&A1;
	//prt->display();

	system("pause");
}