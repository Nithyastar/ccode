/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[2][3][4]={{{1,2,3,4},{3,4,5,6},{5,6,7,8}},{{3,4,5,6},{5,6,7,8,},{7,8,9,10}}};
    int *ptr = &arr[0][0][0];
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=2;j++)
        {
            for(int k=0;k<=3;k++)
               {
                 printf("Address of element[%d][%d][%d] is %u\n",i+1,j+1,k+1,ptr);
                 ptr++;
               }
         printf("\n");
        }
     printf("\n");    
    }    
    return 0;
}


