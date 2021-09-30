#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a,b,c,delta;
  cout << "inserire i valori dell'equazione di secondo grado a, b, c: ";
  cin >> a >> b >> c;
  delta = pow(b,2)-4*a*c;
  if(delta<0){
    cout << "delta negativo" << endl;
  }
  else{
    cout << "le due soluzioni sono: " << (-b - sqrt(delta))/(2*a) << " e: " << (-b + sqrt(delta))/(a*2) << endl;
  }
  
  return 0;
}