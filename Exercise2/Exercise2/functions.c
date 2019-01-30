#include <stdio.h>
#include "functions.h"

void swap(int * ptrL, int * ptrR)
{
    int x = *ptrL;
    *ptrL = *ptrR;
    *ptrR = x;
}

int * newInteger(void)
{
    int x = 10;
    printf("New int: %d\n", x);
    return &x;
}

/* 
   Hide characters from a 4 char string in a 4 int array 
   Hides the character in the 3rd byte of each integer 
*/
void hideString(int * iArrPtr, char * cArrPtr)
{
    /*  First char hidden in 3rd byte of 1st in
        Second char hidden in 3rd byte of 2nd int
        Third char hidden in 3rd byte of 3rd int
        Fourth char hidden in 4th byte of 3rd int
    */

    /* Point to start of iArrPtr */
    char * ptrInsert = iArrPtr;

    /* Move insert pointer through iArrPtr */
    for (int i = 0; i < STR_SIZE; i++)
    {
        *(ptrInsert + (i + 1) * CHAR_POS) = *cArrPtr++;
    }
}

/*
    Read a 4 int array and get the characters stored in the 3rd byte from it
*/
void unHideString(int * iArrPtr)
{
    char cArray [STR_SIZE + 1];
    char * ptrGet = iArrPtr;

    for (int i = 0; i <= STR_SIZE; i++)
    {
        cArray[i] = *(ptrGet + (i + 1) * CHAR_POS);
    }

    cArray[4] = '\0';

    printf("%s\n", cArray);
}