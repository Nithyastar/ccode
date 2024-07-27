/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=1,n,fact=1;
    printf("enter number to find factorial:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact *=i;
        i+=1;
    }
    printf("factorial of a %d:%d",n,fact);


    return 0;
}
