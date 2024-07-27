/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("%u\n",p);
    printf("%u\n",q);
    p++;
    printf("%u\n",p); // address location is shifted 4 .the variable is int type (4 bytes) want 4 memory
    p--;                // location 
    printf("%u\n",p);// pointer arithmatic to know about size of data type of variable
                     // to which it is pointed
    printf("%u\n",p-q);
    return 0;
}
