#include <iostream>
#include <fstream>

using namespace std;

struct nodo{
  int numero;
  nodo* next;
};

nodo * listaInit(char* inputFile){
  fstream file;
  file.open(inputFile,ios::in);

  if(file.fail()){
    cout << "errore con l'apertura del file";
    exit(1);
  }

  int numero;
  file >> numero;
  nodo *lista = NULL;
  lista = new nodo{numero, NULL};
  nodo *nodoCorrente = lista;

  while(file >> numero){
    nodo *nuovoNodo = new nodo{numero, NULL};
    nodoCorrente -> next = nuovoNodo;
    nodoCorrente = nuovoNodo;
  }
  file.close();

  return lista;
}

void listaPrint(nodo *lista){
  nodo *nodoCorrente = lista;
  while(nodoCorrente != NULL){
    cout << nodoCorrente->numero << " -> ";
    nodoCorrente = nodoCorrente->next;
  }
  cout << " NULL" << endl;
}

nodo *listaInvert(nodo *lista){
  nodo *head = NULL;
  
  while(lista != NULL){
    nodo *currentNode = new nodo{lista->numero, head};
    head = currentNode;
    lista = lista->next;
  }

  return head;
}

void listaDelete(nodo *lista){
  if(lista->next == NULL){
    delete lista;
    return;
  }
  else{
    listaDelete(lista->next);
    delete lista;
    return;
  }
}

int main(int argc, char *argv[])
{
  if(argc != 2){
    cout << "Using: ./a.out <f>";
    exit(0);
  }

  nodo *lista = listaInit(argv[1]);
  listaPrint(lista);

  nodo *invertedList = listaInvert(lista);
  listaPrint(invertedList);

  listaDelete(lista);
  listaDelete(invertedList);

  return 0;
}