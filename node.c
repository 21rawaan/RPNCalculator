//
// Created by Rawaan Akhtar on 4/16/21.
//
#include "node.h"
#include "errors.h"
#include <stdlib.h>
#include <stdio.h>
#include "rpn.h"

typedef struct node {
    union {
        double value;
        char operator;
    } contents;
    int type;
    node *next;
} node;

node* createNode(double val,char character,int type){

    node *anode;
    anode = (struct node*)malloc(sizeof(node));
    if(anode){
        if (type==NUMBER){
            anode->contents.value = val;
        }else{
            anode->contents.operator = character;
        }
        anode->type = type;
        anode->next = NULL;

    }else{
        errorMessage(NULLPTR);
    }

}
