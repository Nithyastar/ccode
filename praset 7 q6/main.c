/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void funct(int *a,int n);
int main()
{

    int array[10]={-33,1,-1,3,5,9,10,98,99,100};
    funct(array,10);

    return 0;
}
void funct(int *a,int n)
{
    int count=0;
    for(int i=0;i<=9;i++)
    {
      if(*a>=0)
     {
       count++;
    //   printf("%d")
     }
     a++;
    }
    printf("%d",count);
    
}
