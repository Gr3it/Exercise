#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

struct queue_nodo {
    char nome;
    queue_nodo* next;
};
typedef queue_nodo* queue_lista;

struct coda {
    queue_lista tail;
    queue_lista head;
};

void queue_init();
bool enqueue(char);
bool first(char &);
bool dequeue();
void print ();

#endif