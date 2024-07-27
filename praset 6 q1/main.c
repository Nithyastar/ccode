/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//#include<inttypes.h>
int main()
{
    int a=9;
    unsigned int *p;
    p=&a;
    printf("address of a:%u\n",p);  // by default int is unsigned int,%u is unsigned int 
                                  // it  will match.eventhough some of the complier gives warning.
    printf("address of a:%u\n",&a);
    printf("address of a:%u\n",&p);
    printf("value of a:%d\n",a);
    printf("value of a:%d\n",*(&a));
    printf("value of a:%d\n",*p);
    return 0;
}


