// lab 7.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
using namespace std;
// Демонстрация рекурсии
// Вычисляется факториал

int factr(int n);
int fact(int n);

int main()
{
  // Используется рекурсивная версия
  cout << "4 factorial is " << factr(4);
  cout << '\n';

  // Используется итеративная версия
  cout << "4 factorial is " << fact(4);
  cout << '\n';
  char c;
  cin>>c;
  return 0;
}

// Рекурсивная версия.
int factr(int n) 
{
  int answer;
  if(n==1) return(1);
  answer = factr(n-1)*n;
  return(answer);
}

// Итеративная версия.
int fact(int n)
{
  int t, answer;

  answer = 1;
  for(t=1; t<=n; t++) answer = answer*(t);
  return(answer);
}
