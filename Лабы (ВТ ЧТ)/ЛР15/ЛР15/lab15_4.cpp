
#include<iostream>
#include <windows.h> // ������������ ���������
using namespace std;
/* ������������ �������� �������������
AnsiToOEM(AnsiStr, OemStr: PChar);
�p�����p��� AnsiStr � ���������� ����p, ��p��������� OEM. ����� ����� ���� ������ 64�.
��p����p�:
AnsiStr: C�p��� (��������������� ������ ��������) �������� ANSI.
OEMStr: �����, ���� ����p����� ��p�����p������� ��p���, ����� ��������� � AnsiStr.
����p������� ��������-1.
*/

void main(){

	char bufer[256];
	AnsiToOem("�����Ũ�����������������������������������������������������������",bufer);
	cout << bufer << endl;
	AnsiToOem("������������� ����������� ������� ��� ������ ������ �� �������.",bufer);
	cout << bufer << endl<< endl;
	do{	
		// ������ ����� � ����������, ����� ������� �� �������
		cin>>bufer;		
		cout<<bufer<<endl;
	}while(bufer[0]!='0');

	system("pause");
}
