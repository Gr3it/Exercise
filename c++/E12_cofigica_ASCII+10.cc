#include <iostream>

using namespace std;

int main()
{
  char carattere;
  cout << "inserire il carattere in codifica da convertire a ASCII+10: ";
  cin >> carattere;
  cout << char(carattere + 10) << endl;
  return 0;
}