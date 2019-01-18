#include <stdio.h>

enum BOOL { false, true };

void enumeration(void)
{
    int i = 1;

    /* Instance of enumeration */
    enum BOOL done = false;
    do
    {
            printf("%d\n", i);
            i++;
            if(i > 15){ done = true; }
    }while(!done);
}