#include <iostream>

using namespace std;

int * arrayInit(int l){
  int * x = new int[l];
  for(int i = 0; i < l; i++){
    x[i]=rand() % 100;
  }
  return x;
}

void arrayPrint(int x[], int l){
  cout << "array: [";
  for(int i = 0; i < l; i++){
    if (i==l-1){
      cout << x[i];
    }else{
    cout << x[i] << ",";
    }
  }
  cout << "]" << endl;
}

int main()
{
  srand(time(NULL));

  int length;

  cout << "inserire la dimensione dell'array che si desidera generare: ";
  cin >> length;

  int * array = arrayInit(length);

  arrayPrint(array, length);

  delete[] array;

  return 0;
}