// ConsoleApplication64.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <exception>
using namespace std;

int main(){
	
	try{
		cout << "Input age from 0 to 100" << endl;
		int age;
		cin >> age;
		if (age > 100 || age < 0)
			throw out_of_range("Invalid age");
		vector<int> v(5, 0); //{0, 0, 0, 0, 0}
		cout << v.at(6);
	}
	catch (const out_of_range & ex){
		cout << "out_of_range exception: " << ex.what() << endl;
	}
	catch (const exception & ex){
		cout << ex.what() << endl;
	}
	catch (...){
		cout << "Unexpected exception" << endl;
	}

	return 0;
}