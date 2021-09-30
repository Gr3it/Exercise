#include <iostream>

using namespace std;

int main()
{
  int a,b,min,max;
  cout << "Inserire due numeri a, b: ";
  cin >> a >> b;

  max=a*(a>=b)+b*(b>a);
  min=a+b-max;

  cout << "Il numero maggiore e: " << max << endl << "Il numero minore e: " << min << endl;

  
  return 0;
}