#include <stdio.h>
#include "stack.h"
#include "rpn.h"
#include "rpn-converter.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


/*
 * THE LAST THING I NEED TO DO IS ADJUST THE CONVERSION AND THEN IM DONE!
 */

int main(int argc, char *argv[]) {
    int status = 0; //for evaluate
    char str[100]; //for conversion
    char string[100];//for doubletostring

    //OPENINING BOTH FILES
    FILE *data = fopen(argv[2], "w+");//opening write file.
    char dataLine[100]; //to store input strings
    FILE *input = fopen(argv[1], "r"); //must exist
    if (!input) {
        perror("I/O error: ");
        return -1;
    }

    while (fgets(dataLine, 100, input)) {
        fprintf(data, "Infix: ");
        fprintf(data,dataLine);
        conversion(dataLine,str);//convers str to infix
        fprintf(data, "Postfix: ");
        fprintf(data,str);
        fprintf(data,"\n");
        double answer = evaluate(str,&status);//put str into evaluate to get the answer.
        doubletostring(answer,string);//convert answer into a string and put it in string.
        fprintf(data,"Result: ");
        fprintf(data, string);//write the answer of evaluate thats been converted to a string into the .txt.
        fprintf(data,"\n");
    }
     //opens the file I want to write ot
    fclose(input);
    fclose(data);
    return 0;
}
