/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
 typedef struct employee{    
    char name[100];
    int code;
    float salary;
}emp1; // typedef is used to use emp1 alias name(nic name) instead of using struct employee
void funct( emp1 emp){
    printf("%s\n",emp.name);
    printf("%d\n",emp.code);
    printf("%f\n",emp.salary);
    }


int main()
{
    emp1 e1;
    emp1 *ptr;
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

