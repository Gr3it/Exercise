#include <iostream>

using namespace std;

void shiftArray(char v[], int dim){
  char temp = v[0];
  for(int i = 0; i < (dim-1); i++){
    v[i] = v[i+1];
  }
  v[dim-1] = temp;
}

void printArray(char v[], int dim){
  for(int i = 0; i< dim; i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main()
{
  char v[5] = {'A','B','C','D','E'};
  int num;

  cout << "inserire di quando shiftare l'array: ";
  cin >> num;

  printArray(v,5);

  for(int i=0; i<num;i++){
    shiftArray(v,5);
  }

  printArray(v,5);

  return 0;
}