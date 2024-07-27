/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE *ptr;
    FILE *ptr1;
    FILE *ptr3;
    FILE *ptr4;
    ptr=fopen("file3.txt","r");
    ptr1=fopen("file4.txt","w");
    char c=fgetc(ptr);
    while(c!=EOF){
        fputc(c,ptr1);
        c=fgetc(ptr);
    }
    fprintf(ptr1,"\n");
    fclose(ptr);
    ptr3=fopen("file3.txt","r");
    char d=fgetc(ptr3);
    while(d!=EOF){
        fputc(d,ptr1);
        d=fgetc(ptr3);
    }
    fclose(ptr3);
    
    // ptr4=fopen("file4.txt","r");
    // ptr3=fopen("file4.txt","a");
    // char d=fgetc(ptr4);
    // while(d!=EOF){
    //     fputc(d,ptr3);
    //     d=fgetc(ptr4);
    // }
    return 0;
}
