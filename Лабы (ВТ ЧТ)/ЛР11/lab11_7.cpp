
#include <iostream>
using namespace std;
// ������������ ������ ��������� ����������.
void main()
{
	setlocale(LC_ALL,"Russian"); //������������ �� ������� ���������

	try { // ������  ���� try
		cout << "�������� ��������� ����������\n";
		throw 99; // throw ���������� ���������
		cout << "��� ������ �� ������\n";
	}
	catch (int i) { // �������������� ����������
		cout << "���������� � "<< i << "\n";
	}
	char c; cin>>c; 
}
