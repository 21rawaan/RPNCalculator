//
// Created by Rawaan Akhtar on 4/16/21.
//


#ifndef PS4_RPN_H
#define PS4_RPN_H
enum {OPERATOR,NUMBER};


double evaluate (char* expression,int* status);

float add(double,double);

float subtract(double,double);

float multiply(double,double);

float divide(double,double);

float recursivePower(double,double);

#endif //PS4_RPN_H

