/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct employee{    
    char name[100];
    int code;
    float salary;
};
void funct(struct employee emp){
    printf("%s\n",emp.name);
    printf("%d\n",emp.code);
    printf("%f\n",emp.salary);
    }


int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    strcpy(e1.name,"larry");
    // e1.code=100;
    // e1.salary=90000;
    (*ptr).code=100;
    (*ptr).salary=90000;
    // (ptr)->code=100;
    // (ptr)->salary=90000;
    funct(e1);
    return 0;
}




