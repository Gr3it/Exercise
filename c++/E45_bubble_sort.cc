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

void arrayBubbleSort(int x[], int l){
  int temp;
  for(int i = 0; i < l-1 ; i++){
    for(int j = 0; j < l-i-1 ; j++){
      if (x[j] > x[j+1]){
        temp = x[j+1];
        x[j+1]=x[j];
        x[j]=temp;
      }
    }
  }
}

bool isEqual(int a, int b){
  return a==b;
}

void arrayRemoveDuplicatesSort(int x[], int l){
  arrayBubbleSort(x,l);
  int j;
  for(int i=0 ; i<l-1 ; i++){
    j=i+1;
    while(isEqual(x[i],x[j])){
      x[j]=-1;
      j++;
    }
  }
}

int main()
{
  srand(time(NULL));

  const int length = 10;
  int array[length];

  arrayInit(array, length);
  arrayPrint(array, length);

  arrayRemoveDuplicatesSort(array,length);

  arrayPrint(array, length);

  return 0;
}