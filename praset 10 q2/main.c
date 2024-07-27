/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    FILE *ptr;
    ptr=fopen("multiplication.txt","w");
    for(int i=0;i<10;i++)
    {
        fprintf(ptr,"%d*%d=%d\n",n,i+1,n*(i+1));
    }
    fclose(ptr);
    
    return 0;
}
