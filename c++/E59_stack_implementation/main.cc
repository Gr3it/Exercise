#include "stack.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
  if(argc != 3){
    cout << "Using: ./a.out <f_input> <f_output>";
    exit(0);
  }

  fstream input, output;
  input.open(argv[1],ios::in);
  output.open(argv[2],ios::out);

  if(input.fail() || output.fail()){
    cout << "errore con l'apertura del file";
    exit(1);
  }

  int numero;
  init();

  while(input >> numero){
    push(numero);
  }

  while(top(numero)){
    output <<  numero << endl;
    pop();
  }

  input.close();
  output.close();
  return 0;
}
