/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   int i,m;
    printf("print the number up to:");
    scanf("%d",&i);
    m=1;
    do{
       printf("\n%d",m);
       m=m+1;
      }while(m<=i);
    return 0;
}
