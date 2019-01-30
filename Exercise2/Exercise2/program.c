#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//Author:   Cole Albrecht
//Date:     January 30, 2019


void testSwap(void)
{
    int x = 10;
    int y = 20;

    printf("Left: %d    Right: %d\n", x, y);

    printf("Swapping...\n");
    swap(&x, &y);

    printf("Left: %d    Right: %d\n", x, y);
}

void testNewInteger(void)
{
    /* Not a good idea to print value from stack space because
    as soon as the value is return the space is return an may 
    be overwritten by something else */
    printf("%d\n", *(newInteger()));
}

void testHideUnhide(void)
{
    int iArray [] = { 32842938,9329823,8439339, 7943085 };
    char cArray [] = "Bill";

    hideString(iArray, cArray);

    for (int i = 0; i < STR_SIZE; i++)
    {
        printf("%d\n", iArray[i]);
    }

    unHideString(iArray);
}

int main(int ac, char** av)
{
    /* testSwap(); */
    /* testNewInteger(); */
    testHideUnhide();

	return EXIT_SUCCESS;
}
