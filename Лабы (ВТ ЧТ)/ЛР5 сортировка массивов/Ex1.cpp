// Ex1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include <iostream>
#include<time.h>
using namespace std;
/* ���������� � ������� ������������ ��������
	�� ���� ���������� ����������� ������� 
	� �������� � ������� ����� ������� */
# define N 10
void prnt(int m[],int n);
void sort1(int m[],int n){
	
	for(int i=0;i<n;i++){
		// ���������� ����������� ������� � �������
		int imin = i;
		for(int j=i+1;j<n;j++){
			if(m[imin]>m[j])imin=j;
		}
		if(imin!=i){
			// ����������� ������� ���������������
			// � ������� ����� �������
			int a=m[i]; m[i]=m[imin]; m[imin]=a;
		}
		//prnt(m,n);
		//system("pause");
	}
}
void main(){
	int mas[N],nms=N;
	srand((int)time(NULL));
	for(int i=0;i<N;i++){
		mas[i]=(int)rand()%10;
	}
	prnt(mas,nms);
	cout<<endl;
	sort1(mas,nms);
	prnt(mas,nms);
	system("pause");
}
void prnt(int m[],int n){
	// ������� ���������� �������
	for(int i=0; i<n; i++)
		cout<<m[i]<<"\t";
	cout<<endl;
}

    


