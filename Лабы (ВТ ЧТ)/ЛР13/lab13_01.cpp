#include "stdafx.h"
#include <iostream>
using namespace std;

class cell {
int static Amount;
int Number;
double Meaning;
public:
cell (double Meaning = 0.0)
{
Amount++;
this->Number=Amount;
this->Meaning=Meaning;
}
void display (void) 
{
cout<< "\nNumber=" <<this-> Number;
cout<< "\nAmount=" <<this-> Amount; 
cout<< "\nMeaning=" <<this-> Meaning; 
}
};
int cell::Amount=0;
void main () {
cell A;
A.display();
cell B(200.0);
cell C (300.0);
B.display();
C.display();
system ("pause");
}