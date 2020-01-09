
#include <iostream>
using namespace std;
/* Исключение срабатывает внутри функции
	а перехватывается снаружи
*/
void Xtest(int test)
{
  cout << "Вошли в программу с параметром: " << test << "\n";
  if(test) throw test; // Генерируем исключение
}

int main()
{
	setlocale(LC_ALL,"Russian"); //переключение на русскую кодировку
	try { // Начать  блок try
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch (int i) { // catch принимает ошибку
		cout << "Перехвачено исключение: "<< i << "\n";
	}
	char c; cin>>c; 
	return 0;
}
