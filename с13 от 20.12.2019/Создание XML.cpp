// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdexcept>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
using namespace std;

class Sportsman{
public:
	string name;
	double score;
	void print() const{
		cout << name << ": " << score << endl;
	}
	Sportsman(string n, double s)
		:name(n), score(s)
	{}

	// A < B
	bool operator<(const Sportsman & s2) const{
		//		A.score    < B.score
		return this->score < s2.score;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	vector<Sportsman> Sportmans;
	Sportmans.push_back({ "Mariya", 98.8 });
	Sportmans.push_back({ "Nikolay", 90.8 });
	Sportmans.push_back({ "Vasiliy", 95.5 });

	for (const auto & person : Sportmans){
		person.print();
	}

	ofstream out("out.xml");
	out << "<sportsmans>\n";
	for (const auto & person : Sportmans){
		out << "<sportsman>";
		out << "<name>" + person.name + "</name>";
		out << "<score>" << person.score << "</score>";
		out << "</sportsman>\n";
	}
	out << "</sportsmans>";

	map<Sportsman, string> SportmansToCouch;
	SportmansToCouch.insert({ { "Mariya", 98.8 }, "Elizaveta" });
	SportmansToCouch.insert({ { "Nikolay", 90.8 }, "Elizaveta" });
	SportmansToCouch.insert({ { "Vasiliy", 95.5 }, "Ivan" });
	for (const auto & personAndCouch : SportmansToCouch){
		cout << "Couch " << personAndCouch.second << " couches ";
		personAndCouch.first.print();
	}

	return 0;
}