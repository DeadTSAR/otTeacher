#include "stdafx.h"
#include <iostream>
using namespace std;
/* Текстовый массив компактно пишем в файл
в бинарном виде
*/
void main(){
	char mas[][14]={ 
		"Canterbury", "Bath", "Liverpool", "Swindon", "Ipswich",	 
		"Cheltenham", "York", "Cambridge", "Salisbury", "London",
		"Birmingham", "Bolton", "Chester", "Leeds", "Luton", 
		"Brighton", "Coventry", "Plymouth", "Crosby", "Nottingham", 
		"Bristol", "Windsor", "Gloucester", "Derby", "Dover", "Colchester",	
		"Manchester", "Newcastle", "Oxford", "Portsmouth", "Reed", 
		"Sheffield"};
	int nm=sizeof(mas)/sizeof(mas[0]);

	FILE *f;
	f=fopen("New.txt","wb");
//	unsigned char b;
	for(int i=0;i<nm; i++){
		fwrite(&mas[i],1,strlen(mas[i])+1,f);
	}
	fclose(f);
}