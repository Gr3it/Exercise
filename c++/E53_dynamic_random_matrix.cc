#include <iostream>

using namespace std;

int ** matrixInit(int dim1, int dim2){
  int **x = new int*[dim1];

  for(int i = 0; i < dim1; i++){
    x[i] = new int[dim2];
    for(int j = 0; j < dim2; j++){
      x[i][j]=rand() % 100;
    }
  }
  return x;
}

void matrixPrint(int** x, int dim1, int dim2){
  cout << "matrix: [" << endl;
  for(int i = 0; i < dim1; i++){
    for(int j = 0; j < dim2; j++){
      if (i==dim2-1){
        cout << x[i][j];
      }else{
      cout << x[i][j] << ",";
      }
    }
    cout << endl;
  }
  cout << "]" << endl;
}

int main()
{
  srand(time(NULL));

  int dim1, dim2;

  cout << "inserire la dimensioni della matrice che si desidera generare: ";
  cin >> dim1 >> dim2;

  int **matrix = matrixInit(dim1, dim2);

  matrixPrint(matrix, dim1, dim2);

  for(int i = 0; i<dim1 ; i++){
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}