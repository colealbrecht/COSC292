#include <stdio.h>
#include <stdlib.h>

/* <-- Comment
Similar to "using" statements in C# or "import" statements in Java
# Tells the pre-processor that there is some existing code that we want to utilize in this code
Note that the <> tell the pre-processor to look in the built in standard libraries
We will use "" instead of <> to tell the pre-processor to look in the local project first

Note that the pre-proccessor reads the current source file looking for pre-processor directives (start with #)
In this case, the #include tells the pre-processor to find stdio.h and substitute its text into this file

Another type of pre-processor directive is the "define" statement
Note that the define statement does not end with a semicolon

* <-- splat
This is a pointer, a pointer is a memory address 

Buffer --> Chunk of memory
You have 1 cup and you try to pour 2 cups of milk in you overflow the buffer

You dont want to be too short on memory but you also don't want to allocate too much because you may run out of memory
*/

#define PI 3.14159
#define Radius 2

void PrimitiveDataTypes(void)
{
    char c = 'R'; /* 1 byte */
    int x = 123456; /* 4 bytes */
    float f = PI; /* 4 bytes */
    double d = 12345.6597; /* 8 bytes */

    /* Print the value of the variables */
    printf("The value of c is %c (No value specified for placeholder) \n"); /* %c is a format specifier for character. **Note: we did not tell printf what to place into the placeholder. */
    printf("The value of c is %c\n", c);
    printf("The value of c as an int is %d\n", c); /* This will print out the ASCII value for 'R' */
    printf("The value of x is %d\n", x);
    printf("The value of x is %c\n", x); /* This will print the @ sign */
    printf("The value of f is %f\n", f);
    printf("The value of f to 5 decimal places is %10.5f\n", f); /* This will print <space><space><space><space>3.14159 (a total of 10 digits with 5 decimals)*/
    printf("The value of d is %f\n", d);

    /* What are the sizes of datatypes */
    /* the sizeof() function is used to return the size of a datatype, struct, array, etc. */
    printf("The size of c is %d bytes\n", sizeof(c));
    printf("The size of x is %d bytes\n", sizeof(x));
    printf("The size of f is %d bytes\n", sizeof(float));
    printf("The size of d is %d bytes\n", sizeof(d));

}

/* Modifiers to the primitive data types */
void Modifiers(void)
{
    /* Note: C defaults to "signed" values */
    char e = 255;
    char c = 127;
    
    unsigned char u = 255;

    /* Short and Long modifiers - Make types smaller or bigger - Maybe */
    short int x; /* 2 bytes */
    short y; /* Defaults to short int - 2 bytes */
    long int z; /* 4 bytes */
    long float f; /* 8 bytes */

    printf("The value of e is %d\n", e); /* In Binary 255 is -> 1 1 1 1 1 1 1 1 and because C defaults to signed this will print -1 (-128 + 127) */
    printf("The value of c is %d\n", c); /* In Binary 127 is -> 0 1 1 1 1 1 1 1 */
    printf("The value of e is %d\n", u);

    /* Try to add 1 to u and c */
    c += 1;
    u = u + 1;

    /* Print again */
    printf("The value of e is %d\n", c); /* In Binary 127 + 1 will be -> 1 0 0 0 0 0 0 0 -> because C defaults to signed and the 8th bit is the sign bit we get -128 */
    printf("The value of u is %d\n", u); /* In Binary 255 + 1 will be -> 1 0 0 0 0 0 0 0 0 -> because a char is 1 byte (8 bits) C will only look at the first 8 bits -> 0 0 0 0 0 0 0 0 */

    /* Print the size of the short and long modifiers */
    printf("The size of short ints x and y are %d and %d bytes\n", sizeof(x), sizeof(y));
    printf("The size of long int z is %d bytes\n", sizeof(z));
    printf("The size of long float f is %d bytes\n", sizeof(f));
}

/* Casting in C */
void CastDemo(void)
{
    
}

int main(void)
{
	/*printf("Hello Cruel World");*/
    /*PrimitiveDataTypes();*/
    /*Modifiers();*/

    CastDemo();
}