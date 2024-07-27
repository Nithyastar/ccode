/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
     int number,num,count=0;
     srand(time(0));
     number=rand()%100 + 1;
     while(count<=10)
    {
     printf("Enter a number:");
     scanf("%d",&num);
     if(num==number)
     {
         printf("Congratulations! you guess right\n");
         printf("Number of chance that you have taken to guess number:%d\n",count);
         break;
     }
     else if(num>number)
     {
         printf("you guess is wrong\n");
         printf("lower number please\n");
         count+=1;
     }
     else
     {
        printf("you guess is wrong\n");
        printf("higher number please\n");
        count+=1;
     }
    }
    printf("game over");
    return 0;
}
