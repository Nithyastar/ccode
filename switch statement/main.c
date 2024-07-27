/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int i;
    printf("Enter the date of august(1 to 31):\n ");
    scanf("%d",&i);
    switch(i)   //number i match with case number
    {

        case 15:
         printf("Independence day\n");
         break;
        case 16:
         printf("Paris new year\n");
         break;
        case 20:
         printf("Vinayaka chathurthi\n ");
         break;
        case 29:
         printf("Onam\n");
         break;
        default:
        printf("Normal day\n");
        
        
    }
    
    
}


