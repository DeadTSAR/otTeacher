
#include <iostream>
using namespace std;
/* ���������� ����������� ������ �������
	� ��������������� �������
*/
void Xtest(int test)
{
  cout << "����� � ��������� � ����������: " << test << "\n";
  if(test) throw test; // ���������� ����������
}

int main()
{
	setlocale(LC_ALL,"Russian"); //������������ �� ������� ���������
	try { // ������  ���� try
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch (int i) { // catch ��������� ������
		cout << "����������� ����������: "<< i << "\n";
	}
	char c; cin>>c; 
	return 0;
}
