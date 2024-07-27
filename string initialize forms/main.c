/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char str[100]={ 'A','j','j','i','\0'}; //string character to initialize a string 
    printf("%s\n",str); // to print string fully
    char str1[100]="grandmother\n"; //string literal to initialize a string where null character
                                  //automatically taken
    printf("%s",str1);
    for(int i=0;i<=4;i++)
    {
        printf("%c",str[i]); // to print the string character by character
    }
    printf("\n");
    for(int i=0;i<=10;i++)
    {
        printf("%c",str1[i]);
    }
    printf("\n");
    char str2[10];
    char str3[100];
    scanf("%s",&str2[0]); // if %s is used to take input spaces should not be given in string 
                          // space in string leads to not take input further 
    printf("%s",str2);
    printf("\n");
    for(int i=0;i<=10;i++)
    {
    scanf("%c",&str3[i]);  // space in string can be allowed  
    }
    for(int j=0;j<=10;j++)
    {
    printf("%c",str3[j]);  // space in string can be allowed  
    }
    
    return 0;
}
