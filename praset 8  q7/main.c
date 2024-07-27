/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void strascii(char *str)
{
   char *p;
   p=str;
   while(*p!='\0')
   {
     printf("%c",*p-1);
     p++;
   }
}
int main()
{
    char str[100]="D!QSPHSBNNJOH";
    strascii(str);

    return 0;
}
