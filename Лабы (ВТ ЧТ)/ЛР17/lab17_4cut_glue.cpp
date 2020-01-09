#include<iostream>
using namespace std;
/* Программа разрезания и склеивания файлов
Можно указать имя произвольного файла, 
затем указать размер на который надо поделить
исходный файл. Будет создано требуемое количество
выходных файлов.
Предусмотрена обратная операция: из множества
предварительно созданных файлов собрать исходный  
*/
void cutfile(char* fname,int size);
void stickfile(char *fname);
void main(){ 
	cout<<"Filename=";
	char fname[32];
	cin>>fname; // Вводится имя файла
	// Ввести функцию c (разрезать) или s (склеить) файл
	cout<<"Cat or Glue (c, g)="; 
	char s;
	cin>>s;
	int size;
	switch(s){
		case 'c': cout<<"size="; 
			// Ввести размер выходных файлов
			cin>>size; 
			// Запуск функции для разрезания
			cutfile(fname,size); 
			break;
			// Запуск функции для склеивания
		case 'g': stickfile(fname); 
			break; // 
		default: return;
	}
}

// Функция разрезания файлов
void cutfile(char* fname,int size){ 
	// Открываем исходный файл
	FILE *f=fopen(fname,"rb"); 
	if(!f)return;
	char name[32];
	int nf=0;
	// Выбираем имя входного файла до расширения
	for(int i=0;i<sizeof(name);i++){
		// если имя файла - "m23.mp3", то выбираем "m23."
		name[i]=fname[i];			
		if(name[i]=='.'){nf=i;break;}
	}
	if(nf==0)return;
	char bufer;
	for(int i=1;i<1000;i++){// конструируем файлы с новым расширением (m23.001,m23.002 ...)
		int i1=i/100,i2=i/10,i3=i; i2%=10; i3%=10;
		name[nf+1]=48+i1; name[nf+2]=48+i2; name[nf+3]=48+i3; name[nf+4]=0;
		/* открываем файл с новым именем и перезаписываем 
		   туда часть файла*/
		FILE *fo=fopen(name,"wb"); 
		for(int j=0;j<size;j++){	
			// Если входной файл исчерпан - выход
			if(!fread(&bufer,1,1,f)){fclose(f); fclose(fo); return;} 
			fwrite(&bufer,1,1,fo);
		}
		fclose(fo);
	}
}

/* Функция склеивания файлов
   Открываем выходной файл */
void stickfile(char *fname){ 
    FILE *f=fopen(fname,"wb"); 
	if(!f)return;
	char name[32];
	int nf=0;
	// Выбираем имя файла до расширения
	for(int i=0;i<sizeof(name);i++){
		name[i]=fname[i];
		if(name[i]=='.'){nf=i;break;}
	}
	if(nf==0){fclose(f); return;}
	char bufer;
	// Организуем цикл по входным файлам
	for(int i=1;i<1000;i++){ 
		int i1=i/100,i2=i/10,i3=i; i2%=10; i3%=10;
		name[nf+1]=48+i1; name[nf+2]=48+i2; name[nf+3]=48+i3; name[nf+4]=0;
		// Если очередной файл отсутствует, то выход
		FILE *fi=fopen(name,"rb");  
		if(!fi){fclose(f); return;}
		// Читаем очередной кусок и переписываем его в выходной файл
		while(1){ 
			if(!fread(&bufer,1,1,fi))break;
			fwrite(&bufer,1,1,f);
		}
		fclose(fi);
	}
}

