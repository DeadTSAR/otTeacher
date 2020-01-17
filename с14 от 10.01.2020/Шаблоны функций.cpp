// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
#include <tuple>
using namespace std;

//template<typename T1, typename T2, int i>
//void printMap(map<T1, T2> m){
//	for (const auto & item : m){
//		cout << item.first << " " << item.second << endl;
//	}
//	cout << i << endl;
//}

template<typename T1, typename T2>
void printMap(map<T1, T2> m){
	for (const auto & item : m){
		cout << item.first << " " << item.second << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	map<string, double> goods = {
		{string("Bonbon"), 600},
		{string("Milk"), 50.5},
		{string("Meat"), 505.9 },
		{string("Cake"), 1000 }
	};

	printMap(goods);
	//printMap<string, double, 4>(goods);

	string s("123");
	double d = 5.5;
	int i = 6;
	tuple<string, double, int> myTuple = make_tuple(s, d, i);
	cout << get<1>(myTuple) << endl;

	getchar();
	return 0;
}
