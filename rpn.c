//
// Created by Rawaan Akhtar on 4/16/21.
//

#include "rpn.h"
#include "stack.h"
#include "node.h"
#include <string.h>
#include <stdlib.h>
#include "errors.h"
#include <stdio.h>




typedef struct node {
    union {
        double value;
        char operator;
    } contents;
    int type;
    int precedence;
    node *next;
} node;



double evaluate (char* expression,int* status) {

    double answer;
    char *token = strtok(expression, " ");
    int opCount;
    while (token) {
        int theType;
        char *ptr;
        node *temp;
        //if the token is not a double...
        if (isNumber(token)==false) {
            opCount++;
            //checking for a few errors with the conditionals below.
            if (isEmpty()){
                *status = STACKISEMPTY;
                errorMessage(*status);
                return 0.0;
            }
            if (numNodes() == 1){
                *status = NOTHINGTOOPERATEON;
                errorMessage(*status);
                return 0.0;
            }
            /*
            if (opCount>1){
                *status = CONSECUTIVEOPERATORS;
                errorMessage(*status);
                return 0.0;
            }
             */

            node* temp_operator = pop();
            node* temp_operator2 = pop();
            switch (*token) {
                case '+':
                    answer = add(temp_operator->contents.value,temp_operator2->contents.value);
                    temp = createNode(answer,'x',theType);
                    push(temp);
                    break;
                case '-':
                    answer = subtract(temp_operator2->contents.value,temp_operator->contents.value);
                    temp = createNode(answer,'x',theType);
                    push(temp);
                    break;
                case '/':
                    if (temp_operator->contents.value==0){
                        *status = UNDEFINEDDIVISION;
                        errorMessage(*status);
                        return 0.0;
                    }
                    answer = divide(temp_operator2->contents.value,temp_operator->contents.value);
                    temp = createNode(answer,'x',theType);
                    push(temp);
                    break;
                case '*':
                    answer = multiply(temp_operator->contents.value,temp_operator2->contents.value);
                    temp = createNode(answer,'x',theType);
                    push(temp);
                    break;
                case '^':
                    answer = recursivePower(temp_operator2->contents.value,temp_operator->contents.value);
                    temp = createNode(answer,'x',theType);
                    push(temp);
                    break;
                default:
                    *status = WRONGOPERATOR;
                    errorMessage(*status);
                    return 0.0;
            }
            token = strtok(NULL, " ");

        } else {
            opCount=0;
            theType = NUMBER;
            temp = createNode(strtod(token, &ptr),'x', theType);
            push(temp);
            token = strtok(NULL, " ");
        }
    }
    //checking for errors after the loop has been completed and every character in the string has been looked at.
    if (numNodes()>1){
        *status=MORETHANONEINSTACK;
        errorMessage(*status);
        return 0.0;
    }else if (numNodes() < 1){
        *status = STACKISEMPTY;
        errorMessage(*status);
        return 0.0;
    }
    *status = SUCCESS;
    errorMessage(*status);
    clearStack();
    return answer;
}

float add(double num1,double num2){
    float result;
    result = num1 + num2;
    return result;
}

float subtract(double num1,double num2){
    float result;
    result = num1 - num2;
    return result;
}

float multiply(double num1,double num2){
    float result;
    result = num1*num2;
    return result;
}

float divide(double num1,double num2){
    float result;
    result = num1/num2;
    return result;
}



float recursivePower(double num1,double num2){
    if (num2 != 0){
        return (num1*recursivePower(num1,num2-1));
    }else{
        return 1;
    }

}
