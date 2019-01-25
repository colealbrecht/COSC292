#include <stdio.h>
#include <stdlib.h>
#include "array_pointers.h"

//Author: Cole Albrecht 
//Date: January 23, 2019   

void testIntArrayPrinter()
{
    int iArray[] = { 2, 7, 9 };
    /* Note sizeof returns the total number of bytes in the array
    To get the total number of elements, we divide by the sizeof(type) */
    int iArraySize = sizeof(iArray) / sizeof(int);

    /* Print the values in the array */
    intArrayPrinter(iArray, iArraySize);
    intArrayPrinterWithPointer(iArray, iArraySize);
}

void testCharArrayPrinter(void)
{
    charArrayPrinter("Hello Cruel World");
}

void testCharArrayPrinterWithPointer(void)
{
    charArrayPrinterWithPointer("Hello Cruel World");
}

void testIntBytePrinter(void)
{
    intBytePrinter(7106371);
}

void testEncode(void)
{
    double x = encode();
}


int main(int ac, char** av)
{
    /* testIntArrayPrinter(); */
    /* testCharArrayPrinter(); */
    /* estCharArrayPrinterWithPointer(); */
    /* testIntBytePrinter(); */
    /* */
    testEncode();

	return EXIT_SUCCESS;
}
