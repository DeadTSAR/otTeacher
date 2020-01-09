
#include<iostream>
using namespace std;


char *RusIn(char ss[],const char s[])  
{//
//Функция перекодирования кириллицы: источние s, приёмник ss  
 //Ииспользуется после ввода в s 
	int i;
	for (i=0;s[i] != '\0'; i++)
	{
		if (s[i] >= -128 && s[i] <= -81)
			ss[i] = (char)(64+s[i]);//А..п
		else if (s[i] <= -17 && s[i] >= -32) 
			ss[i] =  (char)(16+s[i]);//р..я
		else if (s[i] == -15) //ё
			ss[i] =  (char)(-72);
		else if (s[i] == -16) //Ё
			ss[i] = (char)(-88);
		else
			ss[i]= s[i];//остальные символы
	}
	ss[i]='\0';
	return ss;
}

void GetsIn(char ss[],char s[])
{//ввод в s и перекодирование введённого в ss
	char sd[257];
	gets(s);
	RusIn(ss,s);
}

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


void main(){

	char 
		s[100][20],//массив ля ввода слов
		smax[20], //для слова с максимальным количеством гласных букв
		cc
		;
	int
		ns,//количество введённых в s слов
		nmax,//искомое максимальным количеством букв А и Я
		imax,//место этого слова в массиве s
		lmax,//длина этого слова
		i,j,k
		;
/* строка для отладки
искомое, максимальным: количеством гласных букв.
*/
//Этап 1
	//ввод слов в массивы s[i],i=0,1,2,.. и подсчёт их количества ns
	
	OutPuts("Введите текст");
	for(i=0;;i++)
	{
		scanf("%s%c",s[i],&cc);
//		printf("%s%d\n",s[i],cc);//для отладки
		RusIn(s[i],s[i]);//перекодировка для сравнения с константами
		if(cc==10)
		{
			ns=i;
//			printf("ns=%d\n",ns+1);//для отладки
			break;
		}
	}
//Этап 2
	//поиск слова с максимальным количеством букв а ы и
	ns++;
	nmax=0;
	for(i=0;i<ns;i++)
	{
		k=0;
		for(j=0;s[i][j]!=0;j++)
		{
			
			switch(s[i][j])
			{
				case 'а':case 'ы':case 'и':
					k++;
					break;
			}
		}//for(j=0;s[i][j]!=0;j++)
		if(k>nmax)
		{	
			nmax=k;
			imax=i;
			lmax=j;
		}
	}//for(i=0;i<ns;i++)
//Этап 3
	if(nmax==0)
		//правильный вывод строковой константы с русскими буквами 
		OutPuts("Нет слов с буквами а ы и");
	else
	{
		if(s[imax][lmax-1]>32)
			s[imax][lmax-1]=0;//удалить хнак препинания
		//Подготовить строку в s[imax] для вывода и вывести
		OutPuts("Найденное слово:");
		OutPuts(s[imax]);
	}


	system("pause");
}
