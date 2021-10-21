#include <iostream>

using namespace std;

int division(int & a, int b){
  if(a<b) return 0;
  a-=b;
  return 1 + division(a,b);
}

int main()
{
  int dividento, divisore;
  cout << "inserire il dividendo e il divisore della divisione: ";
  cin >> dividento >> divisore;

  cout << dividento << "/" << divisore << " e unguale a: " << division(dividento,divisore) << " con resto " << dividento << endl;

  return 0;
}