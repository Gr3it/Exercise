#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct stack_nodo {
    int value;
    stack_nodo* next;
};
typedef stack_nodo* lista;

void stack_init();
bool push(int);
bool top(int &);
bool pop();

#endif