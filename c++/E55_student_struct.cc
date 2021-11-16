#include <iostream>
#include <cstring>

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

int main()
{
  char nome[20];
  char cognome[20];
  int matricola;
  float media;
  cout << "inserire il nome, cognome, matricola, media di uno studente: ";
  cin >> nome >> cognome >> matricola >> media;

  student studente1 = studentInit(nome, cognome, matricola, media);

  studentPrint(studente1);

  return 0;
}