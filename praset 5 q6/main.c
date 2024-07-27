/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int n_sum=sum(n);
    printf("sum of %d natural number:%d",n,n_sum);

    return 0;
}
int sum(int n)
{
    if(n!=0)
    {
     if(n==1)
     return 1;
    
     else
     return sum(n-1)+n;
    }
}