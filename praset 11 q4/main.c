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
    ptr= (int*)malloc(5*sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("\n%d",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("The value of elements:%d\n",ptr[i]);
    }
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        scanf("\n%d",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("The value of elements:%d\n",ptr[i]);
    }
    return 0;
}