#include <iostream>

using namespace std;

double recursivePow (int a, int b){
  if (b == 0)return 1.0;
  if(b > 0)return recursivePow(a,b-1) * a;
  return recursivePow(a,b+1) * (1.0/a);
}

int main()
{
  int num, esp;
  cout << "inserire il numero e l'esponente della potenza: ";
  cin >> num >> esp;

  cout << "il risultato e: " << recursivePow(num, esp) << endl;

  return 0;
}