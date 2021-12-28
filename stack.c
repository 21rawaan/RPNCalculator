//
// Created by Rawaan Akhtar on 4/16/21.
//

#include "stack.h"
#include "node.h"
#include "errors.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct node {
    union {
        double value;
        char operator;
    } contents;
    int type;
    node *next;
} node;
node* head;


void push(node* node){
    node->next = head;
    head = node;
}

node* pop(void){
    if (!head){
        errorMessage(NULLPTR);
    }
    node* pointer = head;
    head = head->next;
    return pointer;
}
node* peek(void){
    if (!head){
        errorMessage(STACKISEMPTY);
        return head;
    }else{
        return head;
    }
}
void clearStack(){
    while(head){
        head = head->next;
    }
    free(head);
    head=NULL;
}


void printList(void){
    if (!head){
        errorMessage(STACKISEMPTY);
        return;
    }else{
        node* walker = head;
        while(walker->next) {
            printf("%c", walker->contents.operator);
            walker = walker->next;
        }
    }
}
int numNodes(void){
    int count = 0;
    struct node* walker = head;
    while (walker){
        walker = walker->next;
        count++;
    }
    free(walker);
    walker=NULL;

    return count;
}

bool isEmpty(void){
    if(!head){
        return true;
    }else{
        return false;
    }
}

bool isNumber(char* token) {
    char* zero = "0";
    if (strcmp(token,zero)==0){
        return true;
    }
    if (atof(token) == 0) {
        return false;
    }
    else{

        return true;
    }
}



