#include<stdio.h>
#include<conio.h>

void Find_Max(int *,int *);

int main()
{
    int Num1 = 0, Num2 = 0;

    printf("\nEnter Two Numbers :");
    scanf("%d%d",&Num1,&Num2);

    Find_Max(&Num1,&Num2);

    printf("\n\nThanks....");
    getch();
    return 0;
}

void Find_Max(int *P1,int *P2)
{
    if(*P1 == *P2)
    {
        printf("\nBoth Numbers are Equal...");
    }
    else if(*P1 > *P2)
    {
        printf("\nNumber %d is Maximum",*P1);
    }
    else
    {
        printf("\nNumber %d is Maximum",*P2);
    }
    return ;
}
