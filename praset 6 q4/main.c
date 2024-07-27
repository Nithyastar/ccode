/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void sum_and_avg(int a,int b,float *sum,float *avg);
int main()
{   
    int i=100,j=100;
    float sum,avg;
    sum_and_avg(i,j,&sum,&avg);
    printf("sum:%f\n",sum);
    printf("average:%f",avg);
    return 0;
}
void sum_and_avg(int a,int b,float *sum,float *avg)
{
  *sum= a+b;
  *avg= (*sum)/2;
}