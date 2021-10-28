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

int arrayIndexOf(int x[], int l, int search){
  int i = 0;
  bool flag = false;
  int rtn = -1;
  while(i<l && !flag){
    if(x[i] == search){
      flag = true;
      rtn = i;
    }
    i++;
  }
  return rtn;
}

int main()
{
  srand(time(NULL));

  const int length = 10;
  int array[length];
  int search;

  arrayInit(array, length);
  arrayPrint(array, length);

  cout << "inserire il valore che si desidera cercare nell'array: ";
  cin >> search;

  cout << "il valore è alla posizione: " << arrayIndexOf(array, length, search) << endl;


  return 0;
}