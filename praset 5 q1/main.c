/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int average(int a,int b,int c);
int main()
{
  int a,b,c,value;  
  printf("enter three number:");
  scanf("%d\n %d\n %d",&a,&b,&c);
  value=average(a,b,c);
  printf("average of three numbers:%d",value);
    return 0;
}
int average(int i,int k,int g)
{ 
    int average;
    average=(i+k+g)/3;
    return average;
}    
    

