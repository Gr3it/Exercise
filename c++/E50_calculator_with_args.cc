#include <iostream>

using namespace std;

float doCalc(float num1, float num2, char calcOperator){
  if(calcOperator == '*' || calcOperator == 'x') return num1 * num2;
  if(calcOperator == '/') return num1 / num2;
  if(calcOperator == '+') return num1 + num2;
  if(calcOperator == '-') return num1 - num2;
  return 0;
}

int main(int argc, char *argv[])
{
  if(argc==4){
    float result = doCalc(atof( argv[1] ), atof( argv[3] ), argv[2][0]);

    cout << "il risultato della operazione e: " << result << endl;
  }
  else{
    cout << "inseriti i parametri sbagliati" << endl;
  }
  return 0;
}