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

int recursiveBinarySearch(int x[], int index, int mid, int target){
  if(x[index]==target){
    return index;
  }
  if(mid/2==0){
    return -1;
  }
  if(x[index]>target){
    mid /= 2;
    return recursiveBinarySearch(x,index-mid,mid,target);
  }
  if(x[index]<target){
    mid /= 2;
    return recursiveBinarySearch(x,index+mid,mid,target);
  }
  return -1;
}

int arrayBinarySearch(int x[], int l, int target){
  arrayBubbleSort(x,l);

  return recursiveBinarySearch(x, l-l/2, l/2, target);
}


int main()
{
  srand(time(NULL));

  const int length = 10;
  int array[length];
  int target;

  arrayInit(array, length);
  arrayPrint(array, length);

  cout << "inserire il numero da cercare: ";
  cin >> target;

  cout << "l elemento si trova alla posizione: " <<  arrayBinarySearch(array, length, target) << endl;

  arrayPrint(array, length);

  return 0;
}