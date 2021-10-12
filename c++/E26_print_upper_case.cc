#include <iostream>

using namespace std;

bool isLowerCase (char c){
  return (c <= 'z' && c >= 'a');
}

void transformToUpperCase (char & c){
  c = c - 'a' + 'A';
}


int main()
{
  char carattere;
  cout << "inserire un carattere da trasforamre a upper case: ";
  cin >> carattere;

  if(isLowerCase(carattere)){
    transformToUpperCase(carattere);
    cout << "il carattere in upper case e: " << carattere << endl;
  }else{
    cout << "il carattere inserito non e un carattere minuscolo" << endl;
  }

  return 0;
}