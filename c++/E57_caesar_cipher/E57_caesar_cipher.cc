#include <iostream>
#include <fstream>
//#include "1-caesar.h"

using namespace std;

void crypt(char text[], int key){
  int i = 0;
  while(text[i] != '\0'){
    text[i] += key;
    if(text[i] > 'z'){
      text[i] = text[i] - 26;
    }
    i++;
  }

}

void decrypt(char text[], int key){
int i = 0;
  while(text[i] != '\0'){
    text[i]-=key;
    if(text[i]<'a'){
      text[i]+=26;
    }    
    i++;
  }
}

int main(int argc, char **argv)
{
  if(argc != 4){
    cout << "Usage: <file_input> <file_output> <key>" << endl;
    exit(1);
  }

  fstream input, output;
  char buffer[256];
  
  input.open(argv[1],ios::in);
  output.open(argv[2],ios::out);

  if(input.fail() || output.fail()){
    cout << "Errore nell'apertura del file";
    input.close();
    output.close();
    exit(1);
  }

  
  bool toCrypt;

  input >> buffer;

  cout << "inserire 1 se si vuole cifrare il messaggio, 0 se lo si vole decifrare: ";
  cin >> toCrypt;

  while(!input.eof()){
    if(toCrypt){
      crypt(buffer, atoi(argv[3]));
    }else{
      decrypt(buffer, atoi(argv[3]));
    }
    output << buffer << " ";
    input >> buffer;
  }

  output << endl;

  input.close();
  output.close();
  
  return 0;
}