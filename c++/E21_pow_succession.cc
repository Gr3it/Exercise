#include <iostream>

using namespace std;

int main()
{
  int number, finalPow, tempPow;
  cout << "inserire il numero e la potenza finale: ";
  cin >> number >> finalPow;
  tempPow = number;
  for  (int i=1; i<=finalPow;i++){
    cout << tempPow << endl;
    tempPow *= number;
  }
  
  return 0;
}