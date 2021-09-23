#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double aPar, bPar, cPar;
  cout << "Inserire i parametri di ax^2 + bx + c = 0 secondo a b c: ";
  cin >> aPar >> bPar >> cPar;
  cout << "le soluzioni dell'equazione sono: " << (-bPar+sqrt(bPar*bPar-4*aPar*cPar))/(2*aPar) << " e " << (-bPar-sqrt(bPar*bPar-4*aPar*cPar))/(2*aPar)<< endl;
  return 0;
}
