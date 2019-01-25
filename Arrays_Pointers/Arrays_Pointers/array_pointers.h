#ifndef ARRAY_POINTERS_H
#define ARRAY_POINTERS_H 

#define NAME_SIZE 4
#define AGE_SIZE 1

/* The formal argumenet name is optional */
void intArrayPrinter(int [], int);
void charArrayPrinter(char []);

/* Examples with formal argument names */
void intArrayPrinterWithPointer(int * iArrayPtr, int iArraySize);
void charArrayPrinterWithPointer(char * cArrayPtr);
void intBytePrinter(int iValue);
double encode();
void decode(double x);

#endif // !ARRAY_POINTERS_H
