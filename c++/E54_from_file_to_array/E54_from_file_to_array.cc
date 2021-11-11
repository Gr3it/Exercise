#include <iostream>
#include <fstream>

using namespace std;

void arrayBubbleSort(float x[], int l){
  float temp;
  for(int i = 0; i < l-1 ; i++){
    for(int j = 0; j < l-i-1 ; j++){
      if (x[j] < x[j+1]){
        temp = x[j+1];
        x[j+1]=x[j];
        x[j]=temp;
      }
    }
  }
}

int main(int argc, char *argv[])
{
  if(argc != 4) {
    cout << "file <f> <n> <n>" << endl;
    exit(1);
  }

  fstream file;
  char buffer[256];
  file.open(argv[1],ios::in);

  float *array=new float[atoi(argv[2])];

  if(file.fail()){
    cout << "errore con l'apertura del file" << endl;
  }else{
    for(int i = 0; i < atoi(argv[2]); i++){
      file >> buffer;
      array[i]=atof(buffer);
    }
  }

  arrayBubbleSort(array, atoi(argv[2]));

  cout << "first N number: ";
  for(int i = 0; i < atoi(argv[3]); i++){
    cout << array[i] << " ";
  }
  cout << endl;

  file.close();
  delete[] array;

  return 0;
}