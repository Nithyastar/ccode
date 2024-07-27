/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// #include <stdio.h>
// int print_array(int a[],int n);
// int main()
// {   
//     int arr[10]={91,92,93,94,95,96,97,98,99,100};
//     print_array(arr,10);

//     return 0;
// }
// int print_array(int a[],int n)
// {
//     for(int i=0;i<=9;i++)
//     {
//         printf("The value of %d element is %d\n",i+1,a[i]);
//     }
// }

#include <stdio.h>
int print_array(int *ptr,int n);
int main()
{   
    int arr[10]={91,92,93,94,95,96,97,98,99,100};
    print_array(arr,10);

    return 0;
}
int print_array(int *ptr,int n)
{
    for(int i=0;i<=9;i++)
    {
        printf("The value of %d element is %d\n",i+1,*(ptr+i));
    }
}