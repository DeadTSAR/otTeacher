
#include<iostream>
#include<time.h>
#include"Sort.h"
using namespace std;
/* ������������ ������ � ��������
������� ����������
��������������� ������ ��������������
*/

#define N 30
void main(){
	srand((int)time(0));
	// ��������� ������������ � �������� ������ ����
	cout<<"Sorting for the entire\n";
	int mas[N];
	for(int i=0; i<N; i++)
		mas[i]=rand()%900+100;
	
	sort(mas,N);
	for(int i=0; i<N; i++)
		cout<<mas[i]<<"\t";
	cout<<endl;

	// ��������� ������������ � �������� double 
	cout<<"Sorting for Real\n";
	double dmas[N];
	for(int i=0; i<N; i++)
		dmas[i]=(double )rand()/(double)RAND_MAX*100.0 ;
	
	sort(dmas,N);
	for(int i=0; i<N; i++)
		cout<<dmas[i]<<"\t";
	cout<<endl;
	char c; cin>>c;
}