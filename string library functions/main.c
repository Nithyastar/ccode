/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h> // in this string header file library functions like strlen,strcpy,strcat,strcmp stored
int main()
{
    char str1[10]="array";
    char str2[10]="array";
    printf("Lenght of strings str1,str2:");
    int a=strlen(str1);
    int b=strlen(str2);
    printf("\n%d \n%d\n",a,b);
    char str3[100];
    strcpy(str3,str1);
    printf("%s\n",str3);
    strcat(str1,str2); 
    printf("%s\n",str1); // concatenation in str1 is temporary.rerun will leads to original str1.
    //int s=strcmp(str1,str2);
    printf("%d",strcmp(str1,str2));
    return 0;
}
