/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[10]={91,92,93,94,95,96,97,98,99,100};
    int *ptr=&arr[0];
    printf("%d\n",*ptr);
    printf("%d\n",*(ptr+2));
    printf("%d\n",*(ptr+8));
    printf("%d",*(ptr+9));
    return 0;
}
