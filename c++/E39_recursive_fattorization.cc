#include <iostream>

using namespace std;

void recursiveFattorization(int numero,int index = 2){
  if(numero==1){
    return;
  }
  else if(numero%index == 0){
    cout << index << " ";
    recursiveFattorization(numero/index, index);
  }else{
    recursiveFattorization(numero, index +1);
  }
}

int main()
{
  int numero;
  cout << "inserire il numero da fattorizzare: ";
  cin >> numero;

  recursiveFattorization(numero);

  cout << endl;

  return 0;
}