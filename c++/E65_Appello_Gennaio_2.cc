#include <iostream>

using namespace std;

int **generateMatrix(int R, int C){
  int **matrix = new int*[R];
  for (int i = 0 ; i < R ; i++){
    matrix[i] = new int[C];
    for(int j = 0 ; j < C ; j++){
      matrix[i][j]=rand() % 10;
    }
  }
  return matrix;
}

void printMatrix(int **matrix,int R, int C){
  for (int i = 0 ; i < R ; i++){
    for(int j = 0 ; j < C ; j++){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void deleteMatrix(int **matrix,int R){
  for (int i = 0 ; i < R ; i++){
    delete[] matrix[i];
  }
  delete[] matrix;
}

int safeDimension(int dim, int pos, int max){
  if(dim + pos > max) dim = max-pos;

  return dim;
}

int **generateSubMatrix(int **matrix, int Y_pos, int  X_pos, int Y_dim, int X_dim){
  int **subMatrix = new int*[Y_dim];
  for(int i = 0 ; i < Y_dim ; i++){
    subMatrix[i] = new int[X_dim];
    for(int j = 0 ; j < X_dim ; j++){
      subMatrix[i][j] = matrix[Y_pos+i][X_pos+j];
    }
  }
  return subMatrix;
}

int main()
{
  srand(time(NULL));
  int R, C;

  cout << "Inserire il numero di righe e colonne della matrice: ";
  cin >> R >> C;

  int **matrix=generateMatrix(R,C);

  printMatrix(matrix, R, C);

  int Y_pos, X_pos, Y_dim, X_dim;

  cout << "inserire la posizione (y,x) della matrice che si desidera e le dimensioni (y,x): ";
  cin >> Y_pos >> X_pos >> Y_dim >> X_dim;
  Y_dim = safeDimension(Y_dim, Y_pos, R);
  X_dim = safeDimension(X_dim, X_pos, C);
  int **subMatrix = generateSubMatrix(matrix,Y_pos, X_pos, Y_dim, X_dim);

  cout << "La sub matrice e:" << endl;
  printMatrix(subMatrix,Y_dim, X_dim);

  deleteMatrix(subMatrix,Y_dim);
  deleteMatrix(matrix, R);

  return 0;
}