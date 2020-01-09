#include "stdafx.h"
#include <iostream>
using namespace std;
/* Текстовый массив полностью пишем в файл
в бинарном виде
*/
void main(){
	char mas[][16]={ 
		"Canterbury", "Bath", "Liverpool", "Swindon", "Ipswich",	 
		"Cheltenham", "York", "Cambridge", "Salisbury", "London",
		"Birmingham", "Bolton", "Chester", "Leeds", "Luton", 
		"Brighton", "Coventry", "Plymouth", "Crosby", "Nottingham", 
		"Bristol", "Windsor", "Gloucester", "Derby", "Dover", "Colchester",	
		"Manchester", "Newcastle", "Oxford", "Portsmouth", "Reed", 
		"Sheffield"};
	FILE *f;
	f=fopen("New.txt","wb");
	unsigned char b;
	fwrite(&mas,1,sizeof(mas),f);
	fclose(f);
}