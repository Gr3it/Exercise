#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  double raggio;

  cout << "inserire il raggio" << endl;
  cin >> raggio;

  double area = M_PI * (raggio * raggio);
  double circonferenza = 2 * M_PI * raggio;

  cout << "l'area del cerchio e: " << area << endl << "la circonferenza del cerchio e: " << circonferenza << endl;
  
  return 0;
}
