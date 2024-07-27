/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{    
    float income,tax;
    printf("Enter your income:\n");
    scanf("%f",&income);
    
    if(250000<income && income<=500000)
    {
        printf("\nyou have to pay 5 percent of income as a tax.tax to pay %f",tax=0.05*(income-250000));
    }
    else if(500000<income && income<=1000000)
    {
        printf("\nyou have to pay 20 percent of income as a tax.tax to pay %f",tax=0.2*(income-500000));
    }
    else if (income>1000000)
    {
    printf("\nyou have to pay 30 percent on exceed income as a tax.tax to pay%f",tax=0.3*(income-1000000));
    }
    else
    {
     printf("No tax to pay");
    }
    return 0;
}

