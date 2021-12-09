#include "queue.h"
#include <iostream>

using namespace std;

int main(){
  int scelta;
  char *name = new char[26];
  init();

  while(scelta != 0){
    cout << "Insert:" << endl << "\t0: exit" << endl << "\t1: add person" << endl << "\t2: remove person" << endl << "\t3: print" << endl;
    
    cin >> scelta;
    switch (scelta)
    {
    case 1:
      cout << "Insert person name: ";
      cin >> name;
      enqueue(name);
      cout << name << " Added to the queue" << endl;
      break;

    case 2:
      if(first(name)){
        cout << name << " has left" << endl;
        dequeue();
      }else{
        cout << "The queue is alredy empty" << endl;
      }
      break;

    case 3:
      print();
    
    default:
      break;
    }
    cout << endl;
  }

  delete name;
}