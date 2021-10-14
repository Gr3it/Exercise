#include <iostream>

using namespace std;

int division(int a, int b, int & res){
  int i=0;
  while(i*b<=(a-b)){
    i++;
  }
  res = a-(i*b);
  return i;
}

int main()
{
  int numeratore, divisore, resto=0;
  cout << "inserire il numeratore e il divisore della divisione: ";
  cin >> numeratore >> divisore;

  int risultato = division(numeratore,divisore,resto);

  cout << "il risultato della divisione e: " << risultato << " con resto " << resto << endl;


  return 0;
}