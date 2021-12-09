#include <iostream>
#include "queue.h"
#include "stack.h"

using namespace std;

int main()
{
  char *stringa = new char[101];
  cout << "inserire la stringa da controllare se è palindroma: ";
  cin >> stringa;

  queue_init();
  stack_init();

  for(int i = 0 ; stringa[i] != '\0' ; i++){
    push(stringa[i]);
    enqueue(stringa[i]);
  }
  int value;
  char value2;
  bool flag = true;

  while(top(value) && first(value2)){
    if(value != value2) flag = false;
    pop();
    dequeue();
  }

  if(flag) cout << "la stringa è palindroma" << endl;
  else cout << "la stringa non è palindroma" << endl;


  delete[] stringa;
  return 0;
}