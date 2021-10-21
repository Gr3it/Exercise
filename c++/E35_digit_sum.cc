#include <iostream>

using namespace std;

int digitSum(int x){
  if(x<10)return x;
  return digitSum(x/10) + x%10;
}



int main()
{
  int n;
  cout << "inserire il numeri di cui calcolare la somma delle cifre: ";
  cin >> n;

  cout << "la somma delle cifre e: " << digitSum(n) << endl;

  return 0;
}