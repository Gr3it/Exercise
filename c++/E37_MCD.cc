#include <iostream>

using namespace std;

int recursiveMCD(int a, int b){
  if(b==0){
    return a;
  }
  return recursiveMCD(b, a%b);

}

int main()
{
  int num1, num2;
  cout << "inserire i due numeri di cui calcolare il massimo comune divisore: ";
  cin >> num1 >> num2;

  cout << "il massimo comune divisore e: " << recursiveMCD(num1,num2) << endl;


  return 0;
}