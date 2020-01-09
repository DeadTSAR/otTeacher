#include "stdafx.h"
#include<iostream>
using namespace std;
/* Демонстрация конструкторов и деструктора
*/
// Класс описывает книгу
class BOOK{
public:
	char *Autor; // Автор
	char *Title; // Название книги
	char *Publisher; // Издательство
	int Year; // Год издания
	// Пустой конструктор
	/*BOOK(){
		cout<<"Работает пустой конструктор\n";
		Autor=NULL; 
		Title=NULL;
		Publisher=NULL; 
		Year=0; 
	}*/
	// Контструктор, создающий объект
	BOOK(char *a,char *t,char *p,int y){
		cout<<"Работает второй конструктор\n";
		Autor=new char[20]; strcpy(Autor,a);
		Title=new char[40]; strcpy(Title,t);
		Publisher=new char[30]; strcpy(Publisher,p);
		Year=y; 
	}
	// Деструктор
	~BOOK(){
		cout<<"Работает деструктор\n";
		if(Autor){delete[] Autor; Autor=NULL; }
		if(Title){delete[] Title; Title=NULL;}
		if(Publisher){delete[] Publisher; Publisher=NULL;}
	}
};

void main(){
	setlocale(LC_ALL,"Russian"); 
	{
		
		BOOK bk1("Толстой Л.Н.","Война и мир","Художественная литература",1970);
		BOOK bk2("Достоевский Ф.М.","Преступление и наказание","Молодая гвардия",1975);
		BOOK bk3("Пушкин А.С.","Стихотворения и поэмы","Минск",1980);
		BOOK bk4("Дюма А.","Три мушкетера","Кишинев",1978);
		cout<<bk1.Autor<<"\t"<<bk1.Title<<"\t"<<bk1.Publisher<<"\t"<<bk1.Year<<endl;
		cout<<bk2.Autor<<"\t"<<bk2.Title<<"\t"<<bk2.Publisher<<"\t"<<bk2.Year<<endl;
		cout<<bk3.Autor<<"\t"<<bk3.Title<<"\t"<<bk3.Publisher<<"\t"<<bk3.Year<<endl;
		cout<<bk4.Autor<<"\t"<<bk4.Title<<"\t"<<bk4.Publisher<<"\t"<<bk4.Year<<endl;
	}
	
	system("pause");
}