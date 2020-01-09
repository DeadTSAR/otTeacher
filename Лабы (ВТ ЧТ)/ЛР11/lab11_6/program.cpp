
#include<iostream>
#include<time.h>
#include"Sort.h"
using namespace std;
/* Демонстрация работы с шаблоном
функция сортировки
Демонстрируется ошибка редактирования
*/

#define N 30
void main(){
	srand((int)time(0));
	// Обращение производится с массивом целого типа
	cout<<"Sorting for the entire\n";
	int mas[N];
	for(int i=0; i<N; i++)
		mas[i]=rand()%900+100;
	
	sort(mas,N);
	for(int i=0; i<N; i++)
		cout<<mas[i]<<"\t";
	cout<<endl;

	// Обращение производится с массивом double 
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