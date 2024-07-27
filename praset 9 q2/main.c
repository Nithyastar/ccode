/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct vector{
    int x;
    int y;
};
void sum_vector(struct vector vec1,struct vector vec2)
{
   printf("The x dimension of sum vector:%d\n",((vec1.x)+(vec2.x))); 
   printf("The y dimension of sum vector:%d\n",((vec1.y)+(vec2.y)));  
}
int main()
{
    struct vector v1,v2;
    v1.x=90;
    v1.y=5;
    v2.x=95;
    v2.y=5;
    sum_vector(v1,v2);

    return 0;
}
