/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>

int main()
{   
    float P,R,T;
    printf("Enter the principle amount in P\n"
           "Enter the rate of interest in R\n"
            "Enter the no. of years  in T\n");

    scanf("%f \n %f \n %f",&P,&R,&T);
    printf("P:%f\n",P);
    printf("R:%f\n",R);
    printf("T:%f\n",T);
    printf("the simple interest:%f",P*R*T);


    return 0;
}
