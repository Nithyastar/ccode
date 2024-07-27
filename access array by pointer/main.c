/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int marks[4] ={90,91,92,98}; // declare and initialize all array elements 
    //int marks[4] //declare array
    // marks[0]=90; access the each elements of array
    int *p=&marks[0];
    printf("%d\n",*p);
    printf("%u\n",p);
    p++; // you can access the elements of array by pointer
    printf("%d\n",*p);
    printf("%u",p);

    return 0;
}
