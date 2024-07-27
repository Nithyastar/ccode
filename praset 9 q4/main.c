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
int main()
{
   struct vector v1,v2;
   struct vector *ptr1;
   struct vector *ptr2;
   ptr1=&v1;
   ptr2=&v2;
   ptr1-> x =95;
   ptr1-> y =5;
   ptr2-> x =85;
   ptr2-> y =15;
   printf("The x and y dimension of vector 1:\n %d \n %d\n",ptr1-> x,ptr1-> y);
   printf("The x and y dimension of vector 2:\n %d \n %d\n",ptr2-> x,ptr2-> y);
   return 0;
}
