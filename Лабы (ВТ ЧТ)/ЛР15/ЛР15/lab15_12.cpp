
#include<iostream>
using namespace std;

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


bool zifra(char *s,int k)
{//������������ ������� ���������� ���� � �����
	int n;		
	n=0; //������� ���������� �������� ��������		
	for (int j=0; j<strlen(s) && n<k; j++) 
	{ 
		if (s[j]>='0'&&s[j]<='9') //������ ���������� ������� �� �����
			n++;	
	}
	if (n>=k) 
		return true; 
	else 
		return false;
}


void main(){

	const int nn=250;//������������ ����� ������ ��������
	char 
		s[nn], //�������� ������ ��������
  *sl[nn/2], //������ ���������� �� ����� ������
  *c, //��������� �� ������� �����
  *zif[nn/2]//������ ��������� �� �����, ��������������� �������
		
		;
	int m,i,n,k;

	//���� �������� ������
	OutPuts("����������� ����� � ������� Enter:");
	gets(s);
	OutPuts("\n����������� �����:");	
	puts(s);
	OutPuts("\n������� ���������� ����: ",0);	
	scanf("%d",&k);
	//��������� ����
	c=strtok(s," ,.?!;:");
	m=0;
	while (c!=NULL)
	{ 
		sl[m]=c;
		m++;
		c=strtok(NULL," ,.?!;:");
	}
 //����� ���������� �� ��������� ����
	if (m==0) 
		OutPuts("\n� ������ ��� ����:\n");
	else 
	{
		//����� ��������� ����
	 	OutPuts ("\n������ ��������� ����:");
		for (i=0;i<m;i++)
			printf("%s\n",sl[i]);
		//����� ���� � ����������� ����, ������� ��������� k
		n=0;
		for (i=0;i<m;i++) //���� �� ���� ���������� ������
			if (zifra(sl[i],k))
			{ 
				zif[n]=sl[i];//��������� �����, ���������������� �������, � 
							 //�������������� ������
				n++;
		}
		if (n>0)
		{	
			//����� ���� � ����������� ����, ������� ��������� k
	 		OutPuts ("\n������ ���� � ����������� ����, ������� ��������� ",0);
			printf("k=%d:\n",k);
		 for(i=0;i<n;i++)
				printf("%s\n",zif[i]);
		}
		else 
	 		printf("%s k=%d %s\n",RusOut(s,"\n���� � ����������� ����, ������� ��������� "),k,RusOut(&s[50]," ���!\n"));
	}



	system("pause");
}
