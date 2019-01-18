#include <stdio.h>
#include <string.h>
#include <string.h>

/*  */
#define NAME_MAX "10"

/* An enumeration consists of integral constants. To define an enumeration, the keyword enum is used 
    https://www.programiz.com/c-programming/c-enumeration
    Ex.
    enum flag {const1, const2, ..., constN};

    by default const1 will have a value of 0, const2 will have a value of 1 and constN will have a value of N-1
*/
enum BOOL { false, true };

/* 
Note: 
    Declaring Pointers
        ex. 
            char * cPrt ; 
            int * iPtr = null;

        Store addresses           
*/

void ReadString(char * cPtr, char * cLengthPrt);
void PrintString(char * cPtr);
void ReadNumbers(int * iPtr);
void PrintNumbers(int * iPrt, int size);
void ReadStringGets(char * cPtr);

char * ReadStringReturnBuffer();

void FlushDemo(void);

/* Exercise 1 */
void enumeration(void);
void enter_name(char * cNamePtr, char * cPrompt);
void test_enter_name(void);
void string_funcs(void);
void string_cat(char * leftPtr, char * rightPtr);
void test_string_cat(void);

void main(void)
{
    
    /* Create a buffer to put data into */
    char cArray [10];
    char cArray2 [10];
    char cBuffer [256];

    /* Demo 1 - Using a function called scanf to input a string */
    
    /*
    ReadString(cArray, "4");
    PrintString(cArray);
    */

    /* Demo 2 - Scanf with multiple values */
    /* The format specifier specifies two strings in this case */
    /*scanf("%4s %4s", cArray, cArray2);
    printf("Enter two strings:\n");
    PrintString(cArray);
    PrintString(cArray2);*/

    /* Demo 3 - Read in some integers */
    /*int iArray [4];
    ReadNumbers(iArray);
    /* This is how we calculate the size of an array */
    /* Note: You can only do this in the same scope as where the array was declared */
    /* PrintNumbers(iArray, sizeof(iArray) / sizeof(int)); */


    /* Demo 4 Using gets() */
    /* ReadStringGets(cBuffer); */
    /* PrintString(cBuffer); */


    /* Demo 5 Returning an array (buffer) */
    /*char * cPtr = ReadStringReturnBuffer();
    PrintString(cPtr);*/


    /* Demo 6 Flush Demo */
    /* FlushDemo(); */


    /* Exercise 1 - 1 */
    /* enumeration(); */

    /* Exercise 1 - 2 */
    /* test_enter_name(); */

    /* Exercise 1 - 3 */
    string_funcs();

}

void test_string_cat()
{
    char left[] = "Hello";
    char right[] = "World";
    char concat[20];
    
    concat[0] = '\0';

    string_cat(concat, left);
    string_cat(concat, " ");
    string_cat(concat, right);

    printf("%s" , concat);
}

void string_funcs(void)
{
    /* 
        strlen - Counts the number of characters, is the number of bytes - 1 in these cases - the 1 byte is the escape character which is not counted
    */

    char cEmpty [] = "";
    /* strlen
        Output: 0
    */

    char cNT [] = "\0";
    /* strlen
        Output : 0
        
    */

    char cMidNT [] = "Hello \0 World";
    /* strlen
        Output: 6

    */

    char cEscape [] = "Hello \t World";
    /* strlen
        Output: 13

    */

    char cQuote [] = "\"Hello World\"";
    /* strlen
        Output: 13

       strcpy
        Output: 
    */

    /* Testing strlen - String length */
    printf("The length of cEmpty is %d\n", strlen(cEmpty));
    printf("The length of cNT is %d\n", strlen(cNT));
    printf("The length of cMidNT is %d\n", strlen(cMidNT));
    printf("The length of cEscape is %d\n", strlen(cEscape));
    printf("The length of cQuote is %d\n", strlen(cQuote));

    /* Testing strcpy - String copy */



    /* Testing strcat - String concat */

    /* Testing strcmp - String compare */

}

void enter_name(char * cNamePtr, char * cPrompt)
{
    printf("%s\n", cPrompt);

    char cFormat[5];

    /* Initialize an empty string */
    cFormat[0] = '\0';

    /* Use string concatenation to build a format specifier */
    strcat(cFormat, "%");
    strcat(cFormat, NAME_MAX);
    strcat(cFormat, "s");

    scanf(cFormat, cNamePtr);
}

void test_enter_name(void)
{
    /* Input Buffers */
    char cFName [10];
    char cLName [10];

    char promptFirst [] = "Enter your first name:";
    char promptLast [] = "Enter your last name:";

    enter_name(cFName, promptFirst);
    enter_name(cLName, promptLast);

    printf("Your first name is: %s\n", cFName);
    printf("Your last name is: %s\n", cLName);

}

void enumeration(void)
{
    int i = 1;

    /* Instance of enumeration */
    enum BOOL done = false; /* In C there are no real booleans, only zero and non-zero, zero evaluates as false and non-zero evaluates as true */

    do
    {
        printf("%d\n", i);
        i++;
        if (i > 15) { done = true; }
    } while (!done);
}

void FlushDemo(void)
{
    int iVal;
    char cArray [50];

    printf("Enter a number: \n");
    scanf("%d", &iVal);
    printf("The number is %d\n", iVal);
    
    /* fgets is set up to read up to the new line constant 
        Since scanf left the previous new line in the input stream
        fgets reads that and then quits 
        
        Historyically we would "Flush" the stream to remove any contents */

    /* fflush(stdin); Doesn't work anymore */
    
    /* Now, we just read the single newline character */
    getc(stdin);
    
    printf("Enter a string: \n");
    fgets(cArray, 49, stdin);
    PrintString(cArray);
}

void ReadString(char * cPtr, char * cLengthPtr)
{
    char cFormat [4];

    /* Initialize an empty string */
    cFormat[0] = '\0';

    /* Use string concatenation to build a format specifier */
    strcat(cFormat, "%");
    strcat(cFormat, cLengthPtr);
    strcat(cFormat, "s");

    printf("Enter a string:\n");
    /* Note that scanf will scan up to the first space or until you hit enter */
    /* 
    scanf("%s", cPtr);

    Note: It is possible to overflow the buffer. We can prevent this as follows: */

    /* To scan only 10 characters */
    /* scanf("%10s", cPtr);*/
    
    /* Use the dynamically generated format specifier */
    scanf(cFormat, cPtr);

}

void PrintString(char * cPtr)
{
    printf("%s\n",  cPtr);
}

void ReadNumbers(int * iPtr)
{
    // Note: When we take the size of a pointer, it will always return 4 bytes on this system because a pointer stores 1 address which is 4 bytes
    printf("The size of iPtr is %d\n", sizeof(iPtr));
    printf("Enter your numbers: \n");

    /* Note that scanf returns the number of reads that were successful */
    /* If it returns a 0, it will exit out of the loop - 0 is false in C and anything non-zero is true */
    while (scanf("%d", iPtr++))
    {
        /* This is called "pointer math" - Note that C move 4 bytes in this case because it looks at the type of pointer and moves to the next address  */
        /* iPtr = iPtr + 1; */
        /* iPtr++; */
        /* This is called walking the pointer */
    }

}

void PrintNumbers(int * iPtr, int size) 
{
    /* Display the numbers in the array */
    for (int i = 0; i < size; i++)
    {
        /* can still [] on a pointer */
        printf("%d\n", iPtr[i]);
    }

}

void ReadStringGets(char * cPtr)
{
    printf("Enter a big string: \n");
    /* Could easily overflow the buffer */
    /* gets(cPtr);*/
    /* Could use Microsoft's new, improved, "safe" function but that won't work on Linux */
    /* Or you could do it a better way */
    fgets(cPtr, 255, stdin);
}

char * ReadStringReturnBuffer()
{
    /* When allocating a buffer on the call stack, the address should not be returned */
    /* This memory space will eventually be overwritten. The solution is to pass the address 
        of a buffer in as a parameter OR dynamically allocate memory on the heap */
    char cBuffer [256];
    printf("Enter a string:\n");
    fgets(cBuffer, 255, stdin);

    PrintString(cBuffer);
    return cBuffer; /* You are returning an address for the memory that was allocated in the stack frame but now the stack from is done so it can be overwritten */
}