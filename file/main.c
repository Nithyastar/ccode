/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   FILE * ptr;
  ptr=fopen("a1.txt","w");
  char c;
  fprintf(ptr,"coder's coding never stops");
  fclose(ptr);
  ptr=fopen("a1.txt","r");
  fscanf(ptr,"%c",&c);
  printf("%c",c);
  fscanf(ptr,"%c",&c);
  printf("%c\n",c);
  fclose(ptr);
   ptr=fopen("a1.txt","r");
   while(c!=EOF)
   {
    c=fgetc(ptr);
    printf("%c",c);
   }
   fclose(ptr);
  ptr=fopen("a2.txt","w");
  {
      fputc('c',ptr);
      fputc('o',ptr);
      fputc('d',ptr);
      fputc('e',ptr);
  }
}
