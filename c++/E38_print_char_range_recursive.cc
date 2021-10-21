#include <iostream>

using namespace std;

void recursiveCharPrint (char c1,char c2){
  if(c1>c2) {return;}
  recursiveCharPrint(c1,c2 - 1);
  cout << c2;
}

int main()
{
  char carattere1, carattere2;
  cout << "inserire due caratteri di cui stampare il caratteri in mezzo: ";
  cin >> carattere1 >> carattere2;

  recursiveCharPrint(carattere1,carattere2);

  cout << endl;

  return 0;
}