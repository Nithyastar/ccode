/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
// void funct(int ptr[],int a,int b);
// int main()
// {
//     int a=4,b=2;
//     int arr[4][2];
//     printf("enter 2d array:\n");
//     for(int i=0;i<=3;i++)
//     {
//         for(int j=0;j<=1;j++)
//         {
//           scanf("%d",&arr[i][j]);
//         }
//     } 
    
//     funct(arr,4,2);
    
//     return 0;
// }
// void funct(int ptr[],int a,int b)
// {
//      int i,j; 
//   for(i=0;i<a;i++)
//     {
//         for(j=0;j<b;j++)
//         {
//           printf("The elements of %d array: %d\n",i+1,*(ptr));
//           ptr++;
//         }
//         printf("\n");
//     }
// }
   
#include <stdio.h>
void funct(int * ptr,int a,int b);
int main()
{
    int a=4,b=2;
    int arr[4][2];
    printf("enter 2d array:\n");
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=1;j++)
        {
          scanf("%d",&arr[i][j]);
        }
    } 
    
    funct(arr,4,2);
    
    return 0;
}
void funct(int * ptr,int a,int b)
{
     int i,j; 
  for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
          printf("The elements of %d array: %d\n",i+1,*ptr);
          ptr++;
        }
        printf("\n");
    }
}


