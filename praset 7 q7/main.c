/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int multiple[3][10];
    int arr[3]={2,7,9};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=9;j++)
        {
           printf("%d*%d=%d\n",arr[i],j+1,arr[i]*(j+1)); 
        }
        printf("\n");
    }

    return 0;
}
