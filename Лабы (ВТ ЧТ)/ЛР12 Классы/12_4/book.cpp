// Отсроченая реализация класса
#include<iostream>
#include"BOOK.h"
using namespace std;
/* Детализация класса
*/

	BOOK::BOOK(){
		// Пустой контруктор
		Autor=NULL; 
		Title=NULL;
		Publisher=NULL; 
		Year=0; 
	}
	BOOK::BOOK(char *a,char *t,char *p,int y){
		// Конструктор создающий объект
		Autor=new char[20]; strcpy(Autor,a);
		Title=new char[40]; strcpy(Title,t);
		Publisher=new char[30]; strcpy(Publisher,p);
		Year=y; 
	}
	BOOK::~BOOK(){
		// Деструктор
		if(Autor){delete[] Autor; Autor=NULL; }
		if(Title){delete[] Title; Title=NULL;}
		if(Publisher){delete[] Publisher; Publisher=NULL;}
		Year=0; 
	}
	void BOOK::prnt(){
		// Функция распечатки объекта
		cout<<Autor<<"\t"<<Title<<"\t"<<Publisher<<"\t"<<Year<<endl;
	}
