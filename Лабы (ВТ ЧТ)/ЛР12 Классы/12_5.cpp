#include "stdafx.h"
#include<iostream>
using namespace std;
/* Конструктор копии
*/
// Класс описывает книгу
class BOOK{
public:
	char *Autor; // Автор
	char *Title; // Название книги
	char *Publisher; // Издательство
	int Year; // Год издания
	// Пустой конструктор
	BOOK(){
		cout<<"Работает пустой конструктор\n";
		Autor=NULL; 
		Title=NULL;
		Publisher=NULL; 
		Year=0; 
	}
	// Конструктор, создающий объект
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
void prnt(BOOK b){
	cout<<"Работает вызываемая функция\n";
	cout<<b.Autor<<endl;

}
void main(){
	setlocale(LC_ALL,"Russian"); //переключение на русскую кодировку
	{
		BOOK bk1("Толстой Л.Н.","Война и мир","Художественная литература",1970);
	//	prnt(bk1); // Включаем вызывающую функцию
		cout<<bk1.Autor<<"\t"<<bk1.Title<<"\t"<<bk1.Publisher<<"\t"<<bk1.Year<<endl;
	}
	char c; cin>>c;
}