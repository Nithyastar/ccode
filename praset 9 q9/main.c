/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct date{
    int day;
    int month;
    int year;
}date;
void display(date d3,date d4)
{
    printf("The date is: %d/%d/%d",d3.day,d3.month,d3.year);
    printf("\nThe date is: %d/%d/%d\n",d3.day,d4.month,d4.year);
}
void comp(date D1,date D2)
{
    if(D1.day==D2.day && D1.month==D2.month&&  D1.year==D2.year)
    {
       printf(" The date are same");
    }
    else
    {
       printf("The date are not same"); 
    }
}
int main()
{
    date d1={10,9,21};
    date d2={10,10,21};
    display(d1,d2);  
    comp(d1,d2);
    return 0;
}
