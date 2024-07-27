/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct bank_account{
  char name[100];
  long int accountnum;
  int IFSCcode;
  float accountbalance;
  char bankname[100];
}account;

void funct(account a)
{
    printf("Account details:\nName:%s",a.name);
    printf("\nAccount number:%ld",a.accountnum);
    printf("\nIFSC code:%d",a.IFSCcode);
    printf("\nAccount balance:%f",a.accountbalance);
    printf("\nBank name:%s",a.bankname);
} 
int main()
{ 
    account a1;
    strcpy(a1.name,"larry");
    a1.accountnum=129020378899;
    a1.IFSCcode=99912;
    a1.accountbalance=100000;
    strcpy(a1.bankname,"KAMATH BANK");
    // printf("Account details:\nName:%s",a1.name);
    // printf("\nAccount number:%ld",a1.accountnum);
    // printf("\nIFSC code:%d",a1.IFSCcode);
    // printf("\nAccount balance:%f",a1.accountbalance);
    // printf("\nBank name:%s",a1.bankname);
    funct(a1);
    return 0;
}

