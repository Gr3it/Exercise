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

int arrayMin(int x[], int l){
  int  min = x[0];
  for(int i = 1; i < l; i++){
    if(x[i]<min)min=x[i];
  }
  return min;
}

int arrayMax(int x[], int l){
  int  max = x[0];
  for(int i = 1; i < l; i++){
    if(x[i]>max)max=x[i];
  }
  return max;
}

float arrayAverage(int x[], int l){
  int  average = 0;
  for(int i = 0; i < l; i++){
    average += x[i];
  }
  return average/float(l);
}

int main()
{
  srand(time(NULL));

  const int length = 10;
  int array[length];

  arrayInit(array, length);
  arrayPrint(array, length);

  cout << "Il valore min dell array e: " << arrayMin(array, length) << endl;
  cout << "Il valore max dell array e: " << arrayMax(array, length) << endl;
  cout << "Il valore medio dell array e: " << arrayAverage(array, length) << endl;

  return 0;
}