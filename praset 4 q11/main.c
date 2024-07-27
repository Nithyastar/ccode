/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=2,n,prime=0;
    printf("enter number:");
    scanf("%d",&n);
    
    while(i<n)
    {
       if(n%i==0)
       {
         prime=1;
          break;
       }
     i=i+1;   
    }   
    if(prime==1)
       {
         printf("%d is not a prime number",n);
       }
    
    else
       {
           printf("%d is a prime number",n);
       }
       
    return 0;
}
