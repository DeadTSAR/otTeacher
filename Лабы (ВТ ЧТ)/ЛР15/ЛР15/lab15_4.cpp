
#include<iostream>
#include <windows.h> // ќб€зательное включение
using namespace std;
/* Ѕиблиотечна€ функци€а перекодировки
AnsiToOEM(AnsiStr, OemStr: PChar);
“pанслиpует AnsiStr в символьный набоp, опpеделенный OEM. ƒлина может быть больше 64 .
ѕаpаметpы:
AnsiStr: Cтpока (заканчивающа€с€ пустым символом) символов ANSI.
OEMStr: ћесто, куда копиpуетс€ отpанслиpованна€ стpока, может совпадать с AnsiStr.
¬озвpащаемое значение-1.
*/

void main(){

	char bufer[256];
	AnsiToOem("јЅ¬√ƒ≈®∆«»… ЋћЌќѕ–—“”‘’÷„ЎўЏџ№ЁёяабвгдеЄжзийклмнопрстуфхцчшщъыьэю€є",bufer);
	cout << bufer << endl;
	AnsiToOem("»спользование стандартной функции дл€ вывода текста на монитор.",bufer);
	cout << bufer << endl<< endl;
	do{	
		// ¬водим слова с клавиатуры, затем выводим на монитор
		cin>>bufer;		
		cout<<bufer<<endl;
	}while(bufer[0]!='0');

	system("pause");
}
