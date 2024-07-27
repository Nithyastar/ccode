/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int * ptr;
    ptr= (int*)malloc(6*sizeof(int));
    ptr[0]=5;
    ptr[1]=6;
    ptr[2]=7;
    ptr[3]=8;
    ptr[4]=9;
    ptr[5]=10;
    for(int i=0;i<6;i++)
    {
        printf("The value of elements:%d\n",ptr[i]);
    }
    return 0;
}
