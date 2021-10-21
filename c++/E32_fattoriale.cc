#include <iostream>

using namespace std;

long int fattoriale(long int x){
  if (x==1||x==0) return 1;
  return x * fattoriale(x-1);
}

int main()
{
  int input;
  cout << "inserire il numero di cui si vuole calcolare il fattoriale: ";
  cin >> input;
  cout << "il fattoriale di " << input << " e: " << fattoriale(input) << endl;
  return 0;
}