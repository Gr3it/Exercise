#include <iostream>

using namespace std;

int main()
{
  int n,fib1 = 0, fib2 = 1, temp;
  cout << "inserire la posizione del numero della sequenza di fibonacci che si desidera avere: ";
  cin >> n;

  for(int i=0; i<n; i++){
    temp=fib2;
    fib2+=fib1;
    fib1=temp;
  }
  cout << "il " << n << " numero della sequnza di fibonacci è: " << fib2 << endl;
  
  return 0;
}