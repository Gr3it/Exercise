#include <iostream>

using namespace std;

int decimalToBinary(int n){
  if(n!=0){
    return decimalToBinary(n/2) * 10 + n%2;
  }
}

int main()
{
  int n;
  cout << "inserire il numero che si desidera stampare in binario: ";
  cin >> n;

  cout << "il valore il binario è: " << decimalToBinary(n) << endl;

  return 0;
}