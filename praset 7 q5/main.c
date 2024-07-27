/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void funct(int arr[],int n);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    funct(arr,10);
    return 0;
}
void funct(int arr[],int n)
{
    for (int i=(n-1);i<n;i--)
    {
        if(i>=0)
      printf("%d\n",arr[i]);   
    }
}