//
// Created by Rawaan Akhtar on 4/16/21.
//
#define SUCCESS 0
#define NULLPTR 1
#define MORETHANONEINSTACK 2
#define STACKISEMPTY  3
#define CONSECUTIVEOPERATORS 4
#define UNDEFINEDDIVISION 5
#define NOTHINGTOOPERATEON 6
#define INCORRECTFORMAT 7
#define WRONGOPERATOR 8
#define NONEQUALPARENS 9

#ifndef PS4_ERRORS_H
void errorMessage(int errorType);

#define PS4_ERRORS_H

#endif //PS4_ERRORS_H
