#include <iostream>

using namespace std;

int main()
{
  int a,b,ris;
  cout << "Inserire due numeri di cui si desidera l'assoluto della sottrazione: ";
  cin >> a >> b;
  ris=a-b;
  if(a-b)
  ris=-ris;
  cout << "il risultato e: " << ris << endl;
  
  return 0;
}