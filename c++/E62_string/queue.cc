#include "queue.h"

static coda Q;

static bool vuota() {
  return (Q.head == NULL);
}

void queue_init() {
  Q.head = NULL;
}

bool enqueue(char n) {
  
    bool risultatoOperazione;
    queue_lista nuovoNodo = new queue_nodo;
    if (nuovoNodo==NULL) {
        risultatoOperazione = false;
    }
    else {
        nuovoNodo->nome=n;
        nuovoNodo->next=NULL;
        if (vuota()) {
            Q.head=nuovoNodo;
        }
        else { 
            Q.tail->next=nuovoNodo;
        }
        Q.tail=nuovoNodo;
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}

bool first(char &n) { 
    bool risultatoOperazione;
    if (vuota()) {
        risultatoOperazione = false;
    }
    else {
        n = Q.head->nome;
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}

bool dequeue() { 
    bool risultatoOperazione;
    if (vuota()) {
        risultatoOperazione = false;
    }
    else {
        queue_lista primoNodo;
        primoNodo = Q.head;
        Q.head = Q.head->next;
        delete primoNodo; 
        risultatoOperazione = true;
    }
    return risultatoOperazione;
}

void print() {

  if (!vuota()) {
    queue_lista nodoCorrente=Q.head;
    do {
      cout << nodoCorrente->nome << endl;
      nodoCorrente = nodoCorrente->next;
    } while (nodoCorrente != NULL);
  }
}