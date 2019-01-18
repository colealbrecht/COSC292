#include "memory.h"
#include <stdio.h>

int MemoryMap(float x)
{
    static int i = 0; // BSS Segment
    int a = 1234567896;
    double d = 9.0;
    float b = 3.2;
    char c = 'a';
    short s = 10815;
    char cArray[] = "Hello";

    /* Print the address of each variable
	   The "Address Of" operator is the overloaded &
	   Note that %p is used to display a value in hexadecimal */
    printf("The address of int i is \t\t %p\n", &i);
    printf("The address of int a is \t\t %p\n", &a);
    printf("The address of double d is \t\t %p\n", &d);
    printf("The address of float b is \t\t %p\n", &b);
    printf("The address of char c is \t\t %p\n", &c);
    printf("The address of short s is \t\t %p\n", &s);
	
	/* Note that the name of an array of stores the address of the first element. Essentially it is a pointer */
    printf("The address of cArray is \t\t %p\n", cArray);

	/* Print the address of the parameter */
    printf("The address of float x is \t\t %p\n", &x);

	/* Print the address of the function itself. Note that the function name, like arrays, stores its address */
    printf("The address of MemoryMap is \t\t %p\n", MemoryMap);

    return 0;
}