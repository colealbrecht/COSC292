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

void charArrayPrinterWithPointer(char * cArrayPtr)
{
    while (*cArrayPtr)
    {
        printf("%c", *cArrayPtr++);
    }
    printf("\n");
}

void intArrayPrinterWithPointer(int * iArrayPtr, int iArraySize)
{
    for (int i = 0; i < iArraySize; i++)
    {
        /* To retrieve the value where a pointer points, 
        we dereference the address using the dereference operator, '*'  
        Dereference means - go to that address and either get or set values 
        The number of bytes read by the system when dereferencing is based on the pointers type
        so char * charPtr ---> read 1 byte
           int * intPtr ---> reads 4 bytes
        */
        /* printf("The value of the loop counter is %d and the array value is %d\n", i, *(iArrayPtr + i)); */
        /* You could walk the pointer */
        printf("The value of the loop counter is %d and the array value is %d\n", i, *iArrayPtr++);
    }
}

void charArrayPrinter(char cArray[])
{
    int i = 0;
    while (cArray[i] != '\0')
    {
        printf("%c", cArray[i++]);
    }
    printf("\n");
}

// Print the bytes of an integer from lowest to highest order
void intBytePrinter(int iValue)
{
    /* When converting to the address of iValue. Then we can work 1 byte at a time */
    char * iPtr = (char *) &iValue;

    /* When you dereference  */

    int i = 0;

    while (i < sizeof(iValue))
    {
        printf("The byte value is %x and the char equivalent is %c\n", *iPtr, *iPtr);
        iPtr++;
        i++;
    }
    printf("\n");
}

double encode()
{
    /* 
        first 4 bytes - 3 letter name 
        next byte - persons age
        next 2 bytes - students loan amount
    */
    double x = 0;

    /* Scan in the name, age, loan amount from the user */
    /* Store all values in x */
    char * namePtr = (char *) &x;
    char * encodePtr = namePtr;

    printf("Enter 3 letters for your name\n");
    scanf("%3s", namePtr);
    printf("Enter your age\n");
    /* Note that we offset first, then cast to the appropriate pointer type */
    scanf("%d", (int *) (namePtr + NAME_SIZE));
    printf("Enter your student loan debt\n");
    scanf("%hu", (short *) (namePtr + NAME_SIZE + AGE_SIZE));

    printf("Encoded Message: ");
    printf("%d", x);
    printf("\n");
    decode(x);

    return x;
}

/* Print the name, age, and student loan amount stored in the double passed in */
void decode(double x)
{
    char * cPtr = (char *) &x;

    int i = 0;

    printf("Decoded Message: \n");
    
    printf("The name is %s\n", cPtr);
    /* The reason the following print statements need to be dereferenced is because 
    %d and %hu are looking for the actual values not an adress to the start in memory */
    printf("The age is %d\n", *(cPtr + NAME_SIZE));
    printf("The student loan debt is %hu\n", *(cPtr + NAME_SIZE + AGE_SIZE));

    printf("\n");
}
