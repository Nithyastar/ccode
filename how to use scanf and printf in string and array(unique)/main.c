/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int arr[100];   //arr=&arr[0] so,we can directly point to arr by pointer.
    int *ptr=arr;   
    scanf("%d",arr);
    printf("%d\n",*ptr);
    char str[100];
    char *p;
    p=str;
    scanf("%s",p); // in scanf no need to use & in array or string as arr=&arr[0],str=&arr[0] by default
    printf("%s",str); // in printf directly we can use array or string even it is address by default
    
    
    return 0;
}

