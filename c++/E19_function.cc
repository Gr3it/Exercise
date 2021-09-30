#include <iostream>

using namespace std;

int main()
{
  int a,b,c;
  cout << "inserire 3 numeri a b c per determinare il risultato della funzione: ";
  cin >> a >> b >> c;
  if(a < b){
    cout << "Il risultato della funzione e: 1" << endl;
  }
  else  if(a > c){
    cout << "Il risultato della funzione e: 0" << endl;
  }
  else if(b<=a && a<=c){
    cout << "Il risultato della funzione e: -1" << endl;
  }
  else{
    cout << "Il risultato della funzione e: 1" << endl;
  }
  
  return 0;
}