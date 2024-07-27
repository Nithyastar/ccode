/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *p;
    FILE *p1;
    int num;
    p=fopen("a2.txt","r");
    fscanf(p,"%d",&num);
    p1=fopen("a2.txt","w");
    fprintf(p1,"%d",2*num);
    return 0;
}
