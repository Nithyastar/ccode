/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int value(int *i);
int main()
{
    int a=10;
    printf("before calling function to modify the value:%d\n",a);
    value(&a); // call by reference
    printf("after calling function to modify the value:%d",a); 
    return 0;
}
int value(int *i)
{
    *i=*i+10;
    return *i;
}
