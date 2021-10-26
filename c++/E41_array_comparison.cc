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

int arrayMatch(int a[], int b[], int l){
  int rtn = 0;
  for(int i = 0; i < l; i++){
    if(a[i]==b[i]) rtn++;
  }
  return rtn;
}

int main()
{
  srand(time(NULL));

  const int length = 10;
  int array1[length];
  int array2[length];

  arrayInit(array1, length);
  arrayPrint(array1, length);

  arrayInit(array2, length);
  arrayPrint(array2, length);

  cout << "I due array hanno " << arrayMatch(array1,array2,length) << " celle uguali" << endl;

  return 0;
}