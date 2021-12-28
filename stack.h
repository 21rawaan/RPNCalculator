//
// Created by Rawaan Akhtar on 4/16/21.
//
#include "node.h"
#include <stdbool.h>

#ifndef PS4_STACK_H
#define PS4_STACK_H
void push(node* node);
node* pop();
node* peek();
void clearStack();
void printList();
int numNodes();
bool isEmpty();
bool isNumber(char* token);


#endif //PS4_STACK_H
