#include <iostream>

using namespace std;

int main()
{
  int secondi, minuti, ore;
  cout << "inserire i secondi minuti e ore dell'orario desiderato: ";
  cin >> secondi >> minuti >> ore;

  minuti+=secondi/60;
  secondi%=60;

  ore+=minuti/60;
  minuti%=60;

  cout << "il tempo senza overflow è di: " << secondi << " secondi, " << minuti << " minuti, " << ore << " ore" << endl;
  return 0;
}