// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <algorithm> // подключаем STL для shuffle
using namespace std;

class member{
	static member *first_memb;
	static member *last_memb;
	member *prev, *next;
	char letter;
public:
	member(char cc) { letter = cc; }
	void add(void){
		if (first_memb == 0) first_memb = this;
		if (last_memb == 0) this->prev = 0;
		else { last_memb->next = this; this->prev = last_memb; }
		last_memb = this;
		this->next = 0;
	}
	static void print(){
		member * uk; // вспомогательный указатель
		uk = first_memb;
		if (uk == 0) cout << "Empty list!";
		else
		while (uk != 0){
			cout << uk->letter << '\t';
			uk = uk->next;
		}
		cout << '\n';
	}
	static void printOdd(){
		member * uk; // вспомогательный указатель
		uk = first_memb;
		if (uk == 0) cout << "Empty list!";
		else
		while (uk != 0){
			cout << uk->letter << '\t';
			uk = (uk->next)->next;
		}
		cout << '\n';
	}
	static void printBack(){
		member * uk; // вспомогательный указатель
		uk = last_memb;
		if (uk == 0) cout << "Empty list!";
		else
		while (uk != 0){
			cout << uk->letter << '\t';
			uk = uk->prev;
		}
		cout << '\n';
	}
};

member *member::first_memb = 0;
member *member::last_memb = 0;

int main()
{
	member A('a'); member B('b');
	member C('c'); member D('d');
	member E('e'); member F('f');
	member::print();
	A.add(); B.add(); C.add(); D.add(); E.add(); F.add();
	member::print();
	member::printOdd();
	member::printBack();
	return 0;
}
