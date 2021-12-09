#include <iostream>

using namespace std;

int main()
{
  srand(time(NULL));

  int dimPattern, dimTesto;

  cout << "inserire la lungezza dell array pattern e testo: ";
  cin >> dimPattern >> dimTesto;

  int arrayPattern[dimPattern], arrayTesto[dimTesto];
  cout << "array pattern: ";

  for (int i = 0 ; i < dimPattern ; i++ ){
    arrayPattern[i] = rand() % 10;
    cout << arrayPattern[i] << " ";
  }
  cout << endl << "array testo: ";

  for (int i = 0 ; i < dimTesto ; i++ ){
    arrayTesto[i] = rand() % 10;
    cout << arrayTesto[i] << " ";
  }
  cout << endl;

  bool trovato = false;

  for(int i = 0 ; i < dimTesto - dimPattern + 1 && !trovato; i++){
    int j=0;
    while (arrayTesto[i+j] == arrayPattern[j]){
      j++;
    }
    if(j == dimPattern){
      trovato = true;
    }
  }

  if(trovato){
    cout << "match trovato" << endl;
  }else{
    cout << "match non trovato" << endl;
  }

  return 0;
}