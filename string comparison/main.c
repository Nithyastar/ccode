/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[10]="array";
    char str2[10]="string";
    int s=strcmp(str1,str2);//in some complier difference ascii value of first missmatching 
                            //character of string will return
    printf("%d",strcmp(str1,str2)); // in some compiler ascii difference is negative directly returns -1
                                        //if same returns 0 // if positive return 1
                             // in gdb compiler returns the ascii difference           

    return 0;
}
