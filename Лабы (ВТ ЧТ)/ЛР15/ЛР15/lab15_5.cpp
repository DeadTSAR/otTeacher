#include<iostream>
using namespace std;
/* 
Функция конкатенации
Буфер передаётся через входной параметр
*/
char* concat(char t1[],char t2[],char bufer[]){
	// Функция конкатенации 
	int n=0;
	for(int i=0; t1[i]!=0; i++)
		bufer[n++]=t1[i];
	for(int i=0; t2[i]!=0; i++)
		bufer[n++]=t2[i];
	bufer[n]=0;
	return bufer;
}
void main(){
	char t1[16],t2[16],bufer[256];
	cout<<"Program string concatenation\n";

	while(1){
		cout<<"Type a word1 or 0 to complete\n";
		cin>>t1;
		if(t1[0]=='0')break;
		cout<<"Type a word2 or 0 to complete\n";
		cin>>t2;
		if(t2[0]=='0')break;
		cout<<"The result of the concatenation:\t"<<concat(t1,t2,bufer)<<endl;		
	}
}