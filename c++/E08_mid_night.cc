#include <iostream>

using namespace std;

int main()
{
  int secondi_input,secondi,minuti,ore;
  cout << "Inserire it secondi passati da mezzanotte in secondi: ";
  cin >> secondi_input;
  secondi=secondi_input%60;
  secondi_input/=60;
  minuti=secondi_input%60;
  secondi_input/=60;
  ore=secondi_input%24;
  cout << "il secondi_input è: " << ore <<":"<< minuti <<":"<< secondi <<":"<<endl;

  return 0;
}
