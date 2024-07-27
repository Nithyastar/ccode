/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct complex{
   int real;
   int img;
}comp;
void dispy(comp cmp)
{ 
    int i=1;
    printf("The complex number%d:\n%d+i%d\n",i,cmp.real,cmp.img);
    i++;
}

int main()
{
     comp c1[5];
     for(int i=0;i<=4;i++)
    {
      printf("Enter the real and imginary value of complex number%d:\n",i+1);  
      scanf("%d",&c1[i].real);
      scanf("%d",&c1[i].img);
    }
     for(int i=0;i<=4;i++)
     {
       dispy(c1[i]);
     }
    return 0;
}
