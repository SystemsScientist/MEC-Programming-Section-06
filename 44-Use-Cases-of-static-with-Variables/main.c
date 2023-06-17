/*
    Author: Matt Johnson
    Subject: use cases of static with variables
    Purpose:
    Date: 06/16/2023

    Notes:

*/

#include <stdio.h>
#include <stdlib.h>

// function prototype
void file1_myFunction1(void);

// global variable
int mainPrivateData;

int main(void) {

    mainPrivateData = 100;
    printf("mainPrivateData = %d\n", mainPrivateData);

    file1_myFunction1();
    printf("mainPrivateData = %d\n", mainPrivateData);

    return 0;
}
