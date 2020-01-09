#include "stdafx.h"
#include<iostream>

using namespace std;
/* Из существующего файла читаем записи
и отображаем их на монитор
*/
void main(){
	FILE *f=fopen("hello.txt","r");
	char bufer[256];
	if(f)
	{
		while(1){
			fgets(bufer,255,f); // Читаем очередную запись
			if(feof(f))break; // Если достигнут конец файла
			int n=strlen(bufer);
			bufer[n-1]=0;
			cout<<"Long: "<<strlen(bufer)<<"\t"<<bufer<<endl;	
		}
	}
	cin>>bufer;
	fclose(f);
}