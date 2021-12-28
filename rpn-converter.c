//
// Created by Rawaan Akhtar on 4/16/21.
//

#include "rpn-converter.h"
#include "stack.h"
#include <string.h>
#include <stdio.h>
#include "node.h"
#include "errors.h"


typedef struct node {
    union {
        double value;
        char operator;
    } contents;
    int type;
    int precedence;
    node *next;
} node;

void conversion(char* expression,char* str) {
    strcpy(str,"");
    char* empty = "   ";
    char left = '(';
    char right = ')';
    char *token = strtok(expression, " ");
    int numRight = 0;
    int numLeft = 0;
    int wrongOP = 0;


    //try to put the last part in one big while loop.(the adding everything on the stack part)
    //while(i=1) then change it so that i = 0 after everything is done.
    while (token) {
        //if its a number just added it to the character array.
        if (isNumber(token)) {
            strncat(str, token,strlen(token));///
            strcat(str, " ");
        } else { //if its an operator create a node and....
            node *send = createNode(0.00, *token, 0);
            if ((*token != left)&&(*token != right)&&(*token != '+') && (*token != '-') && (*token != '*')
                && (*token != '/')&& (*token != '^')){
                wrongOP++;
                errorMessage(WRONGOPERATOR);
            }

            //just push it on the stack if there is a left paren
            if (*token == left) {
                numLeft++;
                push(send);
            }
                //if there is a right paren. POP and add to the queue until I reach a left paren...
                //and then pop that left paren to and discard.
            else if(*token == right){
                numRight++;
                while (peek()->contents.operator != left){
                    node* popped = pop();
                    if (popped->contents.operator=='+'){
                        strcat(str, "+");
                        strcat(str, " ");
                    }else if(popped->contents.operator=='-'){
                        strcat(str, "-");
                        strcat(str, " ");
                    }else if(popped->contents.operator=='*'){
                        strcat(str, "*");
                        strcat(str, " ");
                    }else if(popped->contents.operator=='/'){
                        strcat(str, "/");
                        strcat(str, " ");
                    }else if(popped->contents.operator=='^'){
                        strcat(str, "^");
                        strcat(str, " ");
                    }
                }
                if (numNodes()!=1){
                    pop();
                }


            }
                //if theres not a paren and not a number....
            else{
                send->precedence = pedmas(*token);
                //if the stack is empty just push an operator on it.
                if (isEmpty()){
                    push(send);
                }else{
                    //if stack is not empty and precedence of send is less than the one in stack. put the stack one into the queue.(no parenthesis)
                    if (!isEmpty() && peek()->precedence >= send->precedence) {
                        node* popped = pop();
                        if (popped->contents.operator=='+'){
                            strcat(str, "+");
                            strcat(str, " ");
                        }else if(popped->contents.operator=='-'){
                            strcat(str, "-");
                            strcat(str, " ");
                        }else if(popped->contents.operator=='*'){
                            strcat(str, "*");
                            strcat(str, " ");
                        }else if(popped->contents.operator=='/'){
                            strcat(str, "/");
                            strcat(str, " ");
                        }else if(popped->contents.operator=='^'){
                            strcat(str, "^");
                            strcat(str, " ");
                        }
                        push(send);
                    }
                    //if the stack is not empty and the precedence of the operator in stack is less than that
                    //of the operator entering it..
                    if (!isEmpty() && peek()->precedence < send->precedence) {
                        push(send);
                    }

                }
            }
        }
        token = strtok(NULL, " ");
    }


    while(!isEmpty()){
        node* popped = pop();
        if (popped->contents.operator=='+'){
            strcat(str, "+");
            strcat(str, " ");
        }else if(popped->contents.operator=='-'){
            strcat(str, "-");
            strcat(str, " ");
        }else if(popped->contents.operator=='*'){
            strcat(str, "*");
            strcat(str, " ");
        }else if(popped->contents.operator=='/'){
            strcat(str, "/");
            strcat(str, " ");
        }else if(popped->contents.operator=='^'){
            strcat(str, "^");
            strcat(str, " ");
        }
    }
    if (wrongOP != 0){
        strcpy(str,empty);
    }
    if (numRight!=numLeft){
        strcpy(str,empty);
        errorMessage(NONEQUALPARENS);

    }
}


int pedmas(char operator){
    int precedence;
    if(operator == '+' || operator == '-'){
        precedence = 1;
    }else if (operator == '*'|| operator == '/' ){
        precedence = 2;
    }else if(operator == '^'){
        precedence = 3;
    }else{
        precedence = -1;
    }
    return precedence;
}

void doubletostring(double answer,char* string ){
    strcpy(string,"");
    sprintf(string, "%f", answer);
}

