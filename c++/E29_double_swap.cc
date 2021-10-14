
#include <iostream>

using namespace std;

void doubleSwap(double & a, double & b ){
  a += b;
  b = a - b;
  a -= b;
}

int main()
{
  double a, b;
  cout << "Inserire due numeri double da swappare: ";
  cin >> a >>  b;

  doubleSwap(a,b);

  cout << "i valori swappati sono: " << a << " e " << b << endl;

  return 0;
}