/*
    Author: Matt Johnson
    Subject: storage class specifiers
    Purpose:
    Date: 06/16/2023

    Notes:

        We want a global variable that is
        private to a function. We want a
        private variable that does not lose
        its existence even if the execution
        control goes out of the scope of that
        variable
*/

#include <stdio.h>
#include <stdlib.h>

// function prototype
void myFunction1(void);


int main(void) {

    myFunction1();
    myFunction1();
    myFunction1();
    myFunction1();

    return 0;
}

void myFunction1(void) {

    static int count = 0; // variable does not die

    count = count + 1;
    printf("This function executed %d time(s)\n", count);
}
