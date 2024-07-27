/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float marks[5];
    printf("Enter the marks of student 1:");
    scanf("%f",&marks[0]);
    printf("\nEnter the marks of student 2:");
    scanf("%f",&marks[1]);
    printf("\nEnter the marks of student 3:");
    scanf("%f",&marks[2]);
    printf("\nEnter the marks of student 4:");
    scanf("%f",&marks[3]);
    printf("\nEnter sthe marks of student 5:");
    scanf("%f",&marks[4]);
    printf("The marks of student 1:%f\n",marks[0]);
    printf("The marks of student 2:%f\n",marks[1]);
    printf("The marks of student 3:%f\n",marks[2]);
    printf("The marks of student 4:%f\n",marks[3]);
    printf("The marks of student 5:%f\n",marks[4]);
    
    return 0;
}
