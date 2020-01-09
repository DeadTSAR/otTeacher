
#include <iostream>
using namespace std;
// Демонстрация блоков обработки исключений.
void main()
{
	setlocale(LC_ALL,"Russian"); //переключение на русскую кодировку

	try { // Начать  блок try
		cout << "Работает генератор исключения\n";
		throw 99; // throw генерирует сообщение
		cout << "Эта печать не пройдёт\n";
	}
	catch (int i) { // Обрабатывается исключение
		cout << "Исключение № "<< i << "\n";
	}
	char c; cin>>c; 
}
