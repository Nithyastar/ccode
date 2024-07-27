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
    float * ptr;
    ptr = (float*) calloc(10 ,sizeof(float)); 
    for(int i=0;i<10;i++)
    {
        printf("Enter the element %d stored in a stack of dynamic memory allocation :",i);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("The element %d stored in a stack of dynamic memory allocation is %f\n",i,ptr[i]);
    }
    return 0;
}
