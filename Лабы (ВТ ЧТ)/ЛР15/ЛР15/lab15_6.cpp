#include<iostream>
using namespace std;
/* ������� ��������� �����
*/
int mstrcmp(char t1[], char t2[]){
	/* ������� ��������� �����
	�� ���� ����������� ��� ������������ �����
	�� ������ ������� 1, -1 ��� 0, � ����������� ��
	���� ������ ������ ����� �������, ����� ��� ��� 
	������ ���
	*/
	for(int i=0;;i++){
		if(t1[i]==t2[i]){
			if(t1[i]!=0)continue;
			return 0;
		}
		if(t1[i]>t2[i])return 1;
		else return -1;
	}
}
void main(){
	char t[16];
	char t1[16],t2[16],bufer[256];
	cout<<"Program string comparison\n";
	
	while(1){
		cout<<"Type a word1 or 0 to complete\n";
		cin>>t1;
		if(t1[0]=='0')break;
		cout<<"Type a word2 or 0 to complete\n";
		cin>>t2;
		if(t2[0]=='0')break;
		switch(mstrcmp(t1,t2)){
		case 0: cout<<t1<<" = "<<t2<<endl; break;
		case 1: cout<<t1<<" > "<<t2<<endl; break;
		case -1: cout<<t1<<" < "<<t2<<endl; break;
		}
				
	}

}