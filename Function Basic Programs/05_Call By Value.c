#include<stdio.h>
#include<conio.h>
void ValueIncr(int);

int main()
{
    int Num=0;

    printf("\nEnter a Value=>");
    scanf("%d",&Num);

    ValueIncr(Num);

    printf("\n\nBack Inside Main()\n");
    printf("\n\nValue of given Number After function Call is = %d",Num);

    getch();
    return 0;
}
void ValueIncr(int No)
{
    printf("\nWelcome inside Function,value Received = %d",No);

    No++;

    printf("\nBye Bye Value Changed by Function = %d",No);
}
