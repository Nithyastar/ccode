/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct date{
    int sec;
    int min;
    int hrs;
}Time;
void display(Time d3,Time d4)
{
    printf("The date is: %d:%d:%d",d3.hrs,d3.min,d3.sec);
    printf("\nThe date is: %d:%d:%d\n",d3.hrs,d4.min,d4.sec);
}
void comp(Time D1,Time D2)
{
    if(D1.sec==D2.sec && D1.min==D2.min &&  D1.hrs==D2.hrs)
    {
       printf(" Time same");
    }
    else
    {
       printf("Time not same"); 
    }
}
int main()
{
    Time d1={10,9,21};
    Time d2={10,7,21};
    display(d1,d2);  
    comp(d1,d2);
    return 0;
}


