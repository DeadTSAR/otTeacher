#include<iostream>
using namespace std;
/* ��������� ���������� � ���������� ������
����� ������� ��� ������������� �����, 
����� ������� ������ �� ������� ���� ��������
�������� ����. ����� ������� ��������� ����������
�������� ������.
������������� �������� ��������: �� ���������
�������������� ��������� ������ ������� ��������  
*/
void cutfile(char* fname,int size);
void stickfile(char *fname);
void main(){ 
	cout<<"Filename=";
	char fname[32];
	cin>>fname; // �������� ��� �����
	// ������ ������� c (���������) ��� s (�������) ����
	cout<<"Cat or Glue (c, g)="; 
	char s;
	cin>>s;
	int size;
	switch(s){
		case 'c': cout<<"size="; 
			// ������ ������ �������� ������
			cin>>size; 
			// ������ ������� ��� ����������
			cutfile(fname,size); 
			break;
			// ������ ������� ��� ����������
		case 'g': stickfile(fname); 
			break; // 
		default: return;
	}
}

// ������� ���������� ������
void cutfile(char* fname,int size){ 
	// ��������� �������� ����
	FILE *f=fopen(fname,"rb"); 
	if(!f)return;
	char name[32];
	int nf=0;
	// �������� ��� �������� ����� �� ����������
	for(int i=0;i<sizeof(name);i++){
		// ���� ��� ����� - "m23.mp3", �� �������� "m23."
		name[i]=fname[i];			
		if(name[i]=='.'){nf=i;break;}
	}
	if(nf==0)return;
	char bufer;
	for(int i=1;i<1000;i++){// ������������ ����� � ����� ����������� (m23.001,m23.002 ...)
		int i1=i/100,i2=i/10,i3=i; i2%=10; i3%=10;
		name[nf+1]=48+i1; name[nf+2]=48+i2; name[nf+3]=48+i3; name[nf+4]=0;
		/* ��������� ���� � ����� ������ � �������������� 
		   ���� ����� �����*/
		FILE *fo=fopen(name,"wb"); 
		for(int j=0;j<size;j++){	
			// ���� ������� ���� �������� - �����
			if(!fread(&bufer,1,1,f)){fclose(f); fclose(fo); return;} 
			fwrite(&bufer,1,1,fo);
		}
		fclose(fo);
	}
}

/* ������� ���������� ������
   ��������� �������� ���� */
void stickfile(char *fname){ 
    FILE *f=fopen(fname,"wb"); 
	if(!f)return;
	char name[32];
	int nf=0;
	// �������� ��� ����� �� ����������
	for(int i=0;i<sizeof(name);i++){
		name[i]=fname[i];
		if(name[i]=='.'){nf=i;break;}
	}
	if(nf==0){fclose(f); return;}
	char bufer;
	// ���������� ���� �� ������� ������
	for(int i=1;i<1000;i++){ 
		int i1=i/100,i2=i/10,i3=i; i2%=10; i3%=10;
		name[nf+1]=48+i1; name[nf+2]=48+i2; name[nf+3]=48+i3; name[nf+4]=0;
		// ���� ��������� ���� �����������, �� �����
		FILE *fi=fopen(name,"rb");  
		if(!fi){fclose(f); return;}
		// ������ ��������� ����� � ������������ ��� � �������� ����
		while(1){ 
			if(!fread(&bufer,1,1,fi))break;
			fwrite(&bufer,1,1,f);
		}
		fclose(fi);
	}
}

