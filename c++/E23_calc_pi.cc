#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int n;
  long double risultato = 0;
  long double pi = 0;
  cout << "inserire il numero di interazioni per il calcolo di pi: ";
  cin >> n;

  for(int i = 1; i <= n ; i++){
    risultato+=1.0/(i*i);
  }
  pi=sqrt(risultato * 6);
  cout.precision(5);
  cout << "il risultato e: " << pi << endl;
  return 0;
}