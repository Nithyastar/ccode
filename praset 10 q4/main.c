/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char name1[100];
    int salary1;
    char name2[100];
    int salary2;
    printf("Enter the name and salary of employee 1:");
    scanf("%s",name1);
    scanf("%d",&salary1);
    printf("Enter the name and salary of employee 2:");
    scanf("%s",name2);
    scanf("%d",&salary2);
    FILE *p;
    p=fopen("employee.txt","w");
    fprintf(p,"%s,%d\n",name1,salary1);
    fprintf(p,"%s,%d",name2,salary2);
    return 0;
}
