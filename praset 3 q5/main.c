/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,num3,num4;
    printf("Enter a number1:");
    scanf("%d",&num1);
    printf("\nEnter a number2:");
    scanf("%d",&num2);
    printf("\nEnter a number3:");
    scanf("%d",&num3);
    printf("\nEnter a number4:");
    scanf("%d",&num4);
    if(num1>=num2 && num1>=num3 && num1>=num4)
    {
      printf("num1 greater");
    }
    else if(num2>=num1 && num2>=num3 && num2>=num4)
    {
      printf("num2 greater");
    }
    else if(num3>=num1 && num3>=num2 && num3>=num4)
    {
      printf("num3 greater");
    }
    else if(num4>=num1 && num4>=num2 && num4>=num3)
    {
      printf("num4 greater");  
    }
    return 0;
}

