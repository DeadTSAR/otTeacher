// Описание класса
class BOOK{
	char *Autor; // Автор
	char *Title; // Название книги
	char *Publisher; // Издательство
	int Year; // Год издания
	public:
	BOOK();
	BOOK(char *a,char *t,char *p,int y);
	~BOOK();
	void prnt();
};