
#include<iostream>
using namespace std;

char *RusOut(char ss[],char s[])  
{//Функция выполняет обратное перекодирования 
	int i;
	for (i=0;s[i] != '\0'; i++)
	{
		if (s[i]>= -64 && s[i] <= -17)
			ss[i]=(-64+s[i]); //А..п
		else if (s[i]>= -16 && s[i] <= 0)
			ss[i]=(char)(-16+s[i]); //р..я
		else if (s[i] == -72)
			ss[i]=(char)(-15); //ё
		else if (s[i] == -88)
			ss[i]=(char)(-16); //Ё
		else 
			ss[i]=s[i];
	}
	ss[i]='\0';
	return ss;
}//char *RusOut(char ss[],char s[]) 

void OutPuts(char s[],int f='\n')
{//преобразование к коду вводимых русских и вывод
	char sd[257]; 
	RusOut(sd,s);
	if(f!='\n')
		printf("%s",sd);
	else
		puts(sd);
}


bool zifra(char *s,int k)
{//подпрограмма анализа количества цифр в слове
	int n;		
	n=0; //текущее количество цифровых символов		
	for (int j=0; j<strlen(s) && n<k; j++) 
	{ 
		if (s[j]>='0'&&s[j]<='9') //анализ очередного символа на цифру
			n++;	
	}
	if (n>=k) 
		return true; 
	else 
		return false;
}


void main(){

	const int nn=250;//максимальная длина строки символов
	char 
		s[nn], //исходная строка символов
  *sl[nn/2], //массив указателей на слова строки
  *c, //указатель на текущее слово
  *zif[nn/2]//массив указатель на слова, удовлетворяющие условию
		
		;
	int m,i,n,k;

	//Ввод исходных данных
	OutPuts("Подготовьте текст и нажмите Enter:");
	gets(s);
	OutPuts("\nКонтрольный вывод:");	
	puts(s);
	OutPuts("\nВведите количество цифр: ",0);	
	scanf("%d",&k);
	//Выделение слов
	c=strtok(s," ,.?!;:");
	m=0;
	while (c!=NULL)
	{ 
		sl[m]=c;
		m++;
		c=strtok(NULL," ,.?!;:");
	}
 //Вывод результата по выделению слов
	if (m==0) 
		OutPuts("\nВ строке нет слов:\n");
	else 
	{
		//вывод найденных слов
	 	OutPuts ("\nСписок найденных слов:");
		for (i=0;i<m;i++)
			printf("%s\n",sl[i]);
		//поиск слов с количеством цифр, большим заданного k
		n=0;
		for (i=0;i<m;i++) //цикл по всем выделенным словам
			if (zifra(sl[i],k))
			{ 
				zif[n]=sl[i];//занесение слова, удовлетворяющего условию, в 
							 //результирующий массив
				n++;
		}
		if (n>0)
		{	
			//вывод слов с количеством цифр, большим заданного k
	 		OutPuts ("\nСписок слов с количеством цифр, большим заданного ",0);
			printf("k=%d:\n",k);
		 for(i=0;i<n;i++)
				printf("%s\n",zif[i]);
		}
		else 
	 		printf("%s k=%d %s\n",RusOut(s,"\nСлов с количеством цифр, большим заданного "),k,RusOut(&s[50]," НЕТ!\n"));
	}



	system("pause");
}
