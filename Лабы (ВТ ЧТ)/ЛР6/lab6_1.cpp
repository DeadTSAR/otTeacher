#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
//#define X 100
//#define Y 100
using namespace std;

bool GameOver;
const int Width = 20; 
const int Height = 16;
int x, y, fruitX, fruitY, score;
int Mass_X[100], Mass_Y[100], nMASS;
enum Edirect{
	STOP=0, LEFT, RIGHT, UP, DOWN};
Edirect dir;

void Setup() {
	GameOver = false;
	dir = STOP;
	x = Width / 2 -1;
	y = Height / 2 -1 ;
	fruitX = rand() % Width;
	fruitY = rand() % Height;
	score = 0;
}
void Drow() {
	system("cls");
		for (int i = 0; i < Width+1; i++) {
		cout << "#";
		}cout << endl;

	for ( int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			if (j == 0 || j == Width - 1) 
				cout << "#";
			if (i == y && j == x)
				cout << "0";
			else if (i == fruitY && j == fruitX )
			cout << "F";
			else {
				bool print = false;
				for (int k = 0; k < nMASS ; k++)	{					
					if (Mass_X[k] == j && Mass_Y[k] == i) {
						print = true;
						cout << "o";
					}
						
				}
				if (!print)
					cout << " ";
			}
	
		}
		cout << endl;
	}

	for (int i = 0; i < Width+1; i++) {
		cout << "#";
	}cout << endl;
	cout << "score: " << score << endl;
}

void Input() {
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a':
		dir = LEFT; 
		break;
		case 'd':
		dir = RIGHT; 
		break; 
		case 'w':
		dir = UP; 
		break;
		case 's':
		dir = DOWN;
		break;
		case 'o': 
			GameOver = true;
			break;
		
		}
	}
}
void Logic() {
	int pref_X = Mass_X[0];
	int pref_Y = Mass_Y[0];
	int pref_2X, pref_2Y;
	Mass_X[0] = x;
	Mass_Y[0] = y;
	for (int i = 1; i < nMASS; i++)
	{
		/*swap(pref_2X, Mass_X[i]);
		swap(pref_2Y, Mass_Y[i]);*/

		pref_2X = Mass_X[i];
		pref_2Y = Mass_Y[i];
		Mass_X[i] = pref_X;
		Mass_Y[i] = pref_Y;
		pref_X = pref_2X;
		pref_Y = pref_2Y;

	}

	switch (dir)
	{
	
	case LEFT:
		x--;
		break;
	case RIGHT:
		x++;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	
	}
	/*if (x > Width || x<0 || y>Height||y<0)
	
		GameOver = true;*/

	if (x >= Width-1)
		x = 0;
	else if (x < 0)
		x = Width - 2;
	if (y >= Height)
		y = 0;
	else if (y < 0)
		y = Height -1;

	for (int i = 0; i < nMASS; i++)
	{
		if (Mass_X[i] == x && Mass_Y[i] == y)
			GameOver = true;
	}

	if (x == fruitX && y == fruitY) {
		score += 10;
		fruitX = rand() % Width;
		fruitY = rand() % Height;
		nMASS++;
	}

}


int main() {
	setlocale(LC_ALL, "Rus");
	Setup();
	while (!GameOver) {
		Drow();
		Input();
		Logic();
	}
	
	system("pause"); return 0 ;
}





//
//
//int arr[M]; // задаем массив М-значный
//
//for (int j = 0; j < M; j++) // произвольное заполнение массива
//{
//	arr[j] = rand() % 10;
//}
//
//for (int i = 0; i < M; i++)// вы вод массива
//{
//
//	cout << arr[i] << " ";
//}
//cout << endl;
//
//
//for (int i = 0; i < M - 1; i++)
//{
//	for (int j = 0; j < M - i - 1; j++)
//	{
//		if (arr[j] > arr[j + 1])
//		{
//			swap(arr[j], arr[j + 1]);
//		}
//	}
//}
//
//for (int i = 0; i < M; i++)// вы вод массива
//{
//	cout << arr[i] << " ";
//}
//cout << endl;




//if (_kbhit()) {
//	switch (_getch())
//	{
//	case 'a':	dir = left; break;
//	case 'd':	dir = right; break;
//	case 'w':	dir = up; break;
//	case 's':	dir = down; break;
//	case 'q':	GameOver = true; break;
//	}
//}