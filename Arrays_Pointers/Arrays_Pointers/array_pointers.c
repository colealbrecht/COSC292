#include <stdio.h>
#include "array_pointers.h"

void intArrayPrinter(int iArray[], int iArraySize)
{
    /* Note that the array is passed in as a pointer. If we do sizeof on iArray,
    it will return the size of the pointer (4), not the size of the array */

    /* Print the values in the array */
    for (int i = 0; i < iArraySize; i++)
    {
        printf("The value of the loop counter is %d and the array value is %d\n", i, iArray[i]);
    }
}

void charArrayPrinterWithPointer(char cArray [])
{

}

void intArrayPrinterWithPointer(int * iArrayPtr, int iArraySize)
{
    for (int i = 0; i < iArraySize; i++)
    {
        /* To retrieve the value where a pointer points, 
        we dereference the address using the dereference operator, '*'  */
        printf("The value of the loop counter is %d and the array value is %d\n", i, *(iArrayPtr + i));
    }
}

void charArrayPrinter(char * cArrayPtr)
{

}

void intBytePrinter(int iValue)
{

}

double encode()
{

}

void decode(double x)
{

}
