#include <iostream>

using namespace std;

int main()
{
  float fahrenheit;

  cout << "inserire la temperatura in fahrenheit" << endl;
  cin >> fahrenheit;

  cout << "la temperatura in celsius e: " << (fahrenheit - 32) /1.8 << endl;
  
  return 0;
}
