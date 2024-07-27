/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n,f;
    printf("enter fibonacci number:");
    scanf("%d",&n);
    f=fibonacci(n);
    printf("%dth number in fibonacci series:%d",n,f);
    return 0;
}
int fibonacci(int n)
{
    if(n==1)
    return 0;
    
    else if(n==2)
    return 1;
    
    else
    return fibonacci(n-2)+fibonacci(n-1);
}