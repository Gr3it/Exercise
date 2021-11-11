#include <iostream>
#include <cstdlib>

using namespace std;

void arrayInit(int* x, int l){
  for(int i = 0; i < l; i++){
    x[i]=rand() % 10;
  }
}

void arrayPrint(int* x, int l){
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

  const int length = 10;
  int array[length];

  arrayInit(array, length);
  arrayPrint(array, length);

  return 0;
}