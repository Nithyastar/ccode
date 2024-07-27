/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   float rad,pi=3.14,height,a,v;
    scanf("%f",&rad);
    a=pi*rad*rad;
    printf("area of circle:%f\n",a);
    scanf("%f",&height);
    v=a*height;
    printf("volume of cylinder:%f",v);
    return 0;
}
