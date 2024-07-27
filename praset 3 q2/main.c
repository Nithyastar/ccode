/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float Maths,Eng,Science,Total_marks;
    printf("Enter english marks:");
    scanf("%f",&Eng);
    printf("\nEnter science marks:");
    scanf("%f",&Science);
    printf("\nEnter maths marks:");
    scanf("%f",&Maths);
    //printf("\nEnter total marks:");
    //scanf("%f",&marks);
    Total_marks=(Eng+Science+Maths)/3;
    printf("Total marks:%f",Total_marks);
    if(Total_marks>=40 && Eng>=33 && Science>=33 && Maths>=33)
    {
        printf("\npass");
    }
    else
    {
        printf("\nfail");
    }
    return 0;
}

