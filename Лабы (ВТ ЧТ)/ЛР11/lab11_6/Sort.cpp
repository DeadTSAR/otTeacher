
#include<iostream>
// Универсальная процедура сортировки
template <class T> 
void sort(T mas[], int n)
{
	// mas[]- массив объектов тапа T
	// n - размер массива
	for(int i=0; i<n; i++){
		// Ищем наименьшее значение
		int im=i;
		for(int j=i+1; j<n; j++)
			if(mas[im]>mas[j]) im=j;
		if(im==i)continue;
		// Переставляем объекты
		T a=mas[i];
		mas[i]=mas[im];
		mas[im]=a;
	}  
}
// Если не определить тип шаблона, возникнет ошибка редактирования
void empty(){
	int mas[1];
	sort(mas,1);
	double dmas[1];
	sort(dmas,1);
}
