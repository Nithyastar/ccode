/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
    int arr[10];
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<=9;i++)
    {
      arr[i]=n*(i+1);  
      printf("%d*%d=%d\n",n,(i+1),arr[i]);
    }
    return 0;
}
