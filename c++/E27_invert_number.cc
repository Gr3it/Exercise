#include <iostream>

using namespace std;

int invertNumber (int number){
  int inverted = 0;
  while(number != 0){
    inverted = (inverted * 10) + number % 10;
    number /= 10;
  }
  return inverted;
} 

int main()
{
  int n;
  cout << "inserire il numero da invertire: ";
  cin >> n;

  int invertedNumber = invertNumber(n);

  cout << "il numero invertito e: " << invertedNumber << endl;

  return 0;
}