/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
typedef struct tmestmp{
    int year;
    int month;
    int day;
    int hrs;
    int min;
    int sec;
}tmstp;
void display(tmstp D1,tmstp D2)
{
    printf("%d-%d-%d:%d:%d:%d\n",D1.year,D1.month,D1.day,D1.hrs,D1.min,D1.sec);
    printf("%d-%d-%d:%d:%d:%d",D2.year,D2.month,D2.day,D2.hrs,D2.min,D2.sec);
}
//as a function it can return one value.we use if statment the firstsatisfied if condition returns value
int funct(tmstp D3,tmstp D4)
{
    if(D3.year>D4.year)
    {
      return 1;  
    } 
    else if(D3.year<D4.year)
    {
      return -1;  
    }
    else if(D3.month>D4.month)
    {
      return 1;  
    } 
    else if(D3.month<D4.month)
    {
      return -1;  
    }
    else if(D3.day>D4.day)
    {
      return 1;  
    } 
    else if(D3.day<D4.day)
    {
      return -1;  
    }
    else if(D3.hrs>D4.hrs)
    {
      return 1;  
    } 
    else if(D3.hrs<D4.hrs)
    {
      return -1;  
    }
    else if(D3.min>D4.min)
    {
      return 1;  
    } 
    else if(D3.min<D4.min)
    {
      return -1; 
    }
    else if(D3.sec>D4.sec)
    {
      return 1;  
    } 
    else if(D3.sec<D4.sec)
    {
      return -1; 
    }
    return 0;
    
}
int main()
{
    tmstp d1={2015,9,10,21,56,35};
    tmstp d2={2014,9,10,21,56,35};
    display(d1,d2);
    int d=funct(d1,d2);
    printf("\n%d",d);
    return 0;
}

