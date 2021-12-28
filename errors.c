//
// Created by Rawaan Akhtar on 4/16/21.
//

#include "errors.h"
#include <stdio.h>
void errorMessage(int errorType){
    char* errorMessages[] = {
            "Calculation successful","Encountered null pointer","Too many operands with too few operators in the given string",
            "Not enough operands provided","Cannot calculate using RPN because of consecutive operators",
            "Cannot divide by 0","There's only one operand on the stack so the operation could not be completed.",
            "Incorrectly formatted expression was entered","Incorrect operator was used.",
            "Number of right parenthesis doesn't equal number of left parenthesis"};

    printf("%s\n",errorMessages[errorType]);

}
