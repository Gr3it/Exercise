#include <iostream>
#include <cstdlib>

using namespace std;

const int length = 2;
const int length2 = 5;

void arrayInit(int x[][length2]){
  for(int i = 0; i < length; i++){ 
    for(int j = 0; j < length2; j++){
      x[i][j]=rand() % 10;
    }
  }
}

void arrayPrint(int x[][length2]){
  cout << "matrix: " << endl;
  for(int i = 0; i < length; i++){ 
    for(int j = 0; j < length2; j++){
      if (j==length2-1){
        cout << x[i][j];
      }else{
      cout << x[i][j] << ",";
      }
    }
  cout << endl;
  }
}

int main()
{
  srand(time(NULL));

  int matrix[length][length2];

  arrayInit(matrix);
  arrayPrint(matrix);

  return 0;
}