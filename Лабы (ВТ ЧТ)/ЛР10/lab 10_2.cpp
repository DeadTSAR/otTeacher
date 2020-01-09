

#include "math.h"
#include <iostream>
using namespace std;
struct
	{ 
		char fam[30];
		int  god;
		float doch; 
	} person = {"Петров", 1958, 1050.56};
	
struct mpoint
  {
	  float x,y;
  } mas[2][3]={ 
				{{2.2,-4.4}, {4.5, -9.8},  {7.7, -6.6}},
				{{1.1,0.7},	 {34.6,-12.5}, {9.9,-0.5}}
			  };


struct point 
	{
		float x; 
		float y;
	};

	


int maijn()
{ 
	setlocale(LC_ALL,"Rus");
	cout<<person.fam<<"\t"<<person.god<<"\t"<<person.doch<<endl;
	cout<<endl;
	for (int i=0; i<2; i++)
		for( int j=0; j<3;j++)
	                  cout<<mas[i][j].x<<"\t"<<mas[i][j].y<<endl;

	point a;
		a.x=4.4; a.y=-9.7;
		cout<<a.x<<" "<<a.y<<endl;

	point *b=&a;
	    b->x=34.5; b->y=8.6;
		cout<<b->x<<" "<<b->y<<endl;
	system("pause");
	return 0;
}
