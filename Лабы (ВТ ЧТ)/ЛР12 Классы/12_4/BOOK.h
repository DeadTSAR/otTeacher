// �������� ������
class BOOK{
	char *Autor; // �����
	char *Title; // �������� �����
	char *Publisher; // ������������
	int Year; // ��� �������
	public:
	BOOK();
	BOOK(char *a,char *t,char *p,int y);
	~BOOK();
	void prnt();
};