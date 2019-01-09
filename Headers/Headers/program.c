#include <stdio.h>
#include "pingpong.h" /* We include our header file but use quotes to indicate that it can be found in the local project */

/* Note that the funciton prototypes have been moved to the header file pingpong.h */

/* int main(char ** cArgs, int x) - takes in array of strings, number of strings */
int main(void)
{
    ping();

    /* Returning a 0 to the OS indicates that the program ended successfully */
    return 0;
}
