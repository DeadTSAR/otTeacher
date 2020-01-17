// ConsoleApplication5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string operator *(const string & str, int n){
	string newString;
	for (int i = 0; i < n; i++){
		newString += str;
	}
	return newString;
}

int _tmain(int argc, _TCHAR* argv[])
{
	string S1; // Empty string
	string S2("Example");
	string S3("Example", 4);
	cout << S2 << " " << S3 << endl;

	string S4(S3); // S4 == string("Exam")
	string S5(S2, 4);
	cout << S5 << endl; // Oops: Exam - > ple

	string S6(8, '#');
	cout << S6 << endl;

	// В стиле Си
	char charmas[14] = "Hello, world!";
	//charmas = "Hello";
	strcpy_s(charmas, "Hello");
	cout << charmas << endl;

	// В стиле Си++
	S6 = S2 + "Hello"; // верно
	cout << S6 << endl;
	// S6 = "Example" + "Hello"; // неверно
	S6 = string("Example") + "Hello";
	cout << S6 << endl;
	cout << ("Example" + 3) << endl;

	try{
		cout << S6[0] << S6[1]; // bad: << S6[200] << endl;
	}
	catch (...){
		cout << "exception!!!\n";
	}

	try{
		cout << S6.at(0) << S6.at(1) << S6.at(200) << endl;
	}
	catch (const out_of_range & ex){
		cout << "exception: " << ex.what() << endl;
	}

	S6 += "Hello";
	S6.append("Hello");
	cout << S6 << endl;

	string string1("1234567890");
	string string2;
	string2.assign(begin(string1) + 1, end(string1) - 1);
	cout << string2 << endl;
	string2.resize(11, '&');
	cout << string2 << endl;
	cout << "string2.capacity() = " << string2.capacity() << endl;

	vector<int> vector1 = {1, 2, 3, 4, 5, 6};
	vector<int> vector2(begin(vector1) + 2, end(vector1) - 2);
	for (const auto & item : vector2){
		cout << item << " ";
	}
	cout << endl;

	string string3("123456");
	string string4("abcdef");
	string3.insert(begin(string3) + 3, begin(string4) + 2, end(string4) - 2);
	cout << string3 << endl;

	// Замена подстрок
	string str("one two three four one two ");
	string strForReplace("o");
	string newString("oo");

	string::size_type i;
	i = str.find(strForReplace, 0);
	while (i != string::npos){
		str.replace(i, strForReplace.size(), string(newString));
		i = str.find(strForReplace, i + newString.size());
	}
	cout << str;

	string myStr("!");
	cout << (myStr * 5);

	return 0;
}