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
    int n, * ptr;
    scanf("%d",&n);
    ptr = (int*)calloc(n ,sizeof(int)); 
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d stored in a stack of dynamic memory allocation :",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("The element %d stored in a stack of dynamic memory allocation is %d\n",i,ptr[i]);
    }
    return 0;
}
