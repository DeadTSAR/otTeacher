
#include<iostream>
// ������������� ��������� ����������
template <class T> 
void sort(T mas[], int n)
{
	// mas[]- ������ �������� ���� T
	// n - ������ �������
	for(int i=0; i<n; i++){
		// ���� ���������� ��������
		int im=i;
		for(int j=i+1; j<n; j++)
			if(mas[im]>mas[j]) im=j;
		if(im==i)continue;
		// ������������ �������
		T a=mas[i];
		mas[i]=mas[im];
		mas[im]=a;
	}  
}
// ���� �� ���������� ��� �������, ��������� ������ ��������������
void empty(){
	int mas[1];
	sort(mas,1);
	double dmas[1];
	sort(dmas,1);
}
