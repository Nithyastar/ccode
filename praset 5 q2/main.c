/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float temperature(float celsius); 
int main()
{   float celsius,farhenheit;
    printf("enter temperature in celsius:");
    scanf("%f",&celsius);
    farhenheit=temperature(celsius);
    printf("temperature in fahrenheit:%f",farhenheit);
    return 0;
}
float temperature(float a)
{
   float temp;
   temp=(a*9/5)+32;
   return temp;
}