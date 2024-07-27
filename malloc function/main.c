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
    ptr = (float*) malloc(10* sizeof(float)); 
    for(int i=0;i<10;i++)
    {
        printf("Enter the element %d stored in a stack of dynamic memory allocation :",i);
        scanf("%f",&ptr[i]);// if more input is given than space while using dynamic memory
        // it will take because while complication we will know no of input but allocate takes while
        //execution (after the compilation)
        //but in array input is more than specified number of elements error  will be seen 
    }
    for(int i=0;i<10;i++)
    {
        printf("The element %d stored in a stack of dynamic memory allocation is %f\n",i,ptr[i]);
    }
    return 0;
}
