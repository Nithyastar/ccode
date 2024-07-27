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
    int emp_id;
    float salary;
};
int main()
{
  struct employee e1;
  struct employee e2;
  struct employee e3;
  strcpy(e1.name,"Harry");
  e1.emp_id=100;
  e1.salary=90000;
  strcpy(e2.name,"Larry");
  e2.emp_id=98;
  e2.salary=95000;
  strcpy(e3.name,"Carry");
  e3.emp_id=99;
  e3.salary=99000;
  printf("%f\n",e3.salary);
    return 0;
}
