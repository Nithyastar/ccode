/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    for(i=10; i;i--)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}
