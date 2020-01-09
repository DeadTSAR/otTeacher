
#include<iostream>
using namespace std;

class circ {
int xc, yc, rc;
public:
// онструктор
circ (int xi, int yi, int ri) {
xc=xi;
yc=yi;
rc=ri;
}

void display () {
cout<<"xc= "<<xc<<"\tyc= "<<yc<<"\trc= "<<rc<<endl;
}

};

class square {
int xq, yq, lq; //координаты центра квадрата и длина стороны

public: 
square (int xi, int yi, int li) {
xq=xi; 
yq=yi;
lq=li;
}

void display () {
cout<<"xq= "<<xq<<"\tyq= "<<yq<<"\tlq= "<<lq<<endl;
}

};

class circsqrt: public circ, public square {

public:
// онструктор
circsqrt (int xi, int yi, int ri): 
circ(xi,yi, ri), square(xi,yi,2*ri) //€вно вызываютс€ конструкторы базовых классов
{}

void display () {
circ::display();
square::display (); 
}
 
};

void main() {

circsqrt A1 (100,100,60);
circsqrt A2 (400,300,50);
A1.display();
A2.display();

//circ A3(1,1,1);
//A3.display();
system("pause");
}