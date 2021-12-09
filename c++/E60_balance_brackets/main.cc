#include "stack.h"
#include <iostream>

using namespace std;

int main(){
  char string[101];

  cout << "inserire al massimo 100 parentesi tonde: ";
  cin >> string;

  init();
  bool balanced=true;
  int value;

  for(int i = 0; string[i] != '\0'; i++){
    if(string[i] == '(') push(string[i]);
    
    if(string[i] == ')'){
      if(top(value)) pop();
      else balanced = false;
    }
  }

  if(top(value)) balanced = false;

  if(balanced){
    cout << "Le parentesi sono bilanciate" << endl;
  }else{
    cout << "Le parentesi non sono bilanciate" << endl;
  }

}