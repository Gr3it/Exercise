#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct student
{
  char nome[20];
  char cognome[20];
  int matricola;
  float media;
};


void studentPrint(const student & s){
  cout << "nome: " << s.nome << endl;
  cout << "cognome: " << s.cognome << endl;
  cout << "matricola: " << s.matricola << endl;
  cout << "media: " << s.media << endl;

}

student studentInit(char *nome, char *cognome, int matricola, float media){
  student studente;
  strcpy(studente.nome, nome);
  strcpy(studente.cognome, cognome);
  studente.matricola = matricola;
  studente.media = media;
  return studente;
}

int main(int argc, char *argv[])
{
  if(argc != 3){
    cout << "Using <f> <n>";
    exit(1);
  }

  fstream file;
  file.open(argv[1],ios::in);

  if(file.fail()){
    cout << "errore con l'apertura del file";
    exit(1);
  }

  student *database = new student[atoi(argv[2])];

  char nome[20];
  char cognome[20];
  int matricola;
  float media;

  for(int i=0; i<atoi(argv[2]); i++){
    file >> nome >> cognome >> matricola >> media;
    database[i] = studentInit(nome, cognome, matricola, media);
  }

  for(int i=0; i<atoi(argv[2]); i++){
    cout << endl;
    studentPrint(database[i]);
  }

  delete[] database;

  return 0;
}