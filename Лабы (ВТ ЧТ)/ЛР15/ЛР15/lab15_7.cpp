#include<iostream>
using namespace std;
/* ��������� ������ ����
���������� ����������� ��������� ����������
*/
int cmp(const void *p1,const void *p2){
	// ������� ����������� compare ��� ���� ��������� ����������
	return strcmp((char*) p1,(char*)p2);
}

void main(){
	// ��������� ������ �� ���� � ���������� ����� ����� �������
	char text[][12]={"Edgar", "Alfred", "Galahad", "Emma", "Arthur",
		"Albert", "Lancelot", "Matilda", "Maud", "Rosabel",
		"Esmond", "Lorna", "Alice", "Clara", "Matilda",
		"Reginald", "Pamela", "Wendy", "Candida", "Clarinda", 
		"Edna", "Joyce","Belinda","Romola","Pamela","Sybil", "Sibley",
		"Fleur"
	};
	int nt=sizeof(text)/sizeof(text[0]);
	qsort(text,nt,12,&cmp); // ����������� ������� ����������
	// ������������� ���������
	for(int i=0; i<nt; i++)
		cout<<text[i]<<endl;
	system("pause");
}
// ������������ ������� ����������

