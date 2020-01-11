/*
	—формировать текстовый файл, в который записать фамилии людей и их заработную плату за мес€ц. 
	¬ывести на экран фамилию человека с самым высоким доходом.
*/
#include<iostream>
#include<fstream>
#include <istream>
#include<string>


using namespace std;

class Person {
private:

	string name;
	int wages;

public:

	string getName() {
		return this->name;
	}

	int getWages() {
		return wages;
	}

	Person(string name = "", int wages = 0): name(name), wages(wages)
	{
	}

	~Person() 
	{
	}

	friend ostream& operator << (ostream& os, Person& p);
	friend istream& operator >> (istream& is, Person& p);

};

ostream& operator<< (ostream& os, Person& p) {
	os << p.name << " " << p.wages;
	return os;
}

istream& operator>> (istream& is, Person& p) {

	is >> p.name >> p.wages;
	return is;
}

Person& findMaxWages(Person* p, int N) {
	int max = p[0].getWages();
	int index;
	for (int i = 0; i < N; i++) {
		if (max < p[i].getWages()) {
			max = p[i].getWages();
			index = i;
		}
	}
	return p[index];
}

int main() {

	const int N = 3;

	Person* p1 = new Person[N];
	for (int i = 0; i < N; i++) {
		cin >> p1[i];
	}	
	for (int i = 0; i < N; i++) {
		cout << p1[i] << endl;
	}

	fstream file1;
	file1.open("test.txt");
	if (!file1) {
		cout << "File not found";
	}
	for (int i = 0; i < N; i++) {
		file1 << p1[i] << endl;
	}
	file1.close();
	
	Person* p2 = new Person[N];
	file1.open("test.txt");
	for (int i = 0; i < N; i++) {
		file1 >> p2[i];
	}
	file1.close();

	cout << findMaxWages(p2, N);
	
	system("PAUSE");
}