#include<stdio.h>
#include<conio.h>
 void OriginalIncr(int*);

 int main()
 {
     int Num=0;

     printf("\nEnter a Value=");
     scanf("%d",&Num);

     OriginalIncr(&Num);

     printf("\nBack inside Main()\n");
     getch();

     printf("\n\nValue of Given Number After Function Call = %d",Num);

     getch();
     return 0;
 }

void OriginalIncr(int*ip)
{
    printf("\nWelcome Inside Function,Value Received = %d",*ip);
    (*ip)++;
    printf("\nBye Bye Value Changed by Function = %d",*ip);
}
