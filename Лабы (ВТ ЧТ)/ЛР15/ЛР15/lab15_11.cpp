
#include<iostream>
using namespace std;


char *RusIn(char ss[],const char s[])  
{//
//������� ��������������� ���������: �������� s, ������� ss  
 //������������� ����� ����� � s 
	int i;
	for (i=0;s[i] != '\0'; i++)
	{
		if (s[i] >= -128 && s[i] <= -81)
			ss[i] = (char)(64+s[i]);//�..�
		else if (s[i] <= -17 && s[i] >= -32) 
			ss[i] =  (char)(16+s[i]);//�..�
		else if (s[i] == -15) //�
			ss[i] =  (char)(-72);
		else if (s[i] == -16) //�
			ss[i] = (char)(-88);
		else
			ss[i]= s[i];//��������� �������
	}
	ss[i]='\0';
	return ss;
}

void GetsIn(char ss[],char s[])
{//���� � s � ��������������� ��������� � ss
	char sd[257];
	gets(s);
	RusIn(ss,s);
}

char *RusOut(char ss[],char s[])  
{//������� ��������� �������� ��������������� 
	int i;
	for (i=0;s[i] != '\0'; i++)
	{
		if (s[i]>= -64 && s[i] <= -17)
			ss[i]=(-64+s[i]); //�..�
		else if (s[i]>= -16 && s[i] <= 0)
			ss[i]=(char)(-16+s[i]); //�..�
		else if (s[i] == -72)
			ss[i]=(char)(-15); //�
		else if (s[i] == -88)
			ss[i]=(char)(-16); //�
		else 
			ss[i]=s[i];
	}
	ss[i]='\0';
	return ss;
}//char *RusOut(char ss[],char s[]) 

void OutPuts(char s[],int f='\n')
{//�������������� � ���� �������� ������� � �����
	char sd[257]; 
	RusOut(sd,s);
	if(f!='\n')
		printf("%s",sd);
	else
		puts(sd);
}


void main(){

	char 
		s[100][20],//������ �� ����� ����
		smax[20], //��� ����� � ������������ ����������� ������� ����
		cc
		;
	int
		ns,//���������� �������� � s ����
		nmax,//������� ������������ ����������� ���� � � �
		imax,//����� ����� ����� � ������� s
		lmax,//����� ����� �����
		i,j,k
		;
/* ������ ��� �������
�������, ������������: ����������� ������� ����.
*/
//���� 1
	//���� ���� � ������� s[i],i=0,1,2,.. � ������� �� ���������� ns
	
	OutPuts("������� �����");
	for(i=0;;i++)
	{
		scanf("%s%c",s[i],&cc);
//		printf("%s%d\n",s[i],cc);//��� �������
		RusIn(s[i],s[i]);//������������� ��� ��������� � �����������
		if(cc==10)
		{
			ns=i;
//			printf("ns=%d\n",ns+1);//��� �������
			break;
		}
	}
//���� 2
	//����� ����� � ������������ ����������� ���� � � �
	ns++;
	nmax=0;
	for(i=0;i<ns;i++)
	{
		k=0;
		for(j=0;s[i][j]!=0;j++)
		{
			
			switch(s[i][j])
			{
				case '�':case '�':case '�':
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
//���� 3
	if(nmax==0)
		//���������� ����� ��������� ��������� � �������� ������� 
		OutPuts("��� ���� � ������� � � �");
	else
	{
		if(s[imax][lmax-1]>32)
			s[imax][lmax-1]=0;//������� ���� ����������
		//����������� ������ � s[imax] ��� ������ � �������
		OutPuts("��������� �����:");
		OutPuts(s[imax]);
	}


	system("pause");
}
