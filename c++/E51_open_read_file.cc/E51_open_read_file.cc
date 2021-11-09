#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
  if(argc != 2) {
    cout << "file <f>" << endl;
    exit(1);
  }

  fstream file;
  char buffer[256];
  file.open(argv[1],ios::in);

  if(file.fail()){
    cout << "errore con l'apertura del file" << endl;
  }else{
    while(file >> buffer){
      cout << buffer << " ";
    }
  }
  file.close();
  return 0;
}