/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     
    // int sum=0,i=1;
    // do
    // {
    //   sum=sum+i;
    //   i+=1;
    // }while(i<=10);
    // printf("%d",sum);
    int sum=0,i;
    for(i=1;i<=10;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}

