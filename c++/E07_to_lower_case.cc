#include <iostream>

using namespace std;

int main()
{
  char carattere;
  cout << "Inserire il carattere da rendere minuscolo" << endl;
  cin >> carattere;
  cout << char(carattere + 32) << endl;

  return 0;
}
