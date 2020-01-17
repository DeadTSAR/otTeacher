// lab 9.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include<iostream>
#include<time.h>
using namespace std;
/* ћассивы и указатели
*/
#define N 10
void main(){
	int mas[N];

	srand((int)time(0));

	for(int i=0; i<N; i++)
		mas[i]=rand()%1000;
	for(int i=0; i<N; i++)

		cout<<mas[i]<<"\t"<<*(mas+i)<<endl;
	cout<<endl;

	cout<<(&mas[5] - &mas[0])<<endl;
	cout<<endl;

	double masd[N];

	for(int i=0; i<N; i++)
		masd[i]=(double)rand()/(double)RAND_MAX;

	for(int i=0; i<N; i++)
		cout<<masd[i]<<"\t"<<*(masd+i)<<endl;
	cout<<endl;
	cout<<(&masd[5] - &masd[0])<<endl;

	char c; cin>>c;
}