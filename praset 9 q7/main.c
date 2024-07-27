/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct complex{
    int real;
    float img;
}cmp;
void funct(cmp comp)
{
    printf("%d+i%.2f",comp.real,comp.img);
}
int main()
{
    cmp c1;
    c1.real= 10;
    c1.img=9.1;
    funct(c1);
    return 0;
}
