/*
    Author: Matt Johnson
    Subject: use cases of static with functions
    Purpose: access a function outside of the main.c scope
    Date: 06/24/2023

    Notes:

        remove 'static' before the change_system_clock()
        to compile, build, and run with no warnings or
        errors

*/

#include <stdio.h>
#include <stdlib.h>

void file1_myFun1(void);

static int mainPrivateData;

int main(void) {

    mainPrivateData = 100;

    printf("mainPrivateData = %d\n", mainPrivateData);

    file1_myFun1();

    printf("mainPrivateData = %d\n", mainPrivateData);

    return 0;
}

static void change_system_clock(int system_clock) {

    printf("system clock changed to = %d\n", system_clock);
}
