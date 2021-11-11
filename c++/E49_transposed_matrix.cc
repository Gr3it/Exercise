#include <iostream>
#include <cstdlib>

using namespace std;

const int length = 4;
const int length2 = 4;

void matrixInit(int x[][length]){
  for(int i = 0; i < length; i++){ 
    for(int j = 0; j < length; j++){
      x[i][j]=rand() % 10;
    }
  }
}

void matrixPrint(int x[][length]){
  cout << "matrix: " << endl;
  for(int i = 0; i < length; i++){ 
    for(int j = 0; j < length; j++){
      if (j==length-1){
        cout << x[i][j];
      }else{
      cout << x[i][j] << ",";
      }
    }
  cout << endl;
  }
}

void matrixTranspose(int x[][length]){
  if(length==length2){
  int temp;
    for(int i = 0; i < length; i++){ 
      for(int j = i+1; j < length; j++){
        temp = x[i][j];
        x[i][j] = x[j][i];
        x[j][i] = temp;
      }
    }
  }
}

int main()
{
  srand(time(NULL));

  int matrix[length][length2];

  matrixInit(matrix);
  matrixPrint(matrix);

  matrixTranspose(matrix);

  matrixPrint(matrix);

  return 0;
}