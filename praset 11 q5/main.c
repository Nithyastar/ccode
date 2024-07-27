/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr= (int*) malloc(10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        printf("7*%d=%d\n",i+1,7*(i+1));
    }
    printf("\n");
    ptr= (int*) malloc(15*sizeof(int));
    for(int i=0;i<15;i++)
    {
        printf("7*%d=%d\n",i+1,7*(i+1));
    }
}
