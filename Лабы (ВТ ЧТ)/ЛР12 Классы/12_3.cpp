#include "stdafx.h"
#include<iostream>
using namespace std;
/* Прямой доступ к свойствам объекта закрыт

*/
// Класс описывает книгу
class BOOK{
	// По умолчанию тип private
	char *Autor; // Автор
	char *Title; // Название книги
	char *Publisher; // Издательство
	int Year; // Год издания
	public:
	BOOK(char *a,char *t,char *p,int y){
		Autor=new char[strlen(a)+1]; strcpy(Autor,a);
		Title=new char[strlen(t)+1]; strcpy(Title,t);
		Publisher=new char[strlen(p)+1]; strcpy(Publisher,p);
		Year=y; 
	}
	~BOOK(){
		if(Autor){delete[] Autor; Autor=NULL; }
		if(Title){delete[] Title; Title=NULL;}
		if(Publisher){delete[] Publisher; Publisher=NULL;}
	}
	void prnt(){
		cout<<Autor<<"\t"<<Title<<"\t"<<Publisher<<"\t"<<Year<<endl;
	}
};

void main(){
	setlocale(LC_ALL,"Russian");
	{
		BOOK bk1("Толстой Л.Н.","Война и мир","Художественная литература",1970);
		BOOK bk2("Достоевский Ф.М.","Преступление и наказание","Молодая гвардия",1975);
		BOOK bk3("Пушкин А.С.","Стихотворения и поэмы","Минск",1980);
		BOOK bk4("Дюма А.","Три мушкетера","Кишинёв",1978);
		bk1.prnt();
		bk2.prnt();
		bk3.prnt();
		bk4.prnt();
	}
	system("pause");
}