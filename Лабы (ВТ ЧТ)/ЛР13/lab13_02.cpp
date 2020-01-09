#include "stdafx.h"
#include <iostream>
using namespace std;

class member{
   static member *last_memb;
   member *prev, *next;
   char letter;
public:
   member(char cc) {letter = cc;}
   void add(void){
      if(last_memb==0) this->prev=0;
      else {last_memb -> next = this; this -> prev = last_memb;}
      last_memb = this;
      this -> next = 0;
   }
   static void print(){
      member * uk; // вспомогательный указатель
      uk = last_memb;
      if(uk==0) cout << "Empty list!";
      else
      while(uk!=0){
         cout << uk -> letter << '\t';
         uk = uk -> prev;
      }
   cout << '\n';
   }};

   member *member::last_memb = 0;
int main()
{
member A('a'); member B('b');
member C('c'); member D('d');
member::print();
A.add(); B.add(); C.add(); D.add();
member::print();

system("pause");
return 0;
}
