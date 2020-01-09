
#include <iostream>
using namespace std;
// Проверка работы блоков.
void main()
{
	setlocale(LC_ALL,"Russian"); //переключение на русскую кодировку
	try { // Начать  блок try
		throw "Возникло исключение";
	
		cout<<"Программа прошла до конца\n";
	}
	catch(int n){
		cout<<n<<endl;
	}
	catch(char *s){
		cout<<s<<endl;
	}
	catch (...) { // Обрабатывается оставшиеся исключение
		cout << "Исключение\n";
	}
	char c; cin>>c; 
}
