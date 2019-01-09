/* At the start of every header file we will put in a "header guard" to make sure that there are 
no duplicate copies of this header in some other file */
#ifndef PINGPONG_H
#define PINGPONG_H
/* The solution the to undefined function or redefinition error is to "prototype" your functions */
/* This tells the compiler the functoin signature and name of all functions you intend to write */
void ping(void);
void pong(void);

#endif // !PINGPONG_H



