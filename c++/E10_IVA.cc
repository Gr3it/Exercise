#include <iostream>

using namespace std;

int main()
{
  double prezzo,iva;
  cout << "inserire il prezzo e  l'iva: ";
  cin >> prezzo >> iva;
  cout.precision(2);
  cout << fixed;
  cout << prezzo+(prezzo*iva/100) << endl;

  return 0;
}
