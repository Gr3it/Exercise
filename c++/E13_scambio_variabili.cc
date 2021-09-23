#include <iostream>

using namespace std;

int main()
{
  double a, b;
  cout << "inserire due variabili da scambiare: ";
  cin >> a >> b;
  a+=b;
  b=a-b;
  a-=b;
  cout << a << " " << b << endl;

  return 0;
}