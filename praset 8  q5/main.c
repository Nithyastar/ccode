/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
char strcopy(char *ptr)
{
    char *p;
    char str2[100];
    p=ptr;
    for(int i=0;i<100;i++)
    {
      while(*p !='\0') 
      {
          str2[i]=*p;
           printf("%c",str2[i]);
           p++;
      }
    }
}

int main()
{
    char str1[100]="string";
    strcopy(str1);
    return 0;
}
