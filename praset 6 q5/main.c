/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=10,*j,**k;
    j=&i;
    k=&j;
    printf("%d\n",i);
    printf("%d\n",*j);
    printf("%d\n",**k);  // *j=i, *k=j ,*(*k)=*(j)=i
    return 0;
}
