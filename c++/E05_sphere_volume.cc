#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int raggio;

  cout << "inserire il raggio per calcoare il volume della sfera: ";
  cin >> raggio;
  cout << "il volume della sfera e: " << (4.0 / 3.0) * M_PI * pow(raggio, 3.0) << endl;

  return 0;
}
