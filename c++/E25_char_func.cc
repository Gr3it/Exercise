#include <iostream>

using namespace std;

bool isLowerCase (char c){
  return (c <= 'z' && c >= 'a');
}

char toUpperCase (char c){
  return ('A' + c - 'a');
}

int main()
{
  char carattere;
  cout << "inserire il carattere da controllare se e lower case e lo stampa upper case: ";
  cin >> carattere;

  if(isLowerCase(carattere)){
    cout << "il carattere inserito e lower case" << endl;
    cout << "il carattere in upper case e: " << toUpperCase(carattere) << endl;
  }else{
    cout << "il carattere e gia maiuscolo" << endl;
  }

  return 0;
}