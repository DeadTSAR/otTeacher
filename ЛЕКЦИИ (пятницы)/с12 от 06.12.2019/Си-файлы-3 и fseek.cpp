// ConsoleApplication78.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
using namespace std;

struct sportsman{
	char name[20];
	unsigned int score;
};

int main()
{
	unsigned int count;
	cout << "Input count: ";
	cin >> count;

	sportsman * sp = new sportsman[count];
	cout << "Input data (name + score): ";
	for (int i = 0; i < count; i++){
		cin >> sp[i].name >> sp[i].score;
	}

	FILE * fileWrite;
	fopen_s(&fileWrite, "1.txt", "w");
	fwrite(&count, sizeof(unsigned int), 1, fileWrite); // запись кол-ва
	fwrite(sp, sizeof(sportsman), count, fileWrite); // запись спортсменов
	fclose(fileWrite);

	delete[] sp;

	unsigned int count2;
	FILE * fileRead;
	fopen_s(&fileRead, "1.txt", "r+");
	fread(&count2, sizeof(unsigned int), 1, fileRead); // получение кол-ва
	sportsman * sp2 = new sportsman[count2];
	fread(sp2, sizeof(sportsman), count2, fileRead); // запись спортсменов
	//fclose(fileRead);

	cout << "READ DATA: " << endl;
	for (int i = 0; i < count2; i++){
		cout << sp2[i].name << ' ' << sp2[i].score << endl;
	}

	unsigned int bestIndex = 0;
	for (int i = 0; i < count2; i++){
		if (sp2[i].score > sp2[bestIndex].score){
			bestIndex = i;
		}
	}

	if (fseek(fileRead, sizeof(unsigned int)+bestIndex * sizeof(sportsman), SEEK_SET) == 0)
		cout << "Success seek" << endl;
	sp2[bestIndex].score = 0;
	fwrite(&sp2[bestIndex], sizeof(sportsman), 1, fileRead);
	fclose(fileRead);

	unsigned int count3;
	FILE * fileRead2;
	fopen_s(&fileRead2, "1.txt", "r");
	fread(&count3, sizeof(unsigned int), 1, fileRead2); // получение кол-ва
	sportsman * sp3 = new sportsman[count3];
	fread(sp3, sizeof(sportsman), count3, fileRead2); // запись спортсменов
	fclose(fileRead2);

	cout << "READ DATA: " << endl;
	for (int i = 0; i < count3; i++){
		cout << sp3[i].name << ' ' << sp3[i].score << endl;
	}

	return 0;
}
