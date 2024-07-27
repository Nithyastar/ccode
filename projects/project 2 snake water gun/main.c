/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char comp,player;
    int i=0;
    char stop,n;
    int count1=0;
    int count2=0;
    //printf("Enter the 's' for snake,'w' for water,'g' for gun:\n");
    //while((stop= getchar())=='\n');
    while(i<=4)
    {
     printf("Enter the 's' for snake,'w' for water,'g' for gun:\n");
     scanf("%c%c",&player,&n); //n takes enter character we have to us it 
//because while loop take enter as another character if we give more input it will give input buffer
     // so we have to consider another character and make it to take the enter as a character 
     srand(time(0));
     int number=rand()%10 + 1;
     if(number<=4)
     {
        comp='w';
     }
     else if(number>4 && number<=7)
     {
        comp='s';
     }
     else
     {
        comp='g';
     }

     if(player==comp)
     {
         printf("Tie! No point\n");
         i++;
     }
    
     else if((player=='w' && comp=='g')|(player=='s' && comp=='w')| (player=='g' && comp=='s'))     
         {
            printf("You won! 1 point to gamer\n");
            count1++;
            i++;
         }
     else if(player=='g' && comp=='w' | player=='w' && comp=='s' |player=='s' && comp=='g')
         {
            printf("You lost! 1 point to computer\n");
            count2++;
            i++;
         }
     
    }
    if(count2>count1)
    {
        printf("YOU LOST THIS MATCH!");
    }
    else if(count1>count2)
    {
        printf("YOU WON THIS MATCH!");
    }
    else
    {
        printf("MATCH TIE");
    }
    return 0;
}




