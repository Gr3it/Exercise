#include <iostream>
#include <cstdlib>

using namespace std;

void arrayInit(int x[], int l){
  for(int i = 0; i < l; i++){
    x[i]=rand() % 10;
  }
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

void arrayReverse(int x[], int l){
  int temp;
  for(int i = 0 ; i < l/2 ; i++){
    temp=x[i];
    x[i]=x[l-i-1];
    x[l-i-1]=temp;
  }
}

int main()
{
  srand(time(NULL));

  const int length = 10;
  int array[length];

  arrayInit(array, length);
  arrayPrint(array, length);

  arrayReverse(array, length);

  arrayPrint(array, length);

  return 0;
}