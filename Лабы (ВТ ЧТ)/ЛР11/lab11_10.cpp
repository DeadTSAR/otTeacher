
#include <iostream>
using namespace std;
// �������� ������ ������.
void main()
{
	setlocale(LC_ALL,"Russian"); //������������ �� ������� ���������
	try { // ������  ���� try
		throw "�������� ����������";
	
		cout<<"��������� ������ �� �����\n";
	}
	catch(int n){
		cout<<n<<endl;
	}
	catch(char *s){
		cout<<s<<endl;
	}
	catch (...) { // �������������� ���������� ����������
		cout << "����������\n";
	}
	char c; cin>>c; 
}
